/****************************************************************************
** Meta object code from reading C++ file 'XYZ_TextEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CommonFiles/XYZ_TextEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'XYZ_TextEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_XYZTextEditor_t {
    QByteArrayData data[18];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XYZTextEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XYZTextEditor_t qt_meta_stringdata_XYZTextEditor = {
    {
QT_MOC_LITERAL(0, 0, 13), // "XYZTextEditor"
QT_MOC_LITERAL(1, 14, 8), // "textSize"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 1), // "p"
QT_MOC_LITERAL(4, 26, 10), // "textFamily"
QT_MOC_LITERAL(5, 37, 1), // "f"
QT_MOC_LITERAL(6, 39, 9), // "textStyle"
QT_MOC_LITERAL(7, 49, 10), // "styleIndex"
QT_MOC_LITERAL(8, 60, 8), // "textBold"
QT_MOC_LITERAL(9, 69, 10), // "textItalic"
QT_MOC_LITERAL(10, 80, 13), // "textUnderline"
QT_MOC_LITERAL(11, 94, 9), // "textAlign"
QT_MOC_LITERAL(12, 104, 9), // "textColor"
QT_MOC_LITERAL(13, 114, 24), // "currentCharFormatChanged"
QT_MOC_LITERAL(14, 139, 15), // "QTextCharFormat"
QT_MOC_LITERAL(15, 155, 6), // "format"
QT_MOC_LITERAL(16, 162, 21), // "cursorPositionChanged"
QT_MOC_LITERAL(17, 184, 13) // "textDirection"

    },
    "XYZTextEditor\0textSize\0\0p\0textFamily\0"
    "f\0textStyle\0styleIndex\0textBold\0"
    "textItalic\0textUnderline\0textAlign\0"
    "textColor\0currentCharFormatChanged\0"
    "QTextCharFormat\0format\0cursorPositionChanged\0"
    "textDirection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XYZTextEditor[] = {

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

void XYZTextEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        XYZTextEditor *_t = static_cast<XYZTextEditor *>(_o);
        Q_UNUSED(_t)
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

const QMetaObject XYZTextEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_XYZTextEditor.data,
      qt_meta_data_XYZTextEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *XYZTextEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XYZTextEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_XYZTextEditor.stringdata0))
        return static_cast<void*>(const_cast< XYZTextEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int XYZTextEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
