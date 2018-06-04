/****************************************************************************
** Meta object code from reading C++ file 'exampledlg6.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../exampledlg6.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'exampledlg6.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ExampleDlg6_t {
    QByteArrayData data[9];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExampleDlg6_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExampleDlg6_t qt_meta_stringdata_ExampleDlg6 = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ExampleDlg6"
QT_MOC_LITERAL(1, 12, 5), // "print"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 8), // "setValue"
QT_MOC_LITERAL(4, 28, 5), // "recNo"
QT_MOC_LITERAL(5, 34, 9), // "paramName"
QT_MOC_LITERAL(6, 44, 9), // "QVariant&"
QT_MOC_LITERAL(7, 54, 10), // "paramValue"
QT_MOC_LITERAL(8, 65, 10) // "reportPage"

    },
    "ExampleDlg6\0print\0\0setValue\0recNo\0"
    "paramName\0QVariant&\0paramValue\0"
    "reportPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExampleDlg6[] = {

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
       3,    4,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 6, QMetaType::Int,    4,    5,    7,    8,

       0        // eod
};

void ExampleDlg6::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExampleDlg6 *_t = static_cast<ExampleDlg6 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->print(); break;
        case 1: _t->setValue((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject ExampleDlg6::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ExampleDlg6.data,
      qt_meta_data_ExampleDlg6,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ExampleDlg6::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExampleDlg6::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ExampleDlg6.stringdata0))
        return static_cast<void*>(const_cast< ExampleDlg6*>(this));
    return QDialog::qt_metacast(_clname);
}

int ExampleDlg6::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
