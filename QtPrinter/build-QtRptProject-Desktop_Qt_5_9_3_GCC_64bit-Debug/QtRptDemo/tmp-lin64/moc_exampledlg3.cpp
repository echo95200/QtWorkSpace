/****************************************************************************
** Meta object code from reading C++ file 'exampledlg3.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QtRptProject/QtRptDemo/exampledlg3.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'exampledlg3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ExampleDlg3_t {
    QByteArrayData data[9];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExampleDlg3_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExampleDlg3_t qt_meta_stringdata_ExampleDlg3 = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ExampleDlg3"
QT_MOC_LITERAL(1, 12, 13), // "updatePreview"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "setValue"
QT_MOC_LITERAL(4, 36, 5), // "recNo"
QT_MOC_LITERAL(5, 42, 9), // "paramName"
QT_MOC_LITERAL(6, 52, 9), // "QVariant&"
QT_MOC_LITERAL(7, 62, 10), // "paramValue"
QT_MOC_LITERAL(8, 73, 10) // "reportPage"

    },
    "ExampleDlg3\0updatePreview\0\0setValue\0"
    "recNo\0paramName\0QVariant&\0paramValue\0"
    "reportPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExampleDlg3[] = {

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

void ExampleDlg3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExampleDlg3 *_t = static_cast<ExampleDlg3 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updatePreview(); break;
        case 1: _t->setValue((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject ExampleDlg3::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ExampleDlg3.data,
      qt_meta_data_ExampleDlg3,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ExampleDlg3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExampleDlg3::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExampleDlg3.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ExampleDlg3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
