#ifndef MAPCHANNEL_H
#define MAPCHANNEL_H

#include <QMainWindow>
#include <QWebEngineView>
#include <QWebChannel>
#include <QPushButton>
#include "passid.h"

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
    void onBoatPosUpdated(double lng, double lat, double course);  // 新增槽函数
    void onClearTrackClicked();  // 新增槽函数

private:
    Ui::mapchannel *ui;
    QWebEngineView *webEngineView;  // QWebEngineView 对象
    QWebChannel *channel;          // QWebChannel 对象
    PassId *passId;  // PassId 对象
};

#endif // MAPCHANNEL_H
