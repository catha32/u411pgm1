/****************************************************************************
** Meta object code from reading C++ file 'qcachannel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcachannel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcachannel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QCAChannel_t {
    QByteArrayData data[11];
    char stringdata[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCAChannel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCAChannel_t qt_meta_stringdata_QCAChannel = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 12),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 5),
QT_MOC_LITERAL(4, 31, 18),
QT_MOC_LITERAL(5, 50, 15),
QT_MOC_LITERAL(6, 66, 3),
QT_MOC_LITERAL(7, 70, 9),
QT_MOC_LITERAL(8, 80, 9),
QT_MOC_LITERAL(9, 90, 17),
QT_MOC_LITERAL(10, 108, 17)
    },
    "QCAChannel\0valueChanged\0\0value\0"
    "controlInfoChanged\0severityChanged\0"
    "put\0reconnect\0configure\0channel2Clipboard\0"
    "channel2Selection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCAChannel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       1,    1,   77,    2, 0x06 /* Public */,
       1,    1,   80,    2, 0x06 /* Public */,
       4,    0,   83,    2, 0x06 /* Public */,
       5,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   85,    2, 0x0a /* Public */,
       6,    1,   88,    2, 0x0a /* Public */,
       6,    1,   91,    2, 0x0a /* Public */,
       7,    0,   94,    2, 0x0a /* Public */,
       8,    0,   95,    2, 0x0a /* Public */,
       9,    0,   96,    2, 0x09 /* Protected */,
      10,    0,   97,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QCAChannel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCAChannel *_t = static_cast<QCAChannel *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->controlInfoChanged(); break;
        case 4: _t->severityChanged(); break;
        case 5: _t->put((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->put((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->put((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->reconnect(); break;
        case 9: _t->configure(); break;
        case 10: _t->channel2Clipboard(); break;
        case 11: _t->channel2Selection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QCAChannel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCAChannel::valueChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QCAChannel::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCAChannel::valueChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QCAChannel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCAChannel::valueChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QCAChannel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCAChannel::controlInfoChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QCAChannel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCAChannel::severityChanged)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject QCAChannel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QCAChannel.data,
      qt_meta_data_QCAChannel,  qt_static_metacall, 0, 0}
};


const QMetaObject *QCAChannel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCAChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCAChannel.stringdata))
        return static_cast<void*>(const_cast< QCAChannel*>(this));
    return QObject::qt_metacast(_clname);
}

int QCAChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QCAChannel::valueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCAChannel::valueChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCAChannel::valueChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCAChannel::controlInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QCAChannel::severityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
