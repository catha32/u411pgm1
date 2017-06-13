/****************************************************************************
** Meta object code from reading C++ file 'qcacounter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcacounter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcacounter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QCACounter_t {
    QByteArrayData data[10];
    char stringdata[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCACounter_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCACounter_t qt_meta_stringdata_QCACounter = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 17),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 11),
QT_MOC_LITERAL(4, 42, 13),
QT_MOC_LITERAL(5, 56, 2),
QT_MOC_LITERAL(6, 59, 14),
QT_MOC_LITERAL(7, 74, 14),
QT_MOC_LITERAL(8, 89, 10),
QT_MOC_LITERAL(9, 100, 22)
    },
    "QCACounter\0updateControlInfo\0\0displayOnly\0"
    "doAlarmColors\0pv\0alarmSensitive\0"
    "blankOnInvalid\0hasToolTip\0"
    "controlInfoFromChannel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCACounter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       5,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    1,   30,    2, 0x0a /* Public */,
       4,    0,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::Bool, 0x00095103,
       7, QMetaType::Bool, 0x00095103,
       8, QMetaType::Bool, 0x00095103,
       9, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QCACounter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCACounter *_t = static_cast<QCACounter *>(_o);
        switch (_id) {
        case 0: _t->updateControlInfo(); break;
        case 1: _t->displayOnly((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->doAlarmColors(); break;
        default: ;
        }
    }
}

const QMetaObject QCACounter::staticMetaObject = {
    { &QwtCounter::staticMetaObject, qt_meta_stringdata_QCACounter.data,
      qt_meta_data_QCACounter,  qt_static_metacall, 0, 0}
};


const QMetaObject *QCACounter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCACounter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCACounter.stringdata))
        return static_cast<void*>(const_cast< QCACounter*>(this));
    return QwtCounter::qt_metacast(_clname);
}

int QCACounter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtCounter::qt_metacall(_c, _id, _a);
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
        case 4: *reinterpret_cast< bool*>(_v) = controlInfoFromChannel(); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPv(*reinterpret_cast< QString*>(_v)); break;
        case 1: setAlarmSensitive(*reinterpret_cast< bool*>(_v)); break;
        case 2: setBlankOnInvalid(*reinterpret_cast< bool*>(_v)); break;
        case 3: setHasToolTip(*reinterpret_cast< bool*>(_v)); break;
        case 4: setControlInfoFromChannel(*reinterpret_cast< bool*>(_v)); break;
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
