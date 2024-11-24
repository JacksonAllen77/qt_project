#include <ros/ros.h>
#include <QApplication>
#include "mainwindow.h"


int main(int argc, char **argv)
{
    QApplication a(argc, argv);  // 初始化 QApplication，传递 argc 和 argv
    MainWindow w(nullptr);       // 只传递 QWidget* 类型的参数，指明没有父窗口
    w.show();                    // 显示窗口

    return a.exec();             // 启动 Qt 应用程序事件循环
}
