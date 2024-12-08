#ifndef COMPASSWIDGET_H
#define COMPASSWIDGET_H

#include <QWidget>
#include <QTimer>
#include <QTime>
#include <QPainter>
#include <QColor>
#include <QString>
#include <QFont>
#include <QLinearGradient>
#include <ros/ros.h>
#include <geometry_msgs/Pose2D.h>

class CompassWidget : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(double angle READ getAngle WRITE setAngle)

public:
    explicit CompassWidget(QWidget *parent = nullptr);
    ~CompassWidget();

public slots:
    void onTimeout(); // 定时器超时更新界面
    void angleCallback(const geometry_msgs::Pose2D::ConstPtr& msg); // 更新角度信息

protected:
    void paintEvent(QPaintEvent *event) override;
    void drawCrownCircle(QPainter *painter);
    void drawBgCircle(QPainter *painter);
    void drawScale(QPainter *painter);
    void drawScaleNum(QPainter *painter);
    void drawPointer(QPainter *painter);
    void drawCenterCircle(QPainter *painter);
    void drawValue(QPainter *painter);


private:
    double angle;                   // 当前角度
    double targetAngle;             // 目标角度
    int precision;                  // 精度
    QColor foreground;              // 前景色
    QColor northPointerColor;       // 北方指针颜色
    QColor southPointerColor;       // 南方指针颜色

    QTimer *timer;                  // 定时器更新指南针
    ros::NodeHandle nh;             // ROS节点句柄
    ros::Subscriber angleSub;       // ROS角度信息订阅者
    bool hasNewData;   // 标志是否收到新角度数据

    QDateTime lastMessageTime; // 上次接收到消息的时间戳


public:
    double getAngle() const;
    void setAngle(double angle);

    QSize sizeHint() const override;
    QSize minimumSizeHint() const override;
};

#endif // COMPASSWIDGET_H
