#include "passid.h"
#include <QDebug>
#include <QFile>
#include <QTextStream>


PassId::PassId(QObject *parent) : QObject(parent)
{
}

// 处理船只位置更新
void PassId::handleBoatPosition(double lat, double lon, double heading)
{
    qDebug() << "Boat Position Updated:" << lat << lon << heading;
    emit boatPosUpdated(lat, lon, heading); // 发射信号
}

// 清除轨迹信号
void PassId::clearTrack()
{
    qDebug() << "Clear track signal emitted";
    emit clearTrackClicked(); // 发射信号
}

// 保存轨迹数据为 CSV 文件
void PassId::saveTrackDataToFile(const QList<BoatPoint>& boatPoints, const QString &filePath)
{
    QFile file(filePath);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream out(&file);
        for (const BoatPoint &point : boatPoints)
        {
            // 保存经度、纬度、航向角
            out << point.latitude << "," << point.longitude << "," << point.theta << "\n";
        }
        file.close();
        qDebug() << "Track data saved to:" << filePath;

        // 通知前端保存操作完成
        emit saveTrackData(boatPoints, filePath);  // 发出信号，告知前端保存完成
    }
    else
    {
        qDebug() << "Failed to open file for writing:" << filePath;
    }
}
