/****************************************************************************
** Meta object code from reading C++ file 'XYZ_Container.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CommonFiles/XYZ_Container.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'XYZ_Container.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_XYZContainer_t {
    QByteArrayData data[13];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XYZContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XYZContainer_t qt_meta_stringdata_XYZContainer = {
    {
QT_MOC_LITERAL(0, 0, 12), // "XYZContainer"
QT_MOC_LITERAL(1, 13, 7), // "inFocus"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 4), // "mode"
QT_MOC_LITERAL(4, 27, 11), // "newGeometry"
QT_MOC_LITERAL(5, 39, 7), // "oldRect"
QT_MOC_LITERAL(6, 47, 7), // "newRect"
QT_MOC_LITERAL(7, 55, 11), // "geomChanged"
QT_MOC_LITERAL(8, 67, 12), // "deleteByUser"
QT_MOC_LITERAL(9, 80, 13), // "setDesignMode"
QT_MOC_LITERAL(10, 94, 11), // "setEditMode"
QT_MOC_LITERAL(11, 106, 8), // "Selected"
QT_MOC_LITERAL(12, 115, 9) // "Overlayed"

    },
    "XYZContainer\0inFocus\0\0mode\0newGeometry\0"
    "oldRect\0newRect\0geomChanged\0deleteByUser\0"
    "setDesignMode\0setEditMode\0Selected\0"
    "Overlayed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XYZContainer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    2,   47,    2, 0x06 /* Public */,
       7,    2,   52,    2, 0x06 /* Public */,
       8,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   58,    2, 0x0a /* Public */,
      10,    1,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QRect, QMetaType::QRect,    5,    6,
    QMetaType::Void, QMetaType::QRect, QMetaType::QRect,    5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
      11, QMetaType::Bool, 0x00095103,
      12, QMetaType::Bool, 0x00095003,

       0        // eod
};

void XYZContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        XYZContainer *_t = static_cast<XYZContainer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->inFocus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->newGeometry((*reinterpret_cast< QRect(*)>(_a[1])),(*reinterpret_cast< QRect(*)>(_a[2]))); break;
        case 2: _t->geomChanged((*reinterpret_cast< QRect(*)>(_a[1])),(*reinterpret_cast< QRect(*)>(_a[2]))); break;
        case 3: _t->deleteByUser(); break;
        case 4: _t->setDesignMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setEditMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (XYZContainer::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&XYZContainer::inFocus)) {
                *result = 0;
            }
        }
        {
            typedef void (XYZContainer::*_t)(QRect , QRect );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&XYZContainer::newGeometry)) {
                *result = 1;
            }
        }
        {
            typedef void (XYZContainer::*_t)(QRect , QRect );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&XYZContainer::geomChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (XYZContainer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&XYZContainer::deleteByUser)) {
                *result = 3;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        XYZContainer *_t = static_cast<XYZContainer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isSelected(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->hasOverlay(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        XYZContainer *_t = static_cast<XYZContainer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelected(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setHasOverlay(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject XYZContainer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_XYZContainer.data,
      qt_meta_data_XYZContainer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *XYZContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XYZContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_XYZContainer.stringdata0))
        return static_cast<void*>(const_cast< XYZContainer*>(this));
    return QWidget::qt_metacast(_clname);
}

int XYZContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void XYZContainer::inFocus(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XYZContainer::newGeometry(QRect _t1, QRect _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void XYZContainer::geomChanged(QRect _t1, QRect _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void XYZContainer::deleteByUser()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
