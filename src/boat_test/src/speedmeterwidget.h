#ifndef SPEEDMETERWIDGET_H
#define SPEEDMETERWIDGET_H

#include <QWidget>
#include <QTimer>
#include <QPainter>
#include <ros/ros.h>
#include <std_msgs/Float32.h>

class SpeedMeterWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SpeedMeterWidget(QWidget *parent = nullptr);
    ~SpeedMeterWidget();

    void updateSpeed(float speed); // 新增方法，用于更新速度

private:
    void startSpeed();
    void initCanvas(QPainter& painter);
    void drawMiddleCircle(QPainter &painter, int radius);
    void drawCurrentSpeed(QPainter &painter);
    void drawScale(QPainter &painter,int radius);
    void drawScaleText(QPainter &painter, int radius);
    void drawPointLine(QPainter &painter,int lenth);
    void drawSpeedPie(QPainter &painter, int radius);
    void drawEllipseInnerBlack(QPainter &painter, int radius);
    void drawEllipseInnerShine(QPainter &painter, int radius);
    void drawEllipseOutShine(QPainter &painter, int radius);
    void drawLogo(QPainter &painter, int radius);
    void speedCallback(const std_msgs::Float32::ConstPtr& msg); // ROS速度回调函数

private slots:
    void onTimeout();  // 定时器超时处理槽

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    int startAngle;
    int angle;
    int mark;
    float currentValue;  // 修改为 float 类型，适应外部速度更新
    QTimer *timer;
    ros::Subscriber speed_subscriber;  // ROS 订阅器
};

#endif // SPEEDMETERWIDGET_H
