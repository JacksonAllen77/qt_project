#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mapchannel.h"//添加mapchannel窗体头文件
#include "connectchannel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    mapchannel *m;//定义mapchannel窗体
    connectchannel *m1;// connectchannel窗口指针
};

#endif // MAINWINDOW_H
