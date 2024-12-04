#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWebEngineView>
#include "mapchannel.h" // 地图交互窗口
#include "connectchannel.h" // 连接窗口（此处假设存在）
#include "pathchannel.h"
#include "boatchannel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();  // 打开地图窗口
    void on_pushButton_2_clicked(); // 打开连接窗口
    void on_pushButton_3_clicked(); //打开路径规划界面
    void on_pushButton_5_clicked(); //打开无人艇界面



    void on_pushButton_6_clicked(); //清除船只轨迹
    void on_pushButton_10_clicked(); //保存船只轨迹
    void on_pushButton_12_clicked(); //清除工具标注痕迹
    void on_pushButton_11_clicked(); //启动(禁用)标注工具

private:
    Ui::MainWindow *ui;
    mapchannel *m; // 实时地图窗口
    connectchannel *m1; // 连接窗口
    pathchannel *m2; // 路径规划窗口
    boatchannel *m3; //无人艇界面
    QString tempFilePath;  // 临时文件路径
    QWebChannel *channel;
    QWebEngineView *webEngineView;


    ros::Subscriber position_sub;   // ROS订阅器：订阅位置信息
    ros::Subscriber speed_sub;      // ROS订阅器：订阅速度信息
    PassId* passId;                 // 假设 PassId 是一个自定义类
    QList<BoatPoint> boatPoints;    // 存储轨迹点的列表
    bool isDrawing;                 // 当前是否处于绘制状态


    // 声明方法
    void boatPositionCallback(const geometry_msgs::Pose2D::ConstPtr &msg);
    void boatSpeedCallback(const std_msgs::Float32::ConstPtr &msg);
    void onRosSpinOnce();
    void saveTrackToCSV(const QList<class BoatPoint> &boatPoints, const QString &filePath);
    void clearMapTracks();
    void clearBoatMarker();
    void onBoatPosUpdated(double latitude, double longitude, double theta);

};

#endif // MAINWINDOW_H
