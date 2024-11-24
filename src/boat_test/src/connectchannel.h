#ifndef CONNECTCHANNEL_H
#define CONNECTCHANNEL_H

#include <QMainWindow>

namespace Ui {
class connectchannel;
}

class connectchannel : public QMainWindow
{
    Q_OBJECT

public:
    explicit connectchannel(QWidget *parent = nullptr);
    ~connectchannel();

private slots:
    void on_pushButton_clicked();

private:
    Ui::connectchannel *ui;
};

#endif // CONNECTCHANNEL_H
