#include "pathchannel.h"
#include "ui_pathchannel.h"
#include "passid.h"
#include <QTimer>
#include <QDebug>
#include <ros/ros.h>
#include <geometry_msgs/Pose2D.h>
#include <std_msgs/Float32.h>

pathchannel::pathchannel(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::pathchannel),
    isDrawing(false)  // 初始化绘制模式状态为 false

{
    ui->setupUi(this);

    // 初始化 ROS
    int argc = 0;
    char **argv = nullptr;
    ros::init(argc, argv, "qt_ros_subscriber");
    ros::NodeHandle nh;

    // 创建 ROS 订阅者
    position_sub = nh.subscribe("/boat_position", 10, &pathchannel::boatPositionCallback, this);
    speed_sub = nh.subscribe("/boat_speed", 10, &pathchannel::boatSpeedCallback, this);

    // 使用定时器周期性调用 ros::spinOnce()
    QTimer *rosTimer = new QTimer(this);
    connect(rosTimer, &QTimer::timeout, this, &pathchannel::onRosSpinOnce);
    rosTimer->start(100);  // 每 100ms 调用一次 ros::spinOnce()

    // 初始化 WebEngineView
    webEngineView = ui->widget;
    channel = new QWebChannel(this);
    passId = new PassId();  // 假设 PassId 是你定义的类
    channel->registerObject("passId", passId);
    webEngineView->page()->setWebChannel(channel);
    webEngineView->load(QUrl::fromLocalFile("/home/ro/boat_test/road.html"));  // 替换为你的 HTML 文件路径
}

pathchannel::~pathchannel()
{
    delete ui;
}

void pathchannel::boatPositionCallback(const geometry_msgs::Pose2D::ConstPtr& msg)
{
    // 更新经度和纬度到 QLineEdit
    ui->lineEdit->setText(QString::number(msg->x, 'f', 6));  // 经度
    ui->lineEdit_2->setText(QString::number(msg->y, 'f', 6));  // 纬度
    ui->lineEdit_4->setText(QString::number(msg->theta, 'f', 2));  // 艏向（角度）

    // 调用 onBoatPosUpdated 更新地图
    onBoatPosUpdated(msg->y, msg->x, msg->theta);  // 纬度、经度、航向
}

void pathchannel::boatSpeedCallback(const std_msgs::Float32::ConstPtr& msg)
{
    // 更新航速到 QLineEdit
    ui->lineEdit_3->setText(QString::number(msg->data, 'f', 2));  // 航速
}

void pathchannel::onBoatPosUpdated(double latitude, double longitude, double theta)
{
    qDebug() << "Updating boat position:" << latitude << longitude << theta;
    // 调用 JavaScript 的 showBoatPosition 函数，并传递经纬度和角度
    QString script = QString("showBoatPosition(%1, %2, %3);")
                         .arg(longitude)
                         .arg(latitude)
                         .arg(theta);
    webEngineView->page()->runJavaScript(script);
}

void pathchannel::on_pushButton_clicked()
{
    this->parentWidget()->show();
    this->hide();
}

void pathchannel::onClearTrackClicked()
{
    // 清除跟踪数据
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
}

// 定时器回调函数，每100ms调用一次 ros::spinOnce()
void pathchannel::onRosSpinOnce()
{
    ros::spinOnce();
}

void pathchannel::on_pushButton_2_clicked()
{
    if (isDrawing) {
        ui->pushButton_2->setText("开启标注工具");  // 更新按钮文字

        // 触发 JavaScript 代码来禁用标注工具
        webEngineView->page()->runJavaScript("document.getElementById('toggleDrawingBtn').click();");
        webEngineView->page()->runJavaScript("document.getElementById('toggleMarkerBtn').click();");

        // 可以直接控制标注工具的状态，确保它被禁用
        webEngineView->page()->runJavaScript("drawingManager.close();");

        isDrawing = false;
    } else {
        ui->pushButton_2->setText("关闭标注工具");  // 更新按钮文字

        // 触发 JavaScript 代码来启用标注工具
        webEngineView->page()->runJavaScript("document.getElementById('toggleDrawingBtn').click();");
        webEngineView->page()->runJavaScript("document.getElementById('toggleMarkerBtn').click();");

        // 可以直接控制标注工具的状态，确保它被启用
        webEngineView->page()->runJavaScript("drawingManager.open();");

        isDrawing = true;
    }
}


void pathchannel::on_pushButton_3_clicked()
{

}

