/****************************************************************************
** Meta object code from reading C++ file 'TContainerLine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TContainerLine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TContainerLine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TContainerLine_t {
    QByteArrayData data[13];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TContainerLine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TContainerLine_t qt_meta_stringdata_TContainerLine = {
    {
QT_MOC_LITERAL(0, 0, 14), // "TContainerLine"
QT_MOC_LITERAL(1, 15, 11), // "lineChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 13), // "delItemInTree"
QT_MOC_LITERAL(4, 42, 15), // "geomContChanged"
QT_MOC_LITERAL(5, 58, 7), // "newRect"
QT_MOC_LITERAL(6, 66, 9), // "m_inFocus"
QT_MOC_LITERAL(7, 76, 5), // "value"
QT_MOC_LITERAL(8, 82, 4), // "Line"
QT_MOC_LITERAL(9, 87, 5), // "OldP1"
QT_MOC_LITERAL(10, 93, 5), // "OldP2"
QT_MOC_LITERAL(11, 99, 9), // "arrowStar"
QT_MOC_LITERAL(12, 109, 8) // "arrowEnd"

    },
    "TContainerLine\0lineChanged\0\0delItemInTree\0"
    "geomContChanged\0newRect\0m_inFocus\0"
    "value\0Line\0OldP1\0OldP2\0arrowStar\0"
    "arrowEnd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TContainerLine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       5,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x08 /* Private */,
       3,    0,   39,    2, 0x08 /* Private */,
       4,    2,   40,    2, 0x08 /* Private */,
       6,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QRect, QMetaType::QRect,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRect, QMetaType::QRect,    2,    5,
    QMetaType::Void, QMetaType::Bool,    7,

 // properties: name, type, flags
       8, QMetaType::QLineF, 0x00095103,
       9, QMetaType::QRect, 0x00095103,
      10, QMetaType::QRect, 0x00095103,
      11, QMetaType::Bool, 0x00095003,
      12, QMetaType::Bool, 0x00095103,

       0        // eod
};

void TContainerLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TContainerLine *_t = static_cast<TContainerLine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->lineChanged((*reinterpret_cast< QRect(*)>(_a[1])),(*reinterpret_cast< QRect(*)>(_a[2]))); break;
        case 1: _t->delItemInTree(); break;
        case 2: _t->geomContChanged((*reinterpret_cast< QRect(*)>(_a[1])),(*reinterpret_cast< QRect(*)>(_a[2]))); break;
        case 3: _t->m_inFocus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TContainerLine *_t = static_cast<TContainerLine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QLineF*>(_v) = _t->getLine(); break;
        case 1: *reinterpret_cast< QRect*>(_v) = _t->getOldP1(); break;
        case 2: *reinterpret_cast< QRect*>(_v) = _t->getOldP2(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getArrowStart(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getArrowEnd(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TContainerLine *_t = static_cast<TContainerLine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLine(*reinterpret_cast< QLineF*>(_v)); break;
        case 1: _t->setOldP1(*reinterpret_cast< QRect*>(_v)); break;
        case 2: _t->setOldP2(*reinterpret_cast< QRect*>(_v)); break;
        case 3: _t->setArrowStart(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setArrowEnd(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject TContainerLine::staticMetaObject = {
    { &RptContainer::staticMetaObject, qt_meta_stringdata_TContainerLine.data,
      qt_meta_data_TContainerLine,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TContainerLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TContainerLine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TContainerLine.stringdata0))
        return static_cast<void*>(const_cast< TContainerLine*>(this));
    return RptContainer::qt_metacast(_clname);
}

int TContainerLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RptContainer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
