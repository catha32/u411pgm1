/****************************************************************************
** Meta object code from reading C++ file 'pinholes6.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pinholes6.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pinholes6.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_pinholes6_t {
    QByteArrayData data[5];
    char stringdata[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pinholes6_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pinholes6_t qt_meta_stringdata_pinholes6 = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 4),
QT_MOC_LITERAL(2, 15, 0),
QT_MOC_LITERAL(3, 16, 21),
QT_MOC_LITERAL(4, 38, 23)
    },
    "pinholes6\0init\0\0on_pushButton_clicked\0"
    "on_pushButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pinholes6[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pinholes6::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pinholes6 *_t = static_cast<pinholes6 *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->init();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject pinholes6::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pinholes6.data,
      qt_meta_data_pinholes6,  qt_static_metacall, 0, 0}
};


const QMetaObject *pinholes6::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pinholes6::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pinholes6.stringdata))
        return static_cast<void*>(const_cast< pinholes6*>(this));
    return QWidget::qt_metacast(_clname);
}

int pinholes6::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_END_MOC_NAMESPACE
