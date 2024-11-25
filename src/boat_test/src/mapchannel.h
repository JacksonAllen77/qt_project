#ifndef MAPCHANNEL_H
#define MAPCHANNEL_H

#include <QMainWindow>
#include <QWebChannel>
#include <QWebEngineView>
#include <ros/ros.h>
#include <geometry_msgs/Pose2D.h>
#include <std_msgs/Float32.h>
#include "passid.h"

namespace Ui {
class mapchannel;
}

class PassId;  // 前向声明 PassId 类

class mapchannel : public QMainWindow
{
    Q_OBJECT

public:
    explicit mapchannel(QWidget *parent = nullptr);
    ~mapchannel();

private slots:
    void on_pushButton_clicked();      // 返回主界面
    void on_pushButton_2_clicked();    // 清除地图控件上的轨迹
    void onRosSpinOnce();             // 定时器回调函数
    void onBoatPosUpdated(double latitude, double longitude, double theta);// 地图更新函数


private:
    Ui::mapchannel *ui;

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

    void clearMapTracks();            // 清除地图轨迹的函数
    void clearBoatMarker();


};

#endif // MAPCHANNEL_H
