#include "boatchannel.h"
#include "ui_boatchannel.h"

boatchannel::boatchannel(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::boatchannel)
{
    ui->setupUi(this);
}

boatchannel::~boatchannel()
{
    delete ui;
}

void boatchannel::on_pushButton_clicked()
{
    this->parentWidget()->show();
    this->hide();
}

