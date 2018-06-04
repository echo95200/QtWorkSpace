/****************************************************************************
** Meta object code from reading C++ file 'ReportBand.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ReportBand.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ReportBand.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ReportBand_t {
    QByteArrayData data[8];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReportBand_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReportBand_t qt_meta_stringdata_ReportBand = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ReportBand"
QT_MOC_LITERAL(1, 11, 7), // "inFocus"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 4), // "mode"
QT_MOC_LITERAL(4, 25, 11), // "endResizing"
QT_MOC_LITERAL(5, 37, 4), // "rect"
QT_MOC_LITERAL(6, 42, 7), // "delBand"
QT_MOC_LITERAL(7, 50, 16) // "QTreeWidgetItem*"

    },
    "ReportBand\0inFocus\0\0mode\0endResizing\0"
    "rect\0delBand\0QTreeWidgetItem*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReportBand[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       6,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QRect,    5,
    QMetaType::Void, 0x80000000 | 7,    2,

       0        // eod
};

void ReportBand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ReportBand *_t = static_cast<ReportBand *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->inFocus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->endResizing((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 2: _t->delBand((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ReportBand::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ReportBand::inFocus)) {
                *result = 0;
            }
        }
        {
            typedef void (ReportBand::*_t)(QRect );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ReportBand::endResizing)) {
                *result = 1;
            }
        }
        {
            typedef void (ReportBand::*_t)(QTreeWidgetItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ReportBand::delBand)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject ReportBand::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ReportBand.data,
      qt_meta_data_ReportBand,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ReportBand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReportBand::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ReportBand.stringdata0))
        return static_cast<void*>(const_cast< ReportBand*>(this));
    return QWidget::qt_metacast(_clname);
}

int ReportBand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ReportBand::inFocus(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ReportBand::endResizing(QRect _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ReportBand::delBand(QTreeWidgetItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
