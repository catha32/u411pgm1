/****************************************************************************
** Meta object code from reading C++ file 'qcalcdnumber.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcalcdnumber.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcalcdnumber.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QCALCDNumber_t {
    QByteArrayData data[11];
    char stringdata[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCALCDNumber_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCALCDNumber_t qt_meta_stringdata_QCALCDNumber = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 10),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 12),
QT_MOC_LITERAL(4, 38, 5),
QT_MOC_LITERAL(5, 44, 13),
QT_MOC_LITERAL(6, 58, 17),
QT_MOC_LITERAL(7, 76, 2),
QT_MOC_LITERAL(8, 79, 14),
QT_MOC_LITERAL(9, 94, 14),
QT_MOC_LITERAL(10, 109, 10)
    },
    "QCALCDNumber\0paintEvent\0\0QPaintEvent*\0"
    "event\0doAlarmColors\0updateControlInfo\0"
    "pv\0alarmSensitive\0blankOnInvalid\0"
    "hasToolTip"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCALCDNumber[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       4,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       5,    0,   32,    2, 0x0a /* Public */,
       6,    0,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00095103,
       8, QMetaType::Bool, 0x00095103,
       9, QMetaType::Bool, 0x00095103,
      10, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QCALCDNumber::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCALCDNumber *_t = static_cast<QCALCDNumber *>(_o);
        switch (_id) {
        case 0: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 1: _t->doAlarmColors(); break;
        case 2: _t->updateControlInfo(); break;
        default: ;
        }
    }
}

const QMetaObject QCALCDNumber::staticMetaObject = {
    { &QLCDNumber::staticMetaObject, qt_meta_stringdata_QCALCDNumber.data,
      qt_meta_data_QCALCDNumber,  qt_static_metacall, 0, 0}
};


const QMetaObject *QCALCDNumber::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCALCDNumber::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCALCDNumber.stringdata))
        return static_cast<void*>(const_cast< QCALCDNumber*>(this));
    return QLCDNumber::qt_metacast(_clname);
}

int QCALCDNumber::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLCDNumber::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QString*>(_v) = pv(); break;
        case 1: *reinterpret_cast< bool*>(_v) = alarmSensitive(); break;
        case 2: *reinterpret_cast< bool*>(_v) = blankOnInvalid(); break;
        case 3: *reinterpret_cast< bool*>(_v) = hasToolTip(); break;
        default: break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPv(*reinterpret_cast< QString*>(_v)); break;
        case 1: setAlarmSensitive(*reinterpret_cast< bool*>(_v)); break;
        case 2: setBlankOnInvalid(*reinterpret_cast< bool*>(_v)); break;
        case 3: setHasToolTip(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
