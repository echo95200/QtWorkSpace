/****************************************************************************
** Meta object code from reading C++ file 'XYZ_UpdateDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CommonFiles/XYZ_UpdateDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'XYZ_UpdateDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_XYZUpdateDlg_t {
    QByteArrayData data[6];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XYZUpdateDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XYZUpdateDlg_t qt_meta_stringdata_XYZUpdateDlg = {
    {
QT_MOC_LITERAL(0, 0, 12), // "XYZUpdateDlg"
QT_MOC_LITERAL(1, 13, 10), // "doDownload"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 16), // "downloadProgress"
QT_MOC_LITERAL(4, 42, 8), // "recieved"
QT_MOC_LITERAL(5, 51, 5) // "total"

    },
    "XYZUpdateDlg\0doDownload\0\0downloadProgress\0"
    "recieved\0total"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XYZUpdateDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    2,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    4,    5,

       0        // eod
};

void XYZUpdateDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        XYZUpdateDlg *_t = static_cast<XYZUpdateDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doDownload(); break;
        case 1: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject XYZUpdateDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_XYZUpdateDlg.data,
      qt_meta_data_XYZUpdateDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *XYZUpdateDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XYZUpdateDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_XYZUpdateDlg.stringdata0))
        return static_cast<void*>(const_cast< XYZUpdateDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int XYZUpdateDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
