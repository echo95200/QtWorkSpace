/****************************************************************************
** Meta object code from reading C++ file 'GraphicsHelperClass.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QtRptProject/QtRptDesigner/Graphics/GraphicsHelperClass.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GraphicsHelperClass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GraphicsHelperClass_t {
    QByteArrayData data[11];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphicsHelperClass_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphicsHelperClass_t qt_meta_stringdata_GraphicsHelperClass = {
    {
QT_MOC_LITERAL(0, 0, 19), // "GraphicsHelperClass"
QT_MOC_LITERAL(1, 20, 12), // "itemRemoving"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 4), // "edit"
QT_MOC_LITERAL(4, 39, 11), // "moveForward"
QT_MOC_LITERAL(5, 51, 8), // "moveBack"
QT_MOC_LITERAL(6, 60, 8), // "printing"
QT_MOC_LITERAL(7, 69, 8), // "BrdWidth"
QT_MOC_LITERAL(8, 78, 8), // "BrdColor"
QT_MOC_LITERAL(9, 87, 7), // "BgColor"
QT_MOC_LITERAL(10, 95, 7) // "GrpName"

    },
    "GraphicsHelperClass\0itemRemoving\0\0"
    "edit\0moveForward\0moveBack\0printing\0"
    "BrdWidth\0BrdColor\0BgColor\0GrpName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphicsHelperClass[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       5,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00095103,
       7, QMetaType::Int, 0x00095003,
       8, QMetaType::QColor, 0x00095003,
       9, QMetaType::QColor, 0x00095003,
      10, QMetaType::QString, 0x00095003,

       0        // eod
};

void GraphicsHelperClass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GraphicsHelperClass *_t = static_cast<GraphicsHelperClass *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemRemoving(); break;
        case 1: _t->edit(); break;
        case 2: _t->moveForward(); break;
        case 3: _t->moveBack(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (GraphicsHelperClass::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphicsHelperClass::itemRemoving)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        GraphicsHelperClass *_t = static_cast<GraphicsHelperClass *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getPrinting(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getBorderWidth(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getBorderColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getBackgroundColor(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getGroupName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        GraphicsHelperClass *_t = static_cast<GraphicsHelperClass *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPrinting(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setBorderWidth(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setGroupName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject GraphicsHelperClass::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GraphicsHelperClass.data,
      qt_meta_data_GraphicsHelperClass,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GraphicsHelperClass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphicsHelperClass::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphicsHelperClass.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GraphicsHelperClass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void GraphicsHelperClass::itemRemoving()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
