/****************************************************************************
** Meta object code from reading C++ file 'FldPropertyDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../FldPropertyDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FldPropertyDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FldPropertyDlg_t {
    QByteArrayData data[6];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FldPropertyDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FldPropertyDlg_t qt_meta_stringdata_FldPropertyDlg = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FldPropertyDlg"
QT_MOC_LITERAL(1, 15, 14), // "changeCategory"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "row"
QT_MOC_LITERAL(4, 35, 12), // "changeFormat"
QT_MOC_LITERAL(5, 48, 16) // "precisionChanged"

    },
    "FldPropertyDlg\0changeCategory\0\0row\0"
    "changeFormat\0precisionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FldPropertyDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    1,   32,    2, 0x08 /* Private */,
       5,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void FldPropertyDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FldPropertyDlg *_t = static_cast<FldPropertyDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeCategory((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->changeFormat((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->precisionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject FldPropertyDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FldPropertyDlg.data,
      qt_meta_data_FldPropertyDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FldPropertyDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FldPropertyDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FldPropertyDlg.stringdata0))
        return static_cast<void*>(const_cast< FldPropertyDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int FldPropertyDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
