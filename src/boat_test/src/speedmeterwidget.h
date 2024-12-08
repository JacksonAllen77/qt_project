#ifndef SPEEDMETERWIDGET_H
#define SPEEDMETERWIDGET_H

#include <QWidget>
#include <QTimer>
#include <QPainter>
#include <ros/ros.h>
#include <std_msgs/Float32.h>
#include <QDateTime>

class SpeedMeterWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SpeedMeterWidget(QWidget *parent = nullptr);
    ~SpeedMeterWidget();
    void updateSpeed(float speed); // 更新外部速度

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


private slots:
    void onTimeout();  // 定时器超时处理槽
    void speedCallback(const std_msgs::Float32::ConstPtr& msg);  // ROS 速度回调函数


protected:
    void paintEvent(QPaintEvent *event) override;

private:
    int startAngle;
    int angle;
    int mark;
    float currentValue;  // 修改为 float 类型，适应外部速度更新

    QTimer *timer;
    ros::NodeHandle nh;             // ROS节点句柄
    ros::Subscriber speed_subscriber;  // ROS 订阅器
    bool hasNewData; // 标志是否收到新角度数据

    QDateTime lastSpeedMessageTime;  // 上次接收速度数据的时间
    float currentSpeed;// 当前速度
};

#endif // SPEEDMETERWIDGET_H
