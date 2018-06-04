/****************************************************************************
** Meta object code from reading C++ file 'TContainerField.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TContainerField.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TContainerField.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TContainerField_t {
    QByteArrayData data[18];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TContainerField_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TContainerField_t qt_meta_stringdata_TContainerField = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TContainerField"
QT_MOC_LITERAL(1, 16, 4), // "edit"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 11), // "moveForward"
QT_MOC_LITERAL(4, 34, 8), // "moveBack"
QT_MOC_LITERAL(5, 43, 4), // "text"
QT_MOC_LITERAL(6, 48, 8), // "fontSize"
QT_MOC_LITERAL(7, 57, 10), // "autoHeight"
QT_MOC_LITERAL(8, 68, 9), // "imgFormat"
QT_MOC_LITERAL(9, 78, 17), // "ignoreAspectRatio"
QT_MOC_LITERAL(10, 96, 3), // "RTL"
QT_MOC_LITERAL(11, 100, 12), // "formatString"
QT_MOC_LITERAL(12, 113, 12), // "Highlighting"
QT_MOC_LITERAL(13, 126, 5), // "image"
QT_MOC_LITERAL(14, 132, 4), // "font"
QT_MOC_LITERAL(15, 137, 9), // "Alignment"
QT_MOC_LITERAL(16, 147, 13), // "Qt::Alignment"
QT_MOC_LITERAL(17, 161, 8) // "textWrap"

    },
    "TContainerField\0edit\0\0moveForward\0"
    "moveBack\0text\0fontSize\0autoHeight\0"
    "imgFormat\0ignoreAspectRatio\0RTL\0"
    "formatString\0Highlighting\0image\0font\0"
    "Alignment\0Qt::Alignment\0textWrap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TContainerField[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
      12,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::Int, 0x00095103,
       7, QMetaType::Bool, 0x00095103,
       8, QMetaType::QString, 0x00095003,
       9, QMetaType::Bool, 0x00095103,
      10, QMetaType::Bool, 0x00095003,
      11, QMetaType::QString, 0x00095103,
      12, QMetaType::QString, 0x00095103,
      13, QMetaType::QPixmap, 0x00095103,
      14, QMetaType::QFont, 0x00095103,
      15, 0x80000000 | 16, 0x0009500b,
      17, QMetaType::Bool, 0x00095103,

       0        // eod
};

void TContainerField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TContainerField *_t = static_cast<TContainerField *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->edit(); break;
        case 1: _t->moveForward(); break;
        case 2: _t->moveBack(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TContainerField *_t = static_cast<TContainerField *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getText(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getFontSize(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getAutoHeight(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getImgFormat(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getIgnoreAspectRatio(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->getTextDirection(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getFormatString(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getHighlighting(); break;
        case 8: *reinterpret_cast< QPixmap*>(_v) = _t->getImage(); break;
        case 9: *reinterpret_cast< QFont*>(_v) = _t->getFont(); break;
        case 10: *reinterpret_cast< Qt::Alignment*>(_v) = _t->getAligment(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->getTextWrap(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TContainerField *_t = static_cast<TContainerField *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFontSize(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setAutoHeight(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setImgFromat(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setIgnoreAspectRatio(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setTextDirection(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setFormatString(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setHighlighting(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setImage(*reinterpret_cast< QPixmap*>(_v)); break;
        case 9: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 10: _t->setAligment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 11: _t->setTextWrap(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject TContainerField::staticMetaObject = {
    { &RptContainer::staticMetaObject, qt_meta_stringdata_TContainerField.data,
      qt_meta_data_TContainerField,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TContainerField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TContainerField::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TContainerField.stringdata0))
        return static_cast<void*>(const_cast< TContainerField*>(this));
    return RptContainer::qt_metacast(_clname);
}

int TContainerField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RptContainer::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
