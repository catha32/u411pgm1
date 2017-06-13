/****************************************************************************
** Meta object code from reading C++ file 'smu1_ida.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "smu1_ida.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smu1_ida.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_smu1_ida_t {
    QByteArrayData data[8];
    char stringdata[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_smu1_ida_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_smu1_ida_t qt_meta_stringdata_smu1_ida = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 4),
QT_MOC_LITERAL(2, 14, 0),
QT_MOC_LITERAL(3, 15, 24),
QT_MOC_LITERAL(4, 40, 24),
QT_MOC_LITERAL(5, 65, 24),
QT_MOC_LITERAL(6, 90, 24),
QT_MOC_LITERAL(7, 115, 24)
    },
    "smu1_ida\0init\0\0on_pushButton_16_clicked\0"
    "on_pushButton_17_clicked\0"
    "on_pushButton_18_clicked\0"
    "on_pushButton_19_clicked\0"
    "on_pushButton_20_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_smu1_ida[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void smu1_ida::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        smu1_ida *_t = static_cast<smu1_ida *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->init();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->on_pushButton_16_clicked(); break;
        case 2: _t->on_pushButton_17_clicked(); break;
        case 3: _t->on_pushButton_18_clicked(); break;
        case 4: _t->on_pushButton_19_clicked(); break;
        case 5: _t->on_pushButton_20_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject smu1_ida::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_smu1_ida.data,
      qt_meta_data_smu1_ida,  qt_static_metacall, 0, 0}
};


const QMetaObject *smu1_ida::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *smu1_ida::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_smu1_ida.stringdata))
        return static_cast<void*>(const_cast< smu1_ida*>(this));
    return QDialog::qt_metacast(_clname);
}

int smu1_ida::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
