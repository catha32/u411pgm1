/****************************************************************************
** Meta object code from reading C++ file 'kled.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../kled.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kled.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KLed_t {
    QByteArrayData data[20];
    char stringdata[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KLed_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KLed_t qt_meta_stringdata_KLed = {
    {
QT_MOC_LITERAL(0, 0, 4),
QT_MOC_LITERAL(1, 5, 6),
QT_MOC_LITERAL(2, 12, 0),
QT_MOC_LITERAL(3, 13, 2),
QT_MOC_LITERAL(4, 16, 3),
QT_MOC_LITERAL(5, 20, 5),
QT_MOC_LITERAL(6, 26, 5),
QT_MOC_LITERAL(7, 32, 5),
QT_MOC_LITERAL(8, 38, 5),
QT_MOC_LITERAL(9, 44, 4),
QT_MOC_LITERAL(10, 49, 4),
QT_MOC_LITERAL(11, 54, 5),
QT_MOC_LITERAL(12, 60, 10),
QT_MOC_LITERAL(13, 71, 3),
QT_MOC_LITERAL(14, 75, 2),
QT_MOC_LITERAL(15, 78, 11),
QT_MOC_LITERAL(16, 90, 8),
QT_MOC_LITERAL(17, 99, 4),
QT_MOC_LITERAL(18, 104, 6),
QT_MOC_LITERAL(19, 111, 6)
    },
    "KLed\0toggle\0\0on\0off\0state\0State\0shape\0"
    "Shape\0look\0Look\0color\0darkFactor\0Off\0"
    "On\0Rectangular\0Circular\0Flat\0Raised\0"
    "Sunken"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KLed[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       5,   32, // properties
       3,   47, // enums/sets
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
       5, 0x80000000 | 6, 0x0009510b,
       7, 0x80000000 | 8, 0x0009510b,
       9, 0x80000000 | 10, 0x0009510b,
      11, QMetaType::QColor, 0x00095103,
      12, QMetaType::Int, 0x00095103,

 // enums: name, flags, count, data
       6, 0x0,    2,   59,
       8, 0x0,    2,   63,
      10, 0x0,    3,   67,

 // enum data: key, value
      13, uint(KLed::Off),
      14, uint(KLed::On),
      15, uint(KLed::Rectangular),
      16, uint(KLed::Circular),
      17, uint(KLed::Flat),
      18, uint(KLed::Raised),
      19, uint(KLed::Sunken),

       0        // eod
};

void KLed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KLed *_t = static_cast<KLed *>(_o);
        switch (_id) {
        case 0: _t->toggle(); break;
        case 1: _t->on(); break;
        case 2: _t->off(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject KLed::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_KLed.data,
      qt_meta_data_KLed,  qt_static_metacall, 0, 0}
};


const QMetaObject *KLed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KLed::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_KLed.stringdata))
        return static_cast<void*>(const_cast< KLed*>(this));
    return QWidget::qt_metacast(_clname);
}

int KLed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< State*>(_v) = state(); break;
        case 1: *reinterpret_cast< Shape*>(_v) = shape(); break;
        case 2: *reinterpret_cast< Look*>(_v) = look(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = color(); break;
        case 4: *reinterpret_cast< int*>(_v) = darkFactor(); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setState(*reinterpret_cast< State*>(_v)); break;
        case 1: setShape(*reinterpret_cast< Shape*>(_v)); break;
        case 2: setLook(*reinterpret_cast< Look*>(_v)); break;
        case 3: setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: setDarkFactor(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
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
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
