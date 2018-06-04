/****************************************************************************
** Meta object code from reading C++ file 'Barcode.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CommonFiles/Barcode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Barcode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BarCode_t {
    QByteArrayData data[80];
    char stringdata0[669];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BarCode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BarCode_t qt_meta_stringdata_BarCode = {
    {
QT_MOC_LITERAL(0, 0, 7), // "BarCode"
QT_MOC_LITERAL(1, 8, 8), // "setValue"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 5), // "value"
QT_MOC_LITERAL(4, 24, 12), // "BarcodeTypes"
QT_MOC_LITERAL(5, 37, 6), // "CODE11"
QT_MOC_LITERAL(6, 44, 9), // "C25MATRIX"
QT_MOC_LITERAL(7, 54, 8), // "C25INTER"
QT_MOC_LITERAL(8, 63, 7), // "C25IATA"
QT_MOC_LITERAL(9, 71, 8), // "C25LOGIC"
QT_MOC_LITERAL(10, 80, 6), // "C25IND"
QT_MOC_LITERAL(11, 87, 6), // "CODE39"
QT_MOC_LITERAL(12, 94, 8), // "EXCODE39"
QT_MOC_LITERAL(13, 103, 4), // "EANX"
QT_MOC_LITERAL(14, 108, 6), // "EAN128"
QT_MOC_LITERAL(15, 115, 7), // "CODABAR"
QT_MOC_LITERAL(16, 123, 7), // "CODE128"
QT_MOC_LITERAL(17, 131, 6), // "DPLEIT"
QT_MOC_LITERAL(18, 138, 7), // "DPIDENT"
QT_MOC_LITERAL(19, 146, 7), // "CODE16K"
QT_MOC_LITERAL(20, 154, 6), // "CODE93"
QT_MOC_LITERAL(21, 161, 4), // "FLAT"
QT_MOC_LITERAL(22, 166, 5), // "RSS14"
QT_MOC_LITERAL(23, 172, 7), // "RSS_LTD"
QT_MOC_LITERAL(24, 180, 7), // "RSS_EXP"
QT_MOC_LITERAL(25, 188, 7), // "TELEPEN"
QT_MOC_LITERAL(26, 196, 4), // "UPCA"
QT_MOC_LITERAL(27, 201, 4), // "UPCE"
QT_MOC_LITERAL(28, 206, 7), // "POSTNET"
QT_MOC_LITERAL(29, 214, 11), // "MSI_PLESSEY"
QT_MOC_LITERAL(30, 226, 3), // "FIM"
QT_MOC_LITERAL(31, 230, 7), // "LOGMARS"
QT_MOC_LITERAL(32, 238, 6), // "PHARMA"
QT_MOC_LITERAL(33, 245, 3), // "PZN"
QT_MOC_LITERAL(34, 249, 10), // "PHARMA_TWO"
QT_MOC_LITERAL(35, 260, 6), // "PDF417"
QT_MOC_LITERAL(36, 267, 11), // "PDF417TRUNC"
QT_MOC_LITERAL(37, 279, 8), // "MAXICODE"
QT_MOC_LITERAL(38, 288, 6), // "QRCODE"
QT_MOC_LITERAL(39, 295, 8), // "CODE128B"
QT_MOC_LITERAL(40, 304, 7), // "AUSPOST"
QT_MOC_LITERAL(41, 312, 8), // "AUSREPLY"
QT_MOC_LITERAL(42, 321, 8), // "AUSROUTE"
QT_MOC_LITERAL(43, 330, 11), // "AUSREDIRECT"
QT_MOC_LITERAL(44, 342, 5), // "ISBNX"
QT_MOC_LITERAL(45, 348, 6), // "RM4SCC"
QT_MOC_LITERAL(46, 355, 10), // "DATAMATRIX"
QT_MOC_LITERAL(47, 366, 5), // "ITF14"
QT_MOC_LITERAL(48, 372, 10), // "CODABLOCKF"
QT_MOC_LITERAL(49, 383, 5), // "NVE18"
QT_MOC_LITERAL(50, 389, 9), // "KOREAPOST"
QT_MOC_LITERAL(51, 399, 10), // "RSS14STACK"
QT_MOC_LITERAL(52, 410, 15), // "RSS14STACK_OMNI"
QT_MOC_LITERAL(53, 426, 12), // "RSS_EXPSTACK"
QT_MOC_LITERAL(54, 439, 6), // "PLANET"
QT_MOC_LITERAL(55, 446, 11), // "MICROPDF417"
QT_MOC_LITERAL(56, 458, 7), // "ONECODE"
QT_MOC_LITERAL(57, 466, 7), // "PLESSEY"
QT_MOC_LITERAL(58, 474, 3), // "KIX"
QT_MOC_LITERAL(59, 478, 5), // "AZTEC"
QT_MOC_LITERAL(60, 484, 4), // "DAFT"
QT_MOC_LITERAL(61, 489, 9), // "ITALYPOST"
QT_MOC_LITERAL(62, 499, 3), // "DPD"
QT_MOC_LITERAL(63, 503, 7), // "MICROQR"
QT_MOC_LITERAL(64, 511, 11), // "TELEPEN_NUM"
QT_MOC_LITERAL(65, 523, 6), // "CODE32"
QT_MOC_LITERAL(66, 530, 7), // "EANX_CC"
QT_MOC_LITERAL(67, 538, 9), // "EAN128_CC"
QT_MOC_LITERAL(68, 548, 8), // "RSS14_CC"
QT_MOC_LITERAL(69, 557, 10), // "RSS_LTD_CC"
QT_MOC_LITERAL(70, 568, 10), // "RSS_EXP_CC"
QT_MOC_LITERAL(71, 579, 7), // "UPCA_CC"
QT_MOC_LITERAL(72, 587, 7), // "UPCE_CC"
QT_MOC_LITERAL(73, 595, 13), // "RSS14STACK_CC"
QT_MOC_LITERAL(74, 609, 13), // "RSS14_OMNI_CC"
QT_MOC_LITERAL(75, 623, 15), // "RSS_EXPSTACK_CC"
QT_MOC_LITERAL(76, 639, 10), // "FrameTypes"
QT_MOC_LITERAL(77, 650, 9), // "NO_BORDER"
QT_MOC_LITERAL(78, 660, 4), // "BIND"
QT_MOC_LITERAL(79, 665, 3) // "BOX"

    },
    "BarCode\0setValue\0\0value\0BarcodeTypes\0"
    "CODE11\0C25MATRIX\0C25INTER\0C25IATA\0"
    "C25LOGIC\0C25IND\0CODE39\0EXCODE39\0EANX\0"
    "EAN128\0CODABAR\0CODE128\0DPLEIT\0DPIDENT\0"
    "CODE16K\0CODE93\0FLAT\0RSS14\0RSS_LTD\0"
    "RSS_EXP\0TELEPEN\0UPCA\0UPCE\0POSTNET\0"
    "MSI_PLESSEY\0FIM\0LOGMARS\0PHARMA\0PZN\0"
    "PHARMA_TWO\0PDF417\0PDF417TRUNC\0MAXICODE\0"
    "QRCODE\0CODE128B\0AUSPOST\0AUSREPLY\0"
    "AUSROUTE\0AUSREDIRECT\0ISBNX\0RM4SCC\0"
    "DATAMATRIX\0ITF14\0CODABLOCKF\0NVE18\0"
    "KOREAPOST\0RSS14STACK\0RSS14STACK_OMNI\0"
    "RSS_EXPSTACK\0PLANET\0MICROPDF417\0ONECODE\0"
    "PLESSEY\0KIX\0AZTEC\0DAFT\0ITALYPOST\0DPD\0"
    "MICROQR\0TELEPEN_NUM\0CODE32\0EANX_CC\0"
    "EAN128_CC\0RSS14_CC\0RSS_LTD_CC\0RSS_EXP_CC\0"
    "UPCA_CC\0UPCE_CC\0RSS14STACK_CC\0"
    "RSS14_OMNI_CC\0RSS_EXPSTACK_CC\0FrameTypes\0"
    "NO_BORDER\0BIND\0BOX"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BarCode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   22, // properties
       2,   25, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095103,

 // enums: name, flags, count, data
       4, 0x0,   71,   33,
      76, 0x0,    3,  175,

 // enum data: key, value
       5, uint(BarCode::CODE11),
       6, uint(BarCode::C25MATRIX),
       7, uint(BarCode::C25INTER),
       8, uint(BarCode::C25IATA),
       9, uint(BarCode::C25LOGIC),
      10, uint(BarCode::C25IND),
      11, uint(BarCode::CODE39),
      12, uint(BarCode::EXCODE39),
      13, uint(BarCode::EANX),
      14, uint(BarCode::EAN128),
      15, uint(BarCode::CODABAR),
      16, uint(BarCode::CODE128),
      17, uint(BarCode::DPLEIT),
      18, uint(BarCode::DPIDENT),
      19, uint(BarCode::CODE16K),
      20, uint(BarCode::CODE93),
      21, uint(BarCode::FLAT),
      22, uint(BarCode::RSS14),
      23, uint(BarCode::RSS_LTD),
      24, uint(BarCode::RSS_EXP),
      25, uint(BarCode::TELEPEN),
      26, uint(BarCode::UPCA),
      27, uint(BarCode::UPCE),
      28, uint(BarCode::POSTNET),
      29, uint(BarCode::MSI_PLESSEY),
      30, uint(BarCode::FIM),
      31, uint(BarCode::LOGMARS),
      32, uint(BarCode::PHARMA),
      33, uint(BarCode::PZN),
      34, uint(BarCode::PHARMA_TWO),
      35, uint(BarCode::PDF417),
      36, uint(BarCode::PDF417TRUNC),
      37, uint(BarCode::MAXICODE),
      38, uint(BarCode::QRCODE),
      39, uint(BarCode::CODE128B),
      40, uint(BarCode::AUSPOST),
      41, uint(BarCode::AUSREPLY),
      42, uint(BarCode::AUSROUTE),
      43, uint(BarCode::AUSREDIRECT),
      44, uint(BarCode::ISBNX),
      45, uint(BarCode::RM4SCC),
      46, uint(BarCode::DATAMATRIX),
      47, uint(BarCode::ITF14),
      48, uint(BarCode::CODABLOCKF),
      49, uint(BarCode::NVE18),
      50, uint(BarCode::KOREAPOST),
      51, uint(BarCode::RSS14STACK),
      52, uint(BarCode::RSS14STACK_OMNI),
      53, uint(BarCode::RSS_EXPSTACK),
      54, uint(BarCode::PLANET),
      55, uint(BarCode::MICROPDF417),
      56, uint(BarCode::ONECODE),
      57, uint(BarCode::PLESSEY),
      58, uint(BarCode::KIX),
      59, uint(BarCode::AZTEC),
      60, uint(BarCode::DAFT),
      61, uint(BarCode::ITALYPOST),
      62, uint(BarCode::DPD),
      63, uint(BarCode::MICROQR),
      64, uint(BarCode::TELEPEN_NUM),
      65, uint(BarCode::CODE32),
      66, uint(BarCode::EANX_CC),
      67, uint(BarCode::EAN128_CC),
      68, uint(BarCode::RSS14_CC),
      69, uint(BarCode::RSS_LTD_CC),
      70, uint(BarCode::RSS_EXP_CC),
      71, uint(BarCode::UPCA_CC),
      72, uint(BarCode::UPCE_CC),
      73, uint(BarCode::RSS14STACK_CC),
      74, uint(BarCode::RSS14_OMNI_CC),
      75, uint(BarCode::RSS_EXPSTACK_CC),
      77, uint(BarCode::NO_BORDER),
      78, uint(BarCode::BIND),
      79, uint(BarCode::BOX),

       0        // eod
};

void BarCode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BarCode *_t = static_cast<BarCode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setValue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        BarCode *_t = static_cast<BarCode *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getValue(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        BarCode *_t = static_cast<BarCode *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject BarCode::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BarCode.data,
      qt_meta_data_BarCode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BarCode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BarCode::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BarCode.stringdata0))
        return static_cast<void*>(const_cast< BarCode*>(this));
    return QWidget::qt_metacast(_clname);
}

int BarCode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
