/****************************************************************************
** Meta object code from reading C++ file 'GraphicsScene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Graphics/GraphicsScene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GraphicsScene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GraphicsScene_t {
    QByteArrayData data[14];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphicsScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphicsScene_t qt_meta_stringdata_GraphicsScene = {
    {
QT_MOC_LITERAL(0, 0, 13), // "GraphicsScene"
QT_MOC_LITERAL(1, 14, 8), // "mousePos"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "pos"
QT_MOC_LITERAL(4, 28, 16), // "sceneModeChanged"
QT_MOC_LITERAL(5, 45, 14), // "QGraphicsItem*"
QT_MOC_LITERAL(6, 60, 4), // "item"
QT_MOC_LITERAL(7, 65, 19), // "GraphicsScene::Mode"
QT_MOC_LITERAL(8, 85, 4), // "mode"
QT_MOC_LITERAL(9, 90, 12), // "itemSelected"
QT_MOC_LITERAL(10, 103, 9), // "itemAdded"
QT_MOC_LITERAL(11, 113, 11), // "itemResized"
QT_MOC_LITERAL(12, 125, 10), // "sceneClick"
QT_MOC_LITERAL(13, 136, 12) // "itemRemoving"

    },
    "GraphicsScene\0mousePos\0\0pos\0"
    "sceneModeChanged\0QGraphicsItem*\0item\0"
    "GraphicsScene::Mode\0mode\0itemSelected\0"
    "itemAdded\0itemResized\0sceneClick\0"
    "itemRemoving"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphicsScene[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    2,   52,    2, 0x06 /* Public */,
       9,    1,   57,    2, 0x06 /* Public */,
      10,    1,   60,    2, 0x06 /* Public */,
      11,    1,   63,    2, 0x06 /* Public */,
      12,    0,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void GraphicsScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GraphicsScene *_t = static_cast<GraphicsScene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mousePos((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 1: _t->sceneModeChanged((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< GraphicsScene::Mode(*)>(_a[2]))); break;
        case 2: _t->itemSelected((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 3: _t->itemAdded((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 4: _t->itemResized((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 5: _t->sceneClick(); break;
        case 6: _t->itemRemoving(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GraphicsScene::*_t)(QPointF );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphicsScene::mousePos)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GraphicsScene::*_t)(QGraphicsItem * , GraphicsScene::Mode );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphicsScene::sceneModeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (GraphicsScene::*_t)(QGraphicsItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphicsScene::itemSelected)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (GraphicsScene::*_t)(QGraphicsItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphicsScene::itemAdded)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (GraphicsScene::*_t)(QGraphicsItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphicsScene::itemResized)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (GraphicsScene::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphicsScene::sceneClick)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject GraphicsScene::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_GraphicsScene.data,
      qt_meta_data_GraphicsScene,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GraphicsScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphicsScene::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GraphicsScene.stringdata0))
        return static_cast<void*>(const_cast< GraphicsScene*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int GraphicsScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void GraphicsScene::mousePos(QPointF _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GraphicsScene::sceneModeChanged(QGraphicsItem * _t1, GraphicsScene::Mode _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GraphicsScene::itemSelected(QGraphicsItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GraphicsScene::itemAdded(QGraphicsItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GraphicsScene::itemResized(QGraphicsItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GraphicsScene::sceneClick()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
