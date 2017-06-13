/****************************************************************************
** Meta object code from reading C++ file 'qcaaxis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcaaxis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcaaxis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QCAAxis_t {
    QByteArrayData data[7];
    char stringdata[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCAAxis_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCAAxis_t qt_meta_stringdata_QCAAxis = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 11),
QT_MOC_LITERAL(2, 20, 10),
QT_MOC_LITERAL(3, 31, 5),
QT_MOC_LITERAL(4, 37, 2),
QT_MOC_LITERAL(5, 40, 14),
QT_MOC_LITERAL(6, 55, 10)
    },
    "QCAAxis\0description\0pvReadback\0units\0"
    "pv\0blankOnInvalid\0hasToolTip"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCAAxis[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095103,
       2, QMetaType::QString, 0x00095103,
       3, QMetaType::QString, 0x00095103,
       4, QMetaType::QString, 0x00095103,
       5, QMetaType::Bool, 0x00095103,
       6, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QCAAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QCAAxis::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QCAAxis.data,
      qt_meta_data_QCAAxis,  qt_static_metacall, 0, 0}
};


const QMetaObject *QCAAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCAAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCAAxis.stringdata))
        return static_cast<void*>(const_cast< QCAAxis*>(this));
    if (!strcmp(_clname, "Ui::QCAAxisBase"))
        return static_cast< Ui::QCAAxisBase*>(const_cast< QCAAxis*>(this));
    return QWidget::qt_metacast(_clname);
}

int QCAAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = description(); break;
        case 1: *reinterpret_cast< QString*>(_v) = pvReadback(); break;
        case 2: *reinterpret_cast< QString*>(_v) = units(); break;
        case 3: *reinterpret_cast< QString*>(_v) = pv(); break;
        case 4: *reinterpret_cast< bool*>(_v) = blankOnInvalid(); break;
        case 5: *reinterpret_cast< bool*>(_v) = hasToolTip(); break;
        default: break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setDescription(*reinterpret_cast< QString*>(_v)); break;
        case 1: setPvReadback(*reinterpret_cast< QString*>(_v)); break;
        case 2: setUnits(*reinterpret_cast< QString*>(_v)); break;
        case 3: setPv(*reinterpret_cast< QString*>(_v)); break;
        case 4: setBlankOnInvalid(*reinterpret_cast< bool*>(_v)); break;
        case 5: setHasToolTip(*reinterpret_cast< bool*>(_v)); break;
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
