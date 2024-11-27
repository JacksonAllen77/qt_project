#include "mapchannel.h"
#include "ui_mapchannel.h"
#include "passid.h"
#include <QTimer>
#include <QDebug>
#include <ros/ros.h>
#include <geometry_msgs/Pose2D.h>
#include <std_msgs/Float32.h>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog>

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

    // 连接 PassId 类的信号到 mapchannel 的槽
    connect(passId, &PassId::saveTrackData, this, &mapchannel::saveTrackToCSV);
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
    ui->lineEdit_4->setText(QString::number(msg->theta, 'f', 2));  // 艏向（角度）

    // 调用 onBoatPosUpdated 更新地图
    onBoatPosUpdated(msg->y, msg->x, msg->theta);  // 纬度、经度、航向


    // 将船的轨迹点保存到本地
    BoatPoint point;
    point.longitude = msg->x;
    point.latitude = msg->y;
    point.theta = msg->theta;
    boatPoints.append(point);  // 将当前点添加到轨迹列表
}

void mapchannel::boatSpeedCallback(const std_msgs::Float32::ConstPtr& msg)
{
    // 更新航速到 QLineEdit
    ui->lineEdit_3->setText(QString::number(msg->data, 'f', 2));  // 航速
}

void mapchannel::onBoatPosUpdated(double latitude, double longitude, double theta)
{
    qDebug() << "Updating boat position:" << latitude << longitude << theta;
    // 调用 JavaScript 的 showBoatPosition 函数，并传递经纬度和角度
    QString script = QString("showBoatPosition(%1, %2, %3);")
                         .arg(longitude)
                         .arg(latitude)
                         .arg(theta);
    webEngineView->page()->runJavaScript(script);
}

void mapchannel::on_pushButton_clicked()
{
    this->parentWidget()->show();
    this->hide();
}

void mapchannel::on_pushButton_2_clicked()
{
    // 清除地图上的轨迹
    clearMapTracks();
}


// 清除地图轨迹和标记
void mapchannel::clearMapTracks()
{
    // 调用 JavaScript 的 clearTrack 函数
    QString script = "clearTrack();";  // 假设前端实现了 clearTrack 函数
    webEngineView->page()->runJavaScript(script);
}

// 清除船只标记
void mapchannel::clearBoatMarker()
{
    // 调用 JavaScript 的 clearBoatMarker 函数
    QString script = "clearBoatMarker();";  // 假设前端实现了 clearBoatMarker 函数
    webEngineView->page()->runJavaScript(script);
}


// 实现 onRosSpinOnce() 函数
void mapchannel::onRosSpinOnce()
{
    // 每次调用时处理 ROS 回调
    ros::spinOnce();
}

void mapchannel::on_pushButton_3_clicked()
{
    if (boatPoints.isEmpty()) {
        QMessageBox::warning(this, "警告", "当前没有轨迹数据可保存！");
        return;
    }

    // 弹出文件保存对话框
    QString filePath = QFileDialog::getSaveFileName(this, "保存轨迹", "", "CSV Files (*.csv)");
    if (filePath.isEmpty()) {
        return; // 用户取消保存
    }

    // 将轨迹数据传递给 PassId 类的 saveTrackData 信号
    emit passId->saveTrackData(boatPoints, filePath);
}

// 实现 saveTrackToCSV 函数，保存轨迹数据到文件
void mapchannel::saveTrackToCSV(const QList<BoatPoint>& boatPoints, const QString &filePath)
{
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "错误", "无法打开文件保存轨迹！");
        return;
    }

    QTextStream out(&file);
    out.setCodec("UTF-8");  // 设置文件编码为 UTF-8
    out << "Longitude,Latitude,Theta\n";  // CSV Header
    for (const BoatPoint &point : boatPoints) {
        out << point.longitude << "," << point.latitude << "," << point.theta << "\n";
    }

    file.close();
    QMessageBox::information(this, "保存成功", "轨迹已保存！");
}
