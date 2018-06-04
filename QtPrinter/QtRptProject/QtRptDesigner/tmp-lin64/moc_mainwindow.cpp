/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EditorDelegate_t {
    QByteArrayData data[12];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditorDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditorDelegate_t qt_meta_stringdata_EditorDelegate = {
    {
QT_MOC_LITERAL(0, 0, 14), // "EditorDelegate"
QT_MOC_LITERAL(1, 15, 11), // "editorClose"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "QItemDelegate*"
QT_MOC_LITERAL(4, 43, 4), // "item"
QT_MOC_LITERAL(5, 48, 10), // "btnClicked"
QT_MOC_LITERAL(6, 59, 20), // "commitAndCloseEditor"
QT_MOC_LITERAL(7, 80, 12), // "editorClose_"
QT_MOC_LITERAL(8, 93, 8), // "QWidget*"
QT_MOC_LITERAL(9, 102, 6), // "editor"
QT_MOC_LITERAL(10, 109, 34), // "QAbstractItemDelegate::EndEdi..."
QT_MOC_LITERAL(11, 144, 4) // "hint"

    },
    "EditorDelegate\0editorClose\0\0QItemDelegate*\0"
    "item\0btnClicked\0commitAndCloseEditor\0"
    "editorClose_\0QWidget*\0editor\0"
    "QAbstractItemDelegate::EndEditHint\0"
    "hint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditorDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   38,    2, 0x08 /* Private */,
       7,    2,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10,    9,   11,

       0        // eod
};

void EditorDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EditorDelegate *_t = static_cast<EditorDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editorClose((*reinterpret_cast< QItemDelegate*(*)>(_a[1]))); break;
        case 1: _t->btnClicked(); break;
        case 2: _t->commitAndCloseEditor(); break;
        case 3: _t->editorClose_((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemDelegate::EndEditHint(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemDelegate* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (EditorDelegate::*_t)(QItemDelegate * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EditorDelegate::editorClose)) {
                *result = 0;
            }
        }
        {
            typedef void (EditorDelegate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EditorDelegate::btnClicked)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject EditorDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_EditorDelegate.data,
      qt_meta_data_EditorDelegate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EditorDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditorDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EditorDelegate.stringdata0))
        return static_cast<void*>(const_cast< EditorDelegate*>(this));
    return QItemDelegate::qt_metacast(_clname);
}

int EditorDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void EditorDelegate::editorClose(QItemDelegate * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EditorDelegate::btnClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[60];
    char stringdata0[699];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 9), // "showAbout"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 8), // "openFile"
QT_MOC_LITERAL(4, 31, 9), // "newReport"
QT_MOC_LITERAL(5, 41, 10), // "saveReport"
QT_MOC_LITERAL(6, 52, 15), // "showPageSetting"
QT_MOC_LITERAL(7, 68, 11), // "clickOnTBtn"
QT_MOC_LITERAL(8, 80, 7), // "addBand"
QT_MOC_LITERAL(9, 88, 12), // "addFieldText"
QT_MOC_LITERAL(10, 101, 16), // "addFieldTextRich"
QT_MOC_LITERAL(11, 118, 16), // "addFieldCrossTab"
QT_MOC_LITERAL(12, 135, 8), // "addField"
QT_MOC_LITERAL(13, 144, 9), // "FieldType"
QT_MOC_LITERAL(14, 154, 4), // "type"
QT_MOC_LITERAL(15, 159, 10), // "AddPicture"
QT_MOC_LITERAL(16, 170, 10), // "addDiagram"
QT_MOC_LITERAL(17, 181, 7), // "addDraw"
QT_MOC_LITERAL(18, 189, 10), // "addBarcode"
QT_MOC_LITERAL(19, 200, 16), // "setWidgetInFocus"
QT_MOC_LITERAL(20, 217, 7), // "inFocus"
QT_MOC_LITERAL(21, 225, 13), // "delItemInTree"
QT_MOC_LITERAL(22, 239, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(23, 256, 7), // "selTree"
QT_MOC_LITERAL(24, 264, 4), // "item"
QT_MOC_LITERAL(25, 269, 11), // "itemChanged"
QT_MOC_LITERAL(26, 281, 6), // "column"
QT_MOC_LITERAL(27, 288, 11), // "closeEditor"
QT_MOC_LITERAL(28, 300, 14), // "changeTextFont"
QT_MOC_LITERAL(29, 315, 16), // "contGeomChanging"
QT_MOC_LITERAL(30, 332, 7), // "oldRect"
QT_MOC_LITERAL(31, 340, 7), // "newRect"
QT_MOC_LITERAL(32, 348, 15), // "contGeomChanged"
QT_MOC_LITERAL(33, 364, 16), // "setGroupingField"
QT_MOC_LITERAL(34, 381, 9), // "clipBoard"
QT_MOC_LITERAL(35, 391, 11), // "chooseColor"
QT_MOC_LITERAL(36, 403, 14), // "showFrameStyle"
QT_MOC_LITERAL(37, 418, 3), // "pos"
QT_MOC_LITERAL(38, 422, 13), // "setFrameStyle"
QT_MOC_LITERAL(39, 436, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(40, 453, 16), // "changeFrameWidth"
QT_MOC_LITERAL(41, 470, 10), // "bandResing"
QT_MOC_LITERAL(42, 481, 5), // "value"
QT_MOC_LITERAL(43, 487, 17), // "reportPageChanged"
QT_MOC_LITERAL(44, 505, 5), // "index"
QT_MOC_LITERAL(45, 511, 13), // "newReportPage"
QT_MOC_LITERAL(46, 525, 16), // "deleteReportPage"
QT_MOC_LITERAL(47, 542, 11), // "alignFields"
QT_MOC_LITERAL(48, 554, 14), // "openRecentFile"
QT_MOC_LITERAL(49, 569, 12), // "closeProgram"
QT_MOC_LITERAL(50, 582, 11), // "showSetting"
QT_MOC_LITERAL(51, 594, 10), // "changeZoom"
QT_MOC_LITERAL(52, 605, 19), // "openDBGroupProperty"
QT_MOC_LITERAL(53, 625, 12), // "checkUpdates"
QT_MOC_LITERAL(54, 638, 11), // "showPreview"
QT_MOC_LITERAL(55, 650, 14), // "showDataSource"
QT_MOC_LITERAL(56, 665, 4), // "undo"
QT_MOC_LITERAL(57, 670, 4), // "redo"
QT_MOC_LITERAL(58, 675, 10), // "openReadme"
QT_MOC_LITERAL(59, 686, 12) // "deleteByUser"

    },
    "MainWindow\0showAbout\0\0openFile\0newReport\0"
    "saveReport\0showPageSetting\0clickOnTBtn\0"
    "addBand\0addFieldText\0addFieldTextRich\0"
    "addFieldCrossTab\0addField\0FieldType\0"
    "type\0AddPicture\0addDiagram\0addDraw\0"
    "addBarcode\0setWidgetInFocus\0inFocus\0"
    "delItemInTree\0QTreeWidgetItem*\0selTree\0"
    "item\0itemChanged\0column\0closeEditor\0"
    "changeTextFont\0contGeomChanging\0oldRect\0"
    "newRect\0contGeomChanged\0setGroupingField\0"
    "clipBoard\0chooseColor\0showFrameStyle\0"
    "pos\0setFrameStyle\0QListWidgetItem*\0"
    "changeFrameWidth\0bandResing\0value\0"
    "reportPageChanged\0index\0newReportPage\0"
    "deleteReportPage\0alignFields\0"
    "openRecentFile\0closeProgram\0showSetting\0"
    "changeZoom\0openDBGroupProperty\0"
    "checkUpdates\0showPreview\0showDataSource\0"
    "undo\0redo\0openReadme\0deleteByUser"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  244,    2, 0x08 /* Private */,
       3,    0,  245,    2, 0x08 /* Private */,
       4,    0,  246,    2, 0x08 /* Private */,
       5,    0,  247,    2, 0x08 /* Private */,
       6,    0,  248,    2, 0x08 /* Private */,
       7,    0,  249,    2, 0x08 /* Private */,
       8,    0,  250,    2, 0x08 /* Private */,
       9,    0,  251,    2, 0x08 /* Private */,
      10,    0,  252,    2, 0x08 /* Private */,
      11,    0,  253,    2, 0x08 /* Private */,
      12,    1,  254,    2, 0x08 /* Private */,
      15,    0,  257,    2, 0x08 /* Private */,
      16,    0,  258,    2, 0x08 /* Private */,
      17,    0,  259,    2, 0x08 /* Private */,
      18,    0,  260,    2, 0x08 /* Private */,
      19,    1,  261,    2, 0x08 /* Private */,
      21,    1,  264,    2, 0x08 /* Private */,
      23,    2,  267,    2, 0x08 /* Private */,
      25,    2,  272,    2, 0x08 /* Private */,
      27,    0,  277,    2, 0x08 /* Private */,
      28,    0,  278,    2, 0x08 /* Private */,
      29,    2,  279,    2, 0x08 /* Private */,
      32,    2,  284,    2, 0x08 /* Private */,
      33,    0,  289,    2, 0x08 /* Private */,
      34,    0,  290,    2, 0x08 /* Private */,
      35,    0,  291,    2, 0x08 /* Private */,
      36,    1,  292,    2, 0x08 /* Private */,
      38,    1,  295,    2, 0x08 /* Private */,
      40,    0,  298,    2, 0x08 /* Private */,
      41,    1,  299,    2, 0x08 /* Private */,
      43,    1,  302,    2, 0x08 /* Private */,
      45,    0,  305,    2, 0x08 /* Private */,
      46,    0,  306,    2, 0x08 /* Private */,
      47,    0,  307,    2, 0x08 /* Private */,
      48,    0,  308,    2, 0x08 /* Private */,
      49,    0,  309,    2, 0x08 /* Private */,
      50,    0,  310,    2, 0x08 /* Private */,
      51,    0,  311,    2, 0x08 /* Private */,
      52,    0,  312,    2, 0x08 /* Private */,
      53,    0,  313,    2, 0x08 /* Private */,
      54,    0,  314,    2, 0x08 /* Private */,
      55,    0,  315,    2, 0x08 /* Private */,
      56,    0,  316,    2, 0x08 /* Private */,
      57,    0,  317,    2, 0x08 /* Private */,
      58,    0,  318,    2, 0x08 /* Private */,
      59,    0,  319,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, 0x80000000 | 22,    2,
    QMetaType::Void, 0x80000000 | 22, QMetaType::Int,   24,    2,
    QMetaType::Void, 0x80000000 | 22, QMetaType::Int,   24,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRect, QMetaType::QRect,   30,   31,
    QMetaType::Void, QMetaType::QRect, QMetaType::QRect,   30,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   37,
    QMetaType::Void, 0x80000000 | 39,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   42,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showAbout(); break;
        case 1: _t->openFile(); break;
        case 2: _t->newReport(); break;
        case 3: _t->saveReport(); break;
        case 4: _t->showPageSetting(); break;
        case 5: _t->clickOnTBtn(); break;
        case 6: _t->addBand(); break;
        case 7: _t->addFieldText(); break;
        case 8: _t->addFieldTextRich(); break;
        case 9: _t->addFieldCrossTab(); break;
        case 10: _t->addField((*reinterpret_cast< FieldType(*)>(_a[1]))); break;
        case 11: _t->AddPicture(); break;
        case 12: _t->addDiagram(); break;
        case 13: _t->addDraw(); break;
        case 14: _t->addBarcode(); break;
        case 15: _t->setWidgetInFocus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->delItemInTree((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 17: _t->selTree((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->itemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->closeEditor(); break;
        case 20: _t->changeTextFont(); break;
        case 21: _t->contGeomChanging((*reinterpret_cast< QRect(*)>(_a[1])),(*reinterpret_cast< QRect(*)>(_a[2]))); break;
        case 22: _t->contGeomChanged((*reinterpret_cast< QRect(*)>(_a[1])),(*reinterpret_cast< QRect(*)>(_a[2]))); break;
        case 23: _t->setGroupingField(); break;
        case 24: _t->clipBoard(); break;
        case 25: _t->chooseColor(); break;
        case 26: _t->showFrameStyle((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 27: _t->setFrameStyle((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 28: _t->changeFrameWidth(); break;
        case 29: _t->bandResing((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->reportPageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->newReportPage(); break;
        case 32: _t->deleteReportPage(); break;
        case 33: _t->alignFields(); break;
        case 34: _t->openRecentFile(); break;
        case 35: _t->closeProgram(); break;
        case 36: _t->showSetting(); break;
        case 37: _t->changeZoom(); break;
        case 38: _t->openDBGroupProperty(); break;
        case 39: _t->checkUpdates(); break;
        case 40: _t->showPreview(); break;
        case 41: _t->showDataSource(); break;
        case 42: _t->undo(); break;
        case 43: _t->redo(); break;
        case 44: _t->openReadme(); break;
        case 45: _t->deleteByUser(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 46)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 46;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
