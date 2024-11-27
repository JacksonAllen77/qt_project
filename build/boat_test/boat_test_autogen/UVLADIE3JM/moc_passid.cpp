/****************************************************************************
** Meta object code from reading C++ file 'passid.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/passid.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'passid.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PassId_t {
    QByteArrayData data[14];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PassId_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PassId_t qt_meta_stringdata_PassId = {
    {
QT_MOC_LITERAL(0, 0, 6), // "PassId"
QT_MOC_LITERAL(1, 7, 14), // "boatPosUpdated"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 3), // "lat"
QT_MOC_LITERAL(4, 27, 3), // "lon"
QT_MOC_LITERAL(5, 31, 7), // "heading"
QT_MOC_LITERAL(6, 39, 17), // "clearTrackClicked"
QT_MOC_LITERAL(7, 57, 13), // "saveTrackData"
QT_MOC_LITERAL(8, 71, 16), // "QList<BoatPoint>"
QT_MOC_LITERAL(9, 88, 10), // "boatPoints"
QT_MOC_LITERAL(10, 99, 8), // "filePath"
QT_MOC_LITERAL(11, 108, 18), // "handleBoatPosition"
QT_MOC_LITERAL(12, 127, 10), // "clearTrack"
QT_MOC_LITERAL(13, 138, 19) // "saveTrackDataToFile"

    },
    "PassId\0boatPosUpdated\0\0lat\0lon\0heading\0"
    "clearTrackClicked\0saveTrackData\0"
    "QList<BoatPoint>\0boatPoints\0filePath\0"
    "handleBoatPosition\0clearTrack\0"
    "saveTrackDataToFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PassId[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,
       6,    0,   51,    2, 0x06 /* Public */,
       7,    2,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    3,   57,    2, 0x0a /* Public */,
      12,    0,   64,    2, 0x0a /* Public */,
      13,    2,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,   10,

       0        // eod
};

void PassId::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PassId *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->boatPosUpdated((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->clearTrackClicked(); break;
        case 2: _t->saveTrackData((*reinterpret_cast< const QList<BoatPoint>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->handleBoatPosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 4: _t->clearTrack(); break;
        case 5: _t->saveTrackDataToFile((*reinterpret_cast< const QList<BoatPoint>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PassId::*)(double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PassId::boatPosUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PassId::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PassId::clearTrackClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PassId::*)(const QList<BoatPoint> & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PassId::saveTrackData)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PassId::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PassId.data,
    qt_meta_data_PassId,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PassId::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PassId::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PassId.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PassId::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void PassId::boatPosUpdated(double _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PassId::clearTrackClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PassId::saveTrackData(const QList<BoatPoint> & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
