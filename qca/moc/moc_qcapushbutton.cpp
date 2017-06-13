/****************************************************************************
** Meta object code from reading C++ file 'qcapushbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcapushbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcapushbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QCAPushButton_t {
    QByteArrayData data[10];
    char stringdata[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCAPushButton_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCAPushButton_t qt_meta_stringdata_QCAPushButton = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 13),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 9),
QT_MOC_LITERAL(4, 39, 2),
QT_MOC_LITERAL(5, 42, 9),
QT_MOC_LITERAL(6, 52, 14),
QT_MOC_LITERAL(7, 67, 14),
QT_MOC_LITERAL(8, 82, 10),
QT_MOC_LITERAL(9, 93, 22)
    },
    "QCAPushButton\0doAlarmColors\0\0sendValue\0"
    "pv\0pushValue\0alarmSensitive\0blankOnInvalid\0"
    "hasToolTip\0controlInfoFromChannel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCAPushButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       6,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QString, 0x00095103,
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::Bool, 0x00095103,
       7, QMetaType::Bool, 0x00095103,
       8, QMetaType::Bool, 0x00095103,
       9, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QCAPushButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCAPushButton *_t = static_cast<QCAPushButton *>(_o);
        switch (_id) {
        case 0: _t->doAlarmColors(); break;
        case 1: _t->sendValue(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QCAPushButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_QCAPushButton.data,
      qt_meta_data_QCAPushButton,  qt_static_metacall, 0, 0}
};


const QMetaObject *QCAPushButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCAPushButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCAPushButton.stringdata))
        return static_cast<void*>(const_cast< QCAPushButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int QCAPushButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
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
        case 1: *reinterpret_cast< QString*>(_v) = pushValue(); break;
        case 2: *reinterpret_cast< bool*>(_v) = alarmSensitive(); break;
        case 3: *reinterpret_cast< bool*>(_v) = blankOnInvalid(); break;
        case 4: *reinterpret_cast< bool*>(_v) = hasToolTip(); break;
        case 5: *reinterpret_cast< bool*>(_v) = controlInfoFromChannel(); break;
        default: break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPv(*reinterpret_cast< QString*>(_v)); break;
        case 1: setPushValue(*reinterpret_cast< QString*>(_v)); break;
        case 2: setAlarmSensitive(*reinterpret_cast< bool*>(_v)); break;
        case 3: setBlankOnInvalid(*reinterpret_cast< bool*>(_v)); break;
        case 4: setHasToolTip(*reinterpret_cast< bool*>(_v)); break;
        case 5: setControlInfoFromChannel(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
