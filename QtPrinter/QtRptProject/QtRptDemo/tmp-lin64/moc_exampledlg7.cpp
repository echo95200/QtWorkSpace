/****************************************************************************
** Meta object code from reading C++ file 'exampledlg7.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../exampledlg7.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'exampledlg7.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ExampleDlg7_t {
    QByteArrayData data[12];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExampleDlg7_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExampleDlg7_t qt_meta_stringdata_ExampleDlg7 = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ExampleDlg7"
QT_MOC_LITERAL(1, 12, 5), // "print"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 8), // "setValue"
QT_MOC_LITERAL(4, 28, 5), // "recNo"
QT_MOC_LITERAL(5, 34, 9), // "paramName"
QT_MOC_LITERAL(6, 44, 9), // "QVariant&"
QT_MOC_LITERAL(7, 54, 10), // "paramValue"
QT_MOC_LITERAL(8, 65, 10), // "reportPage"
QT_MOC_LITERAL(9, 76, 15), // "setValueDiagram"
QT_MOC_LITERAL(10, 92, 6), // "Chart&"
QT_MOC_LITERAL(11, 99, 5) // "chart"

    },
    "ExampleDlg7\0print\0\0setValue\0recNo\0"
    "paramName\0QVariant&\0paramValue\0"
    "reportPage\0setValueDiagram\0Chart&\0"
    "chart"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExampleDlg7[] = {

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
       1,    0,   29,    2, 0x08 /* Private */,
       3,    4,   30,    2, 0x08 /* Private */,
       9,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 6, QMetaType::Int,    4,    5,    7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void ExampleDlg7::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExampleDlg7 *_t = static_cast<ExampleDlg7 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->print(); break;
        case 1: _t->setValue((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4]))); break;
        case 2: _t->setValueDiagram((*reinterpret_cast< Chart(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ExampleDlg7::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ExampleDlg7.data,
      qt_meta_data_ExampleDlg7,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ExampleDlg7::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExampleDlg7::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ExampleDlg7.stringdata0))
        return static_cast<void*>(const_cast< ExampleDlg7*>(this));
    return QDialog::qt_metacast(_clname);
}

int ExampleDlg7::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
