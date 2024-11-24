#include <QApplication>
#include "mainwindow.h"  // 引入 MainWindow 头文件

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    // 创建 MainWindow 对象并显示
    MainWindow mainWindow;
    mainWindow.show();

    return app.exec();
}
