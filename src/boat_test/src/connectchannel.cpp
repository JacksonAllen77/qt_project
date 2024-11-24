#include "connectchannel.h"
#include "ui_connectchannel.h"

connectchannel::connectchannel(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::connectchannel)
{
    ui->setupUi(this);
}

connectchannel::~connectchannel()
{
    delete ui;
}

void connectchannel::on_pushButton_clicked()
{
    this->parentWidget()->show();
    this->hide();
}
