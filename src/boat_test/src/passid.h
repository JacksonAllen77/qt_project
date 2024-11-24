#ifndef PASSID_H
#define PASSID_H

#include <QObject>

class PassId : public QObject
{
    Q_OBJECT

public:
    explicit PassId(QObject *parent = nullptr);

signals:
    void boatPosUpdated(double lat, double lon, double heading);
    void clearTrackClicked();

public slots:
    void handleBoatPosition(double lat, double lon, double heading);
    void clearTrack();
};

#endif // PASSID_H
