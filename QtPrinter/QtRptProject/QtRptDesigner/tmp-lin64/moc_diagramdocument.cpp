/****************************************************************************
** Meta object code from reading C++ file 'diagramdocument.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SQLDiagram/diagramdocument.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'diagramdocument.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DiagramDocument_t {
    QByteArrayData data[15];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DiagramDocument_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DiagramDocument_t qt_meta_stringdata_DiagramDocument = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DiagramDocument"
QT_MOC_LITERAL(1, 16, 11), // "modeChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 21), // "DiagramDocument::Mode"
QT_MOC_LITERAL(4, 51, 4), // "mode"
QT_MOC_LITERAL(5, 56, 10), // "sqlChanged"
QT_MOC_LITERAL(6, 67, 5), // "value"
QT_MOC_LITERAL(7, 73, 15), // "updatePositions"
QT_MOC_LITERAL(8, 89, 14), // "DiagramObject*"
QT_MOC_LITERAL(9, 104, 6), // "object"
QT_MOC_LITERAL(10, 111, 5), // "force"
QT_MOC_LITERAL(11, 117, 16), // "updateLineLayout"
QT_MOC_LITERAL(12, 134, 7), // "::Line*"
QT_MOC_LITERAL(13, 142, 4), // "line"
QT_MOC_LITERAL(14, 147, 12) // "_updateLines"

    },
    "DiagramDocument\0modeChanged\0\0"
    "DiagramDocument::Mode\0mode\0sqlChanged\0"
    "value\0updatePositions\0DiagramObject*\0"
    "object\0force\0updateLineLayout\0::Line*\0"
    "line\0_updateLines"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DiagramDocument[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   50,    2, 0x0a /* Public */,
       7,    1,   55,    2, 0x2a /* Public | MethodCloned */,
      11,    1,   58,    2, 0x0a /* Public */,
      14,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool,    9,   10,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,

       0        // eod
};

void DiagramDocument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DiagramDocument *_t = static_cast<DiagramDocument *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modeChanged((*reinterpret_cast< DiagramDocument::Mode(*)>(_a[1]))); break;
        case 1: _t->sqlChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updatePositions((*reinterpret_cast< DiagramObject*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->updatePositions((*reinterpret_cast< DiagramObject*(*)>(_a[1]))); break;
        case 4: _t->updateLineLayout((*reinterpret_cast< ::Line*(*)>(_a[1]))); break;
        case 5: _t->_updateLines(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DiagramObject* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DiagramObject* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DiagramDocument::*_t)(DiagramDocument::Mode );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DiagramDocument::modeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (DiagramDocument::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DiagramDocument::sqlChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject DiagramDocument::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_DiagramDocument.data,
      qt_meta_data_DiagramDocument,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DiagramDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DiagramDocument::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DiagramDocument.stringdata0))
        return static_cast<void*>(const_cast< DiagramDocument*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int DiagramDocument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void DiagramDocument::modeChanged(DiagramDocument::Mode _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DiagramDocument::sqlChanged(const QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
