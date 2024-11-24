#include "mapchannel.h"
#include "ui_mapchannel.h"
#include "passid.h"

#include <QWebEngineView>
#include <QWebChannel>
#include <QUrl>

mapchannel::mapchannel(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mapchannel)
{
    ui->setupUi(this);

    // 使用 UI 中名为 "widget" 的控件
    webEngineView = ui->widget;

    // 初始化 QWebChannel
    channel = new QWebChannel(this);

    // 创建 Qt 和 JavaScript 之间的通信桥接对象
    passId = new PassId();  // 假设 PassId 是你定义的类
    channel->registerObject("passId", passId);

    // 设置 WebEngineView 的 QWebChannel
    webEngineView->page()->setWebChannel(channel);

    // 加载 HTML 页面
    webEngineView->load(QUrl::fromLocalFile("/home/ro/boat_test/map.html"));  // 替换为你的 HTML 文件路径

    // 连接 Qt 的信号与槽
    connect(passId, &PassId::boatPosUpdated, this, &mapchannel::onBoatPosUpdated);
    connect(passId, &PassId::clearTrackClicked, this, &mapchannel::onClearTrackClicked);
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

// 处理船只位置更新
void mapchannel::onBoatPosUpdated(double lng, double lat, double course)
{
    // 处理位置更新的逻辑
    // 比如通过 QWebEngineView 调用 JavaScript 更新地图上的船只位置
    QString script = QString("showBoatPosition(%1, %2, %3);").arg(lng).arg(lat).arg(course);
    webEngineView->page()->runJavaScript(script);
}

// 处理清除轨迹按钮点击
void mapchannel::onClearTrackClicked()
{
    // 清除轨迹的逻辑
    // 比如通过 QWebEngineView 调用 JavaScript 清除地图上的轨迹
    webEngineView->page()->runJavaScript("clearTrack();");
}
