/****************************************************************************
** Meta object code from reading C++ file 'XYZ_DownloadManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CommonFiles/XYZ_DownloadManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'XYZ_DownloadManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_XYZDownloadManager_t {
    QByteArrayData data[10];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XYZDownloadManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XYZDownloadManager_t qt_meta_stringdata_XYZDownloadManager = {
    {
QT_MOC_LITERAL(0, 0, 18), // "XYZDownloadManager"
QT_MOC_LITERAL(1, 19, 4), // "done"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 19), // "downloadingProgress"
QT_MOC_LITERAL(4, 45, 8), // "recieved"
QT_MOC_LITERAL(5, 54, 5), // "total"
QT_MOC_LITERAL(6, 60, 16), // "downloadFinished"
QT_MOC_LITERAL(7, 77, 14), // "QNetworkReply*"
QT_MOC_LITERAL(8, 92, 4), // "data"
QT_MOC_LITERAL(9, 97, 16) // "downloadProgress"

    },
    "XYZDownloadManager\0done\0\0downloadingProgress\0"
    "recieved\0total\0downloadFinished\0"
    "QNetworkReply*\0data\0downloadProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XYZDownloadManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    2,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x0a /* Public */,
       9,    2,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    4,    5,

       0        // eod
};

void XYZDownloadManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        XYZDownloadManager *_t = static_cast<XYZDownloadManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->done(); break;
        case 1: _t->downloadingProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->downloadFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (XYZDownloadManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&XYZDownloadManager::done)) {
                *result = 0;
            }
        }
        {
            typedef void (XYZDownloadManager::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&XYZDownloadManager::downloadingProgress)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject XYZDownloadManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XYZDownloadManager.data,
      qt_meta_data_XYZDownloadManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *XYZDownloadManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XYZDownloadManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_XYZDownloadManager.stringdata0))
        return static_cast<void*>(const_cast< XYZDownloadManager*>(this));
    return QObject::qt_metacast(_clname);
}

int XYZDownloadManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void XYZDownloadManager::done()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void XYZDownloadManager::downloadingProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
