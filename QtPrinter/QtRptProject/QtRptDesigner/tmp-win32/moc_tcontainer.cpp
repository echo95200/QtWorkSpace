/****************************************************************************
** Meta object code from reading C++ file 'tcontainer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CommonFiles/tcontainer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcontainer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TContainer_t {
    QByteArrayData data[13];
    char stringdata[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TContainer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TContainer_t qt_meta_stringdata_TContainer = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TContainer"
QT_MOC_LITERAL(1, 11, 7), // "inFocus"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 4), // "mode"
QT_MOC_LITERAL(4, 25, 11), // "newGeometry"
QT_MOC_LITERAL(5, 37, 7), // "oldRect"
QT_MOC_LITERAL(6, 45, 7), // "newRect"
QT_MOC_LITERAL(7, 53, 11), // "geomChanged"
QT_MOC_LITERAL(8, 65, 12), // "deleteByUser"
QT_MOC_LITERAL(9, 78, 13), // "setDesignMode"
QT_MOC_LITERAL(10, 92, 11), // "setEditMode"
QT_MOC_LITERAL(11, 104, 8), // "Selected"
QT_MOC_LITERAL(12, 113, 9) // "Overlayed"

    },
    "TContainer\0inFocus\0\0mode\0newGeometry\0"
    "oldRect\0newRect\0geomChanged\0deleteByUser\0"
    "setDesignMode\0setEditMode\0Selected\0"
    "Overlayed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TContainer[] = {

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

void TContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TContainer *_t = static_cast<TContainer *>(_o);
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
            typedef void (TContainer::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TContainer::inFocus)) {
                *result = 0;
            }
        }
        {
            typedef void (TContainer::*_t)(QRect , QRect );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TContainer::newGeometry)) {
                *result = 1;
            }
        }
        {
            typedef void (TContainer::*_t)(QRect , QRect );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TContainer::geomChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (TContainer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TContainer::deleteByUser)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject TContainer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TContainer.data,
      qt_meta_data_TContainer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TContainer.stringdata))
        return static_cast<void*>(const_cast< TContainer*>(this));
    return QWidget::qt_metacast(_clname);
}

int TContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isSelected(); break;
        case 1: *reinterpret_cast< bool*>(_v) = hasOverlay(); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSelected(*reinterpret_cast< bool*>(_v)); break;
        case 1: setHasOverlay(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
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
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TContainer::inFocus(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TContainer::newGeometry(QRect _t1, QRect _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TContainer::geomChanged(QRect _t1, QRect _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TContainer::deleteByUser()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
