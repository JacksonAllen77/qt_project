#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QDebug>
#include <ros/ros.h>
#include <geometry_msgs/Pose2D.h>
#include <std_msgs/Float32.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    m = new mapchannel(this);
    m1 = new connectchannel(this);
    m2 = new pathchannel(this);
    m3 = new boatchannel(this);

    // 使用 QPixmap 加载资源图片
    QPixmap pixmap(":/images/icons/helloworld.png");
    ui->label->setPixmap(pixmap.scaled(ui->label->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    ui->label->setScaledContents(true);


    // 初始化 ROS
    int argc = 0;
    char **argv = nullptr;
    ros::init(argc, argv, "qt_ros_subscriber");
    ros::NodeHandle nh;
}

MainWindow::~MainWindow() {
    delete ui;
    delete m;
    delete m1;
    delete m2;
    delete m3;
}

void MainWindow::on_pushButton_clicked() {
    m->show(); // 打开地图窗口
    this->hide();
}

void MainWindow::on_pushButton_2_clicked() {
    m1->show(); // 打开连接窗口
    this->hide();
}

void MainWindow::on_pushButton_3_clicked()
{
    m2->show(); // 打开连接窗口
    this->hide();
}

void MainWindow::on_pushButton_5_clicked()
{
    m3->show(); // 打开连接窗口
    this->hide();
}

