#include <QApplication>
#include "mainwindow.h"  // 引入 MainWindow 头文件

int main(int argc, char **argv)
{
    // 设置 ROS 节点的 IP 为本地回环地址
    setenv("ROS_IP", "127.0.0.1", 1);  // 使用本地回环地址
    setenv("ROS_MASTER_URI", "http://127.0.0.1:11311", 1);  // 设置 ROS Master URI
    // 初始化 ROS，确保在创建 Qt 应用之前调用
    ros::init(argc, argv, "qt_ros_subscriber");

    QApplication app(argc, argv);

    // 创建 MainWindow 对象并显示
    MainWindow mainWindow;
    mainWindow.show();

    return app.exec();
}
