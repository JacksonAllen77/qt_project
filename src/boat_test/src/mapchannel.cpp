#include "mapchannel.h"
#include "ui_mapchannel.h"
#include "passid.h"  // 确保包含 PassId 的完整定义
#include <QTimer>
#include <QDebug>
#include <ros/ros.h>
#include <geometry_msgs/Pose2D.h>
#include <std_msgs/Float32.h>

mapchannel::mapchannel(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::mapchannel)
{
    ui->setupUi(this);

    // 初始化 ROS
    int argc = 0;
    char **argv = nullptr;
    ros::init(argc, argv, "qt_ros_subscriber");
    ros::NodeHandle nh;

    // 创建 ROS 订阅者
    position_sub = nh.subscribe("/boat_position", 10, &mapchannel::boatPositionCallback, this);
    speed_sub = nh.subscribe("/boat_speed", 10, &mapchannel::boatSpeedCallback, this);

    // 使用定时器周期性调用 ros::spinOnce()
    QTimer *rosTimer = new QTimer(this);
    connect(rosTimer, &QTimer::timeout, this, &mapchannel::onRosSpinOnce);
    rosTimer->start(100);  // 每 100ms 调用一次 ros::spinOnce()

    // 初始化 WebEngineView
    webEngineView = ui->widget;
    channel = new QWebChannel(this);
    passId = new PassId();  // 假设 PassId 是你定义的类
    channel->registerObject("passId", passId);
    webEngineView->page()->setWebChannel(channel);
    webEngineView->load(QUrl::fromLocalFile("/home/ro/boat_test/map.html"));  // 替换为你的 HTML 文件路径
}

mapchannel::~mapchannel()
{
    delete ui;
}

void mapchannel::boatPositionCallback(const geometry_msgs::Pose2D::ConstPtr& msg)
{
    // 更新经度和纬度到 QLineEdit
    ui->lineEdit->setText(QString::number(msg->x, 'f', 6));  // 经度
    ui->lineEdit_2->setText(QString::number(msg->y, 'f', 6));  // 纬度
    ui->lineEdit_3->setText(QString::number(msg->theta, 'f', 2));  // 艏向（角度）

    // 调用 onBoatPosUpdated 函数并传递经度、纬度、艏向
    onBoatPosUpdated(msg->x, msg->y, msg->theta);  // 将数据传递给 onBoatPosUpdated
}

void mapchannel::onBoatPosUpdated(double latitude, double longitude, double theta)
{
    // 更新 UI 或执行其他操作
    ui->lineEdit->setText(QString::number(latitude, 'f', 6));
    ui->lineEdit_2->setText(QString::number(longitude, 'f', 6));
    ui->lineEdit_4->setText(QString::number(theta, 'f', 2));

    // 将接收到的数据传递到 JavaScript 进行地图更新
    QString script = QString("showBoatPosition(%1, %2, %3);").arg(latitude).arg(longitude).arg(theta);  // 使用传入的参数
    webEngineView->page()->runJavaScript(script);  // 执行 JavaScript 更新地图
}



void mapchannel::boatSpeedCallback(const std_msgs::Float32::ConstPtr& msg)
{
    // 更新航速到 QLineEdit
    ui->lineEdit_3->setText(QString::number(msg->data, 'f', 2));  // 航速
}

void mapchannel::on_pushButton_clicked()
{
    this->parentWidget()->show();
    this->hide();
}
void mapchannel::onClearTrackClicked()
{
    // 清除跟踪数据
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
}

// 定时器回调函数，每100ms调用一次 ros::spinOnce()
void mapchannel::onRosSpinOnce()
{
    ros::spinOnce();
}
