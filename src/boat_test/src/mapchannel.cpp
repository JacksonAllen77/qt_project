#include "mapchannel.h"
#include "ui_mapchannel.h"

mapchannel::mapchannel(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mapchannel)
{
    ui->setupUi(this);
}

mapchannel::~mapchannel()
{
    delete ui;
}

void mapchannel::on_pushButton_clicked()
{
    this->parentWidget()->show();
    this->hide();
}
