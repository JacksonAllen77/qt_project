#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mapchannel.h"
#include "connectchannel.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m = new mapchannel(this);//为窗体分配新的空间
    m1= new connectchannel(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete m;
    delete m1;
}

void MainWindow::on_pushButton_clicked()
{

    m->show();        // 显示mapchannel窗体
    this->hide();

}

void MainWindow::on_pushButton_2_clicked()
{
    m1->show();        // 显示mapchannel窗体
    this->hide();
}

