#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "passid.h"
#include <QTimer>
#include <QDebug>
#include <ros/ros.h>
#include <geometry_msgs/Pose2D.h>
#include <std_msgs/Float32.h>
#include <QWebChannel>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    // 临时保存轨迹数据的路径
    tempFilePath("/home/ro/boat_test/run_csv/intermediate_file.csv"),
    isDrawing(false)
{
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

    // 创建 ROS 订阅者
    position_sub = nh.subscribe("/boat_position", 10, &MainWindow::boatPositionCallback, this);
    speed_sub = nh.subscribe("/boat_speed", 10, &MainWindow::boatSpeedCallback, this);

    // 使用定时器周期性调用 ros::spinOnce()
    QTimer *rosTimer = new QTimer(this);
    connect(rosTimer, &QTimer::timeout, this, &MainWindow::onRosSpinOnce);
    rosTimer->start(100);  // 每 100ms 调用一次 ros::spinOnce()

    // 初始化 WebEngineView
    webEngineView = ui->widget;
    channel = new QWebChannel(this);
    passId = new PassId();  // 假设 PassId 是你定义的类
    channel->registerObject("passId", passId);
    webEngineView->page()->setWebChannel(channel);
    webEngineView->load(QUrl::fromLocalFile("/home/ro/boat_test/main.html"));  // 替换为你的 HTML 文件路径

    // 连接 PassId 类的信号到 mapchannel 的槽
    connect(passId, &PassId::saveTrackData, this, &MainWindow::saveTrackToCSV);
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

void MainWindow::boatPositionCallback(const geometry_msgs::Pose2D::ConstPtr& msg)
{
    // 更新经度和纬度到 QLineEdit
    ui->label_3->setText(QString::number(msg->x, 'f', 6));  // 经度
    ui->label_5->setText(QString::number(msg->y, 'f', 6));  // 纬度
    ui->label_7->setText(QString::number(msg->theta, 'f', 2));  // 艏向（角度）

    // 调用 onBoatPosUpdated 更新地图
    onBoatPosUpdated(msg->y, msg->x, msg->theta);  // 纬度、经度、航向


    // 将船的轨迹点保存到本地
    BoatPoint point;
    point.longitude = msg->x;
    point.latitude = msg->y;
    point.theta = msg->theta;
    boatPoints.append(point);  // 将当前点添加到轨迹列表

    // 保存轨迹数据到中间文件（不弹出提示框）
    saveTrackToCSV(boatPoints, tempFilePath);
}

void MainWindow::boatSpeedCallback(const std_msgs::Float32::ConstPtr& msg)
{
    // 更新航速到 QLineEdit
    ui->label_9->setText(QString::number(msg->data, 'f', 2));  // 航速
}

void MainWindow::onBoatPosUpdated(double latitude, double longitude, double theta)
{
    qDebug() << "Updating boat position:" << latitude << longitude << theta;
    // 调用 JavaScript 的 showBoatPosition 函数，并传递经纬度和角度
    QString script = QString("showBoatPosition(%1, %2, %3);")
                         .arg(longitude)
                         .arg(latitude)
                         .arg(theta);
    webEngineView->page()->runJavaScript(script);
}


// 清除地图轨迹和标记
void MainWindow::clearMapTracks()
{
    // 调用 JavaScript 的 clearTrack 函数
    QString script = "clearTrack();";  // 假设前端实现了 clearTrack 函数
    webEngineView->page()->runJavaScript(script);
}

void MainWindow::onRosSpinOnce() {
    ros::spinOnce();  // 调用 ROS 的 spinOnce 函数
}

// 清除船只标记
void MainWindow::clearBoatMarker()
{
    // 调用 JavaScript 的 clearBoatMarker 函数
    QString script = "clearBoatMarker();";  // 假设前端实现了 clearBoatMarker 函数
    webEngineView->page()->runJavaScript(script);
}

void MainWindow::on_pushButton_6_clicked()
{
    // 清除地图上的轨迹
    clearMapTracks();
}

void MainWindow::on_pushButton_10_clicked()
{
    if (boatPoints.isEmpty()) {
        QMessageBox::warning(this, "警告", "当前没有轨迹数据可保存！");
        return;
    }

    // 弹出文件保存对话框，选择保存路径
    QString filePath = QFileDialog::getSaveFileName(this, "保存轨迹", "", "CSV Files (*.csv)");
    if (filePath.isEmpty()) {
        return; // 用户取消保存
    }

    // 复制中间文件到用户指定路径
    if (QFile::copy(tempFilePath, filePath)) {
        // 复制成功后弹出保存成功提示
        QMessageBox::information(this, "保存成功", "轨迹已保存！");
    } else {
        // 复制失败，弹出错误提示
        QMessageBox::critical(this, "错误", "无法保存文件！");
    }
}

// 实现 saveTrackToCSV 函数，保存轨迹数据到文件
void MainWindow::saveTrackToCSV(const QList<BoatPoint>& boatPoints, const QString &filePath)
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
}


void MainWindow::on_pushButton_12_clicked()
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


void MainWindow::on_pushButton_11_clicked()
{
    // 调用 JavaScript 的 clearDrawing 函数来清除标注痕迹
    webEngineView->page()->runJavaScript("clearDrawing();");
}


void MainWindow::on_pushButton_13_clicked()
{

}

