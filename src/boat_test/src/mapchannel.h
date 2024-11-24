#ifndef MAPCHANNEL_H
#define MAPCHANNEL_H

#include <QMainWindow>

namespace Ui {
class mapchannel;
}

class mapchannel : public QMainWindow
{
    Q_OBJECT

public:
    explicit mapchannel(QWidget *parent = nullptr);
    ~mapchannel();

private slots:
    void on_pushButton_clicked();

private:
    Ui::mapchannel *ui;
};

#endif // MAPCHANNEL_H
