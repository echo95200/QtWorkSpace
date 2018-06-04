/****************************************************************************
** Meta object code from reading C++ file 'EditFldDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QtRptProject/QtRptDesigner/EditFldDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditFldDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EditFldDlg_t {
    QByteArrayData data[22];
    char stringdata0[295];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditFldDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditFldDlg_t qt_meta_stringdata_EditFldDlg = {
    {
QT_MOC_LITERAL(0, 0, 10), // "EditFldDlg"
QT_MOC_LITERAL(1, 11, 9), // "loadImage"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 9), // "saveImage"
QT_MOC_LITERAL(4, 32, 12), // "openProperty"
QT_MOC_LITERAL(5, 45, 18), // "conditionalToggled"
QT_MOC_LITERAL(6, 64, 5), // "value"
QT_MOC_LITERAL(7, 70, 17), // "backGroundToggled"
QT_MOC_LITERAL(8, 88, 16), // "conditionChanged"
QT_MOC_LITERAL(9, 105, 4), // "text"
QT_MOC_LITERAL(10, 110, 11), // "chooseColor"
QT_MOC_LITERAL(11, 122, 24), // "encodeHighLightingString"
QT_MOC_LITERAL(12, 147, 24), // "decodeHighLightingString"
QT_MOC_LITERAL(13, 172, 12), // "autoFillData"
QT_MOC_LITERAL(14, 185, 16), // "selectGraphColor"
QT_MOC_LITERAL(15, 202, 7), // "moveRow"
QT_MOC_LITERAL(16, 210, 20), // "itemSelectionChanged"
QT_MOC_LITERAL(17, 231, 9), // "removeRow"
QT_MOC_LITERAL(18, 241, 6), // "addRow"
QT_MOC_LITERAL(19, 248, 17), // "setScaledContents"
QT_MOC_LITERAL(20, 266, 14), // "update_preview"
QT_MOC_LITERAL(21, 281, 13) // "textDirection"

    },
    "EditFldDlg\0loadImage\0\0saveImage\0"
    "openProperty\0conditionalToggled\0value\0"
    "backGroundToggled\0conditionChanged\0"
    "text\0chooseColor\0encodeHighLightingString\0"
    "decodeHighLightingString\0autoFillData\0"
    "selectGraphColor\0moveRow\0itemSelectionChanged\0"
    "removeRow\0addRow\0setScaledContents\0"
    "update_preview\0textDirection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditFldDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x08 /* Private */,
       3,    0,  105,    2, 0x08 /* Private */,
       4,    0,  106,    2, 0x08 /* Private */,
       5,    1,  107,    2, 0x08 /* Private */,
       7,    1,  110,    2, 0x08 /* Private */,
       8,    1,  113,    2, 0x08 /* Private */,
      10,    0,  116,    2, 0x08 /* Private */,
      11,    0,  117,    2, 0x08 /* Private */,
      12,    0,  118,    2, 0x08 /* Private */,
      13,    1,  119,    2, 0x08 /* Private */,
      14,    0,  122,    2, 0x08 /* Private */,
      15,    0,  123,    2, 0x08 /* Private */,
      16,    0,  124,    2, 0x08 /* Private */,
      17,    0,  125,    2, 0x08 /* Private */,
      18,    0,  126,    2, 0x08 /* Private */,
      19,    1,  127,    2, 0x08 /* Private */,
      20,    0,  130,    2, 0x08 /* Private */,
      21,    0,  131,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EditFldDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EditFldDlg *_t = static_cast<EditFldDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadImage(); break;
        case 1: _t->saveImage(); break;
        case 2: _t->openProperty(); break;
        case 3: _t->conditionalToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->backGroundToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->conditionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->chooseColor(); break;
        case 7: _t->encodeHighLightingString(); break;
        case 8: _t->decodeHighLightingString(); break;
        case 9: _t->autoFillData((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->selectGraphColor(); break;
        case 11: _t->moveRow(); break;
        case 12: _t->itemSelectionChanged(); break;
        case 13: _t->removeRow(); break;
        case 14: _t->addRow(); break;
        case 15: _t->setScaledContents((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->update_preview(); break;
        case 17: _t->textDirection(); break;
        default: ;
        }
    }
}

const QMetaObject EditFldDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EditFldDlg.data,
      qt_meta_data_EditFldDlg,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EditFldDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditFldDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EditFldDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EditFldDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
