#ifndef PATHCHANNEL_H
#define PATHCHANNEL_H

#include <QMainWindow>
#include <QWebChannel>
#include <QWebEngineView>
#include <ros/ros.h>
#include <geometry_msgs/Pose2D.h>
#include <std_msgs/Float32.h>
#include "passid.h"

namespace Ui {
class pathchannel;
}

class PassId;  // 前向声明 PassId 类

class pathchannel : public QMainWindow
{
    Q_OBJECT

public:
    explicit pathchannel(QWidget *parent = nullptr);
    ~pathchannel();

private slots:
    void on_pushButton_clicked();       // 返回主界面
    void onClearTrackClicked();        // 清除轨迹数据
    void onRosSpinOnce();              // 定时器回调函数
    void onBoatPosUpdated(double latitude, double longitude, double theta); // 地图更新函数

private:
    Ui::pathchannel *ui;

    // ROS 相关
    ros::NodeHandle nh;               // NodeHandle 作为类成员
    ros::Subscriber position_sub;     // 订阅 /boat_position
    ros::Subscriber speed_sub;        // 订阅 /boat_speed

    // 回调函数
    void boatPositionCallback(const geometry_msgs::Pose2D::ConstPtr& msg);
    void boatSpeedCallback(const std_msgs::Float32::ConstPtr& msg);

    // WebEngineView 相关
    QWebEngineView *webEngineView;    // 用于显示地图的 WebEngineView
    QWebChannel *channel;             // WebChannel 用于传递数据到前端
    PassId *passId;                   // 假设 PassId 是你自定义的类
};

#endif // PATHCHANNEL_H
