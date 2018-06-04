/****************************************************************************
** Meta object code from reading C++ file 'columnlist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SQLDiagram/columnlist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'columnlist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ColumnList_t {
    QByteArrayData data[10];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColumnList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColumnList_t qt_meta_stringdata_ColumnList = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ColumnList"
QT_MOC_LITERAL(1, 11, 23), // "columnAboutToBeInserted"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "index"
QT_MOC_LITERAL(4, 42, 14), // "columnInserted"
QT_MOC_LITERAL(5, 57, 22), // "columnAboutToBeRemoved"
QT_MOC_LITERAL(6, 80, 13), // "columnRemoved"
QT_MOC_LITERAL(7, 94, 13), // "columnChanged"
QT_MOC_LITERAL(8, 108, 12), // "updateColumn"
QT_MOC_LITERAL(9, 121, 4) // "name"

    },
    "ColumnList\0columnAboutToBeInserted\0\0"
    "index\0columnInserted\0columnAboutToBeRemoved\0"
    "columnRemoved\0columnChanged\0updateColumn\0"
    "name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColumnList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    1,   50,    2, 0x06 /* Public */,
       6,    1,   53,    2, 0x06 /* Public */,
       7,    1,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   59,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    9,    2,

       0        // eod
};

void ColumnList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ColumnList *_t = static_cast<ColumnList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->columnAboutToBeInserted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->columnInserted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->columnAboutToBeRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->columnRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->columnChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateColumn((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ColumnList::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColumnList::columnAboutToBeInserted)) {
                *result = 0;
            }
        }
        {
            typedef void (ColumnList::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColumnList::columnInserted)) {
                *result = 1;
            }
        }
        {
            typedef void (ColumnList::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColumnList::columnAboutToBeRemoved)) {
                *result = 2;
            }
        }
        {
            typedef void (ColumnList::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColumnList::columnRemoved)) {
                *result = 3;
            }
        }
        {
            typedef void (ColumnList::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColumnList::columnChanged)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject ColumnList::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ColumnList.data,
      qt_meta_data_ColumnList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ColumnList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColumnList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ColumnList.stringdata0))
        return static_cast<void*>(const_cast< ColumnList*>(this));
    return QObject::qt_metacast(_clname);
}

int ColumnList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void ColumnList::columnAboutToBeInserted(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ColumnList::columnInserted(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ColumnList::columnAboutToBeRemoved(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ColumnList::columnRemoved(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ColumnList::columnChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
