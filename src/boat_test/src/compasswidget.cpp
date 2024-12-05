#include "compasswidget.h"
#include <QPainter>
#include <QLinearGradient>
#include <QTimerEvent>
#include <QSize>
#include <ros/ros.h>
#include <std_msgs/Float32.h>

CompassWidget::CompassWidget(QWidget *parent)
    : QWidget(parent),
    angle(0.0),            // 初始角度
    precision(2),          // 精度
    foreground(Qt::white), // 前景色
    northPointerColor(Qt::green), // 北指针颜色
    southPointerColor(Qt::red)    // 南指针颜色
{
    setFixedSize(400,400); // 设置窗口大小

    // 定时器每50毫秒更新一次
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &CompassWidget::onTimeout); // 使用新定义的槽函数
    timer->start(50);

    // ROS初始化
    ros::NodeHandle nh;
    angleSub = nh.subscribe("/compass/angle", 10, &CompassWidget::angleCallback, this);

    // ROS定时器
    QTimer *rosTimer = new QTimer(this);
    connect(rosTimer, &QTimer::timeout, this, []() { ros::spinOnce(); });
    rosTimer->start(50);  // 每50ms调用一次ros::spinOnce()
}

CompassWidget::~CompassWidget() {
    if (timer) {
        delete timer;
    }
}

void CompassWidget::paintEvent(QPaintEvent *event) {
    int width = this->width();
    int height = this->height();
    int side = qMin(width, height);

    // 绘制准备工作，启用反锯齿，平移坐标轴中心，等比例缩放
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);
    painter.translate(width / 2, height / 2);
    painter.scale(side / 200.0, side / 200.0);

    // 绘制外边框圆
    drawCrownCircle(&painter);
    // 绘制背景圆
    drawBgCircle(&painter);
    // 绘制刻度
    drawScale(&painter);
    // 绘制东南西北标识
    drawScaleNum(&painter);
    // 绘制指针
    drawPointer(&painter);
    // 绘制中心圆
    drawCenterCircle(&painter);
    // 绘制当前值
    drawValue(&painter);
}

void CompassWidget::drawCrownCircle(QPainter *painter) {
    int radius = 99;
    painter->save();
    painter->setPen(Qt::NoPen);
    QLinearGradient lineGradient(0, -radius, 0, radius);
    lineGradient.setColorAt(0, Qt::black);
    lineGradient.setColorAt(1, Qt::gray);
    painter->setBrush(lineGradient);
    painter->drawEllipse(-radius, -radius, radius * 2, radius * 2);
    painter->restore();
}

void CompassWidget::drawBgCircle(QPainter *painter) {
    int radius = 90;
    painter->save();
    painter->setPen(Qt::NoPen);
    QLinearGradient lineGradient(0, -radius, 0, radius);
    lineGradient.setColorAt(0, Qt::lightGray);
    lineGradient.setColorAt(1, Qt::darkGray);
    painter->setBrush(lineGradient);
    painter->drawEllipse(-radius, -radius, radius * 2, radius * 2);
    painter->restore();
}

void CompassWidget::drawScale(QPainter *painter) {
    int radius = 85;
    painter->save();

    // 总共8格，4格为NESW字母，4格为线条
    int steps = 8;
    double angleStep = 360.0 / steps;

    QPen pen;
    pen.setColor(foreground);
    pen.setCapStyle(Qt::RoundCap);
    pen.setWidth(4);
    painter->setPen(pen);

    // 每隔一个绘制字母（N、S、E、W）及刻度线
    for (int i = 0; i <= steps; i++) {
        if (i % 2 != 0) {
            painter->drawLine(0, radius - 10, 0, radius);
        }
        painter->rotate(angleStep);
    }

    painter->restore();
}

void CompassWidget::drawScaleNum(QPainter *painter) {
    int radius = 88;
    painter->save();
    painter->setPen(foreground);

    QFont font;
    font.setPixelSize(15);
    font.setBold(true);
    painter->setFont(font);

    QRect textRect = QRect(-radius, -radius, radius * 2, radius * 2);
    painter->drawText(textRect, Qt::AlignTop | Qt::AlignHCenter, "N");
    painter->drawText(textRect, Qt::AlignBottom | Qt::AlignHCenter, "S");

    radius -= 2;
    textRect = QRect(-radius, -radius, radius * 2, radius * 2);
    painter->drawText(textRect, Qt::AlignLeft | Qt::AlignVCenter, "W");

    radius -= 2;
    textRect = QRect(-radius, -radius, radius * 2, radius * 2);
    painter->drawText(textRect, Qt::AlignRight | Qt::AlignVCenter, "E");

    painter->restore();
}

void CompassWidget::drawPointer(QPainter *painter) {
    int radius = 75;

    QPolygon pts;

    // 绘制北方指针
    painter->save();
    painter->setOpacity(0.7);
    painter->setPen(Qt::NoPen);
    painter->setBrush(northPointerColor);
    pts.setPoints(3, -10, 0, 10, 0, 0, radius);
    painter->rotate(angle + 180);
    painter->drawConvexPolygon(pts);
    painter->restore();

    // 绘制南方指针
    painter->save();
    painter->setOpacity(0.7);
    painter->setPen(Qt::NoPen);
    painter->setBrush(southPointerColor);
    pts.setPoints(3, -10, 0, 10, 0, 0, radius);
    painter->rotate(angle);
    painter->drawConvexPolygon(pts);
    painter->restore();
}

void CompassWidget::drawCenterCircle(QPainter *painter) {
    int radius = 12;
    painter->save();
    painter->setOpacity(1.0);
    painter->setPen(Qt::NoPen);
    QLinearGradient lineGradient(0, -radius, 0, radius);
    lineGradient.setColorAt(0, Qt::white);
    lineGradient.setColorAt(1, Qt::black);
    painter->setBrush(lineGradient);
    painter->drawEllipse(-radius, -radius, radius * 2, radius * 2);
    painter->restore();
}

void CompassWidget::drawValue(QPainter *painter) {
    int radius = 100;
    painter->save();
    painter->setPen(foreground);

    QFont font;
    font.setPixelSize(11);
    font.setBold(true);
    painter->setFont(font);

    QRectF textRect(-radius, -radius, radius * 2, radius * 2);
    QString strValue = QString("%1").arg(angle, 0, 'f', precision);
    painter->drawText(textRect, Qt::AlignCenter, strValue);
    painter->restore();
}

void CompassWidget::onTimeout()
{
    update();  // 每次超时调用 update 更新界面
}

void CompassWidget::angleCallback(const std_msgs::Float32::ConstPtr& msg) {
    angle = msg->data;
    update();
}

double CompassWidget::getAngle() const {
    return angle;
}

void CompassWidget::setAngle(double newAngle) {
    angle = newAngle;
}

QSize CompassWidget::sizeHint() const {
    return QSize(400, 400);
}

QSize CompassWidget::minimumSizeHint() const {
    return QSize(200, 200);
}

