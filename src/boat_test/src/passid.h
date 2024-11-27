#ifndef PASSID_H
#define PASSID_H

#include <QObject>
#include <QList>
#include <QString>

// 如果需要在这个文件中使用 BoatPoint 结构体，可以使用条件编译避免重复定义
#ifndef BOATPOINT_H
#define BOATPOINT_H

// 定义 BoatPoint 结构体，用于保存轨迹点
struct BoatPoint {
    double longitude;
    double latitude;
    double theta;
};

class PassId : public QObject
{
    Q_OBJECT

public:
    explicit PassId(QObject *parent = nullptr);

signals:
    void boatPosUpdated(double lat, double lon, double heading);
    void clearTrackClicked();
    void saveTrackData(const QList<BoatPoint>& boatPoints, const QString &filePath);  // 新增信号

public slots:
    void handleBoatPosition(double lat, double lon, double heading);
    void clearTrack();

    void saveTrackDataToFile(const QList<BoatPoint>& boatPoints, const QString &filePath);// 保存轨迹数据为 CSV 文件
};

#endif

#endif
