#include "passid.h"
#include <QDebug>

PassId::PassId(QObject *parent) : QObject(parent)
{
}

void PassId::handleBoatPosition(double lat, double lon, double heading)
{
    qDebug() << "Boat Position Updated:" << lat << lon << heading;
    emit boatPosUpdated(lat, lon, heading); // 发射信号
}

void PassId::clearTrack()
{
    qDebug() << "Clear track signal emitted";
    emit clearTrackClicked(); // 发射信号
}
