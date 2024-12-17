#include <QApplication>
#include <QProcess>
#include <QThread>
#include <ros/ros.h>
#include "mainwindow.h"  // 引入 MainWindow 头文件

// 检查 roscore 是否已经运行
bool isRoscoreRunning() {
    QProcess process;
    process.start("pgrep", QStringList() << "-f" << "roscore");
    process.waitForFinished();
    return !process.readAllStandardOutput().isEmpty();
}

void startRoscore() {
    if (isRoscoreRunning()) {
        return;  // 如果 roscore 已经在运行，直接返回
    }

    QProcess *roscoreProcess = new QProcess();
    QString command = "roscore";

    // 启动 roscore
    roscoreProcess->start(command);

    if (!roscoreProcess->waitForStarted()) {
        // 如果无法启动 roscore，可以根据需要添加其他处理逻辑
    }

    // 等待一段时间，确保 roscore 启动完成
    QThread::sleep(5);  // 等待 5 秒钟，您可以根据需要调整时间
}

int main(int argc, char **argv)
{
    // 设置 ROS 节点的 IP 为本地回环地址
    setenv("ROS_IP", "127.0.0.1", 1);  // 使用本地回环地址
    setenv("ROS_MASTER_URI", "http://127.0.0.1:11311", 1);  // 设置 ROS Master URI
    // 初始化 ROS，确保在创建 Qt 应用之前调用
    ros::init(argc, argv, "qt_ros_subscriber");

    startRoscore();  // 启动 roscore

    QApplication app(argc, argv);

    // 创建 MainWindow 对象并显示
    MainWindow mainWindow;
    mainWindow.show();

    return app.exec();
}
