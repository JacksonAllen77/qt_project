#ifndef BOATCHANNEL_H
#define BOATCHANNEL_H

#include <QMainWindow>

namespace Ui {
class boatchannel;
}

class boatchannel : public QMainWindow
{
    Q_OBJECT

public:
    explicit boatchannel(QWidget *parent = nullptr);
    ~boatchannel();

private slots:
    void on_pushButton_clicked();

private:
    Ui::boatchannel *ui;
};

#endif // BOATCHANNEL_H
