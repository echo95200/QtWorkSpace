/****************************************************************************
** Meta object code from reading C++ file 'qtrpt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtRPT/qtrpt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtrpt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtRPT_t {
    QByteArrayData data[22];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtRPT_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtRPT_t qt_meta_stringdata_QtRPT = {
    {
QT_MOC_LITERAL(0, 0, 5), // "QtRPT"
QT_MOC_LITERAL(1, 6, 8), // "setValue"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 5), // "recNo"
QT_MOC_LITERAL(4, 22, 9), // "paramName"
QT_MOC_LITERAL(5, 32, 9), // "QVariant&"
QT_MOC_LITERAL(6, 42, 10), // "paramValue"
QT_MOC_LITERAL(7, 53, 10), // "reportPage"
QT_MOC_LITERAL(8, 64, 8), // "setField"
QT_MOC_LITERAL(9, 73, 15), // "RptFieldObject&"
QT_MOC_LITERAL(10, 89, 11), // "fieldObject"
QT_MOC_LITERAL(11, 101, 13), // "setValueImage"
QT_MOC_LITERAL(12, 115, 7), // "QImage&"
QT_MOC_LITERAL(13, 123, 15), // "setValueDiagram"
QT_MOC_LITERAL(14, 139, 6), // "Chart&"
QT_MOC_LITERAL(15, 146, 5), // "chart"
QT_MOC_LITERAL(16, 152, 7), // "newPage"
QT_MOC_LITERAL(17, 160, 4), // "page"
QT_MOC_LITERAL(18, 165, 12), // "printPreview"
QT_MOC_LITERAL(19, 178, 9), // "QPrinter*"
QT_MOC_LITERAL(20, 188, 7), // "printer"
QT_MOC_LITERAL(21, 196, 8) // "exportTo"

    },
    "QtRPT\0setValue\0\0recNo\0paramName\0"
    "QVariant&\0paramValue\0reportPage\0"
    "setField\0RptFieldObject&\0fieldObject\0"
    "setValueImage\0QImage&\0setValueDiagram\0"
    "Chart&\0chart\0newPage\0page\0printPreview\0"
    "QPrinter*\0printer\0exportTo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtRPT[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   49,    2, 0x06 /* Public */,
       8,    1,   58,    2, 0x06 /* Public */,
      11,    4,   61,    2, 0x06 /* Public */,
      13,    1,   70,    2, 0x06 /* Public */,
      16,    1,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    1,   76,    2, 0x0a /* Public */,
      21,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 5, QMetaType::Int,    3,    4,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 12, QMetaType::Int,    3,    4,    6,    7,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::Int,   17,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,

       0        // eod
};

void QtRPT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtRPT *_t = static_cast<QtRPT *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setValue((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4]))); break;
        case 1: _t->setField((*reinterpret_cast< RptFieldObject(*)>(_a[1]))); break;
        case 2: _t->setValueImage((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QImage(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4]))); break;
        case 3: _t->setValueDiagram((*reinterpret_cast< Chart(*)>(_a[1]))); break;
        case 4: _t->newPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->printPreview((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 6: _t->exportTo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QtRPT::*_t)(const int , const QString , QVariant & , const int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtRPT::setValue)) {
                *result = 0;
            }
        }
        {
            typedef void (QtRPT::*_t)(RptFieldObject & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtRPT::setField)) {
                *result = 1;
            }
        }
        {
            typedef void (QtRPT::*_t)(const int , const QString , QImage & , const int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtRPT::setValueImage)) {
                *result = 2;
            }
        }
        {
            typedef void (QtRPT::*_t)(Chart & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtRPT::setValueDiagram)) {
                *result = 3;
            }
        }
        {
            typedef void (QtRPT::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtRPT::newPage)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject QtRPT::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtRPT.data,
      qt_meta_data_QtRPT,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtRPT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtRPT::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtRPT.stringdata0))
        return static_cast<void*>(const_cast< QtRPT*>(this));
    return QObject::qt_metacast(_clname);
}

int QtRPT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QtRPT::setValue(const int _t1, const QString _t2, QVariant & _t3, const int _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtRPT::setField(RptFieldObject & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtRPT::setValueImage(const int _t1, const QString _t2, QImage & _t3, const int _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtRPT::setValueDiagram(Chart & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtRPT::newPage(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
