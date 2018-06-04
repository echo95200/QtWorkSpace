/****************************************************************************
** Meta object code from reading C++ file 'qtexteditex.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CommonFiles/qtexteditex.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtexteditex.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QTextEditEx_t {
    QByteArrayData data[18];
    char stringdata[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QTextEditEx_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QTextEditEx_t qt_meta_stringdata_QTextEditEx = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QTextEditEx"
QT_MOC_LITERAL(1, 12, 8), // "textSize"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 1), // "p"
QT_MOC_LITERAL(4, 24, 10), // "textFamily"
QT_MOC_LITERAL(5, 35, 1), // "f"
QT_MOC_LITERAL(6, 37, 9), // "textStyle"
QT_MOC_LITERAL(7, 47, 10), // "styleIndex"
QT_MOC_LITERAL(8, 58, 8), // "textBold"
QT_MOC_LITERAL(9, 67, 10), // "textItalic"
QT_MOC_LITERAL(10, 78, 13), // "textUnderline"
QT_MOC_LITERAL(11, 92, 9), // "textAlign"
QT_MOC_LITERAL(12, 102, 9), // "textColor"
QT_MOC_LITERAL(13, 112, 24), // "currentCharFormatChanged"
QT_MOC_LITERAL(14, 137, 15), // "QTextCharFormat"
QT_MOC_LITERAL(15, 153, 6), // "format"
QT_MOC_LITERAL(16, 160, 21), // "cursorPositionChanged"
QT_MOC_LITERAL(17, 182, 13) // "textDirection"

    },
    "QTextEditEx\0textSize\0\0p\0textFamily\0f\0"
    "textStyle\0styleIndex\0textBold\0textItalic\0"
    "textUnderline\0textAlign\0textColor\0"
    "currentCharFormatChanged\0QTextCharFormat\0"
    "format\0cursorPositionChanged\0textDirection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTextEditEx[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x08 /* Private */,
       4,    1,   72,    2, 0x08 /* Private */,
       6,    1,   75,    2, 0x08 /* Private */,
       8,    0,   78,    2, 0x08 /* Private */,
       9,    0,   79,    2, 0x08 /* Private */,
      10,    0,   80,    2, 0x08 /* Private */,
      11,    0,   81,    2, 0x08 /* Private */,
      12,    0,   82,    2, 0x08 /* Private */,
      13,    1,   83,    2, 0x08 /* Private */,
      16,    0,   86,    2, 0x08 /* Private */,
      17,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QTextEditEx::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QTextEditEx *_t = static_cast<QTextEditEx *>(_o);
        switch (_id) {
        case 0: _t->textSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->textFamily((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->textStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->textBold(); break;
        case 4: _t->textItalic(); break;
        case 5: _t->textUnderline(); break;
        case 6: _t->textAlign(); break;
        case 7: _t->textColor(); break;
        case 8: _t->currentCharFormatChanged((*reinterpret_cast< const QTextCharFormat(*)>(_a[1]))); break;
        case 9: _t->cursorPositionChanged(); break;
        case 10: _t->textDirection(); break;
        default: ;
        }
    }
}

const QMetaObject QTextEditEx::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QTextEditEx.data,
      qt_meta_data_QTextEditEx,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QTextEditEx::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTextEditEx::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QTextEditEx.stringdata))
        return static_cast<void*>(const_cast< QTextEditEx*>(this));
    return QWidget::qt_metacast(_clname);
}

int QTextEditEx::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
