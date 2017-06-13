/****************************************************************************
** Meta object code from reading C++ file 'qcaled.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcaled.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcaled.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QCALed_t {
    QByteArrayData data[13];
    char stringdata[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCALed_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCALed_t qt_meta_stringdata_QCALed = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 10),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 12),
QT_MOC_LITERAL(4, 32, 5),
QT_MOC_LITERAL(5, 38, 7),
QT_MOC_LITERAL(6, 46, 5),
QT_MOC_LITERAL(7, 52, 2),
QT_MOC_LITERAL(8, 55, 14),
QT_MOC_LITERAL(9, 70, 4),
QT_MOC_LITERAL(10, 75, 7),
QT_MOC_LITERAL(11, 83, 9),
QT_MOC_LITERAL(12, 93, 8)
    },
    "QCALed\0paintEvent\0\0QPaintEvent*\0event\0"
    "display\0value\0pv\0blankOnInvalid\0mode\0"
    "LEDMode\0OffIfZero\0OnIfZero"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCALed[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   30, // properties
       1,   39, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       5,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00095103,
       8, QMetaType::Bool, 0x00095103,
       9, 0x80000000 | 10, 0x0009510b,

 // enums: name, flags, count, data
      10, 0x0,    2,   43,

 // enum data: key, value
      11, uint(QCALed::OffIfZero),
      12, uint(QCALed::OnIfZero),

       0        // eod
};

void QCALed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCALed *_t = static_cast<QCALed *>(_o);
        switch (_id) {
        case 0: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 1: _t->display((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QCALed::staticMetaObject = {
    { &KLed::staticMetaObject, qt_meta_stringdata_QCALed.data,
      qt_meta_data_QCALed,  qt_static_metacall, 0, 0}
};


const QMetaObject *QCALed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCALed::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCALed.stringdata))
        return static_cast<void*>(const_cast< QCALed*>(this));
    return KLed::qt_metacast(_clname);
}

int QCALed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KLed::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = pv(); break;
        case 1: *reinterpret_cast< bool*>(_v) = blankOnInvalid(); break;
        case 2: *reinterpret_cast< LEDMode*>(_v) = mode(); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPv(*reinterpret_cast< QString*>(_v)); break;
        case 1: setBlankOnInvalid(*reinterpret_cast< bool*>(_v)); break;
        case 2: setMode(*reinterpret_cast< LEDMode*>(_v)); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
