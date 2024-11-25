#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mapchannel.h" // 地图交互窗口
#include "connectchannel.h" // 连接窗口（此处假设存在）
#include "pathchannel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();  // 打开地图窗口
    void on_pushButton_2_clicked(); // 打开连接窗口

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    mapchannel *m; // 实时地图窗口
    connectchannel *m1; // 连接窗口
    pathchannel *m2; // 路径规划窗口
};

#endif // MAINWINDOW_H
