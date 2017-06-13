/****************************************************************************
** Meta object code from reading C++ file 'qcaplot.h'
**
** Created: Wed Oct 29 00:17:28 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcaplot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcaplot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QCAPlot[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       6,   25, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      29,   23,    8,    8, 0x09,
      49,    8,    8,    8, 0x09,

 // properties: name, type, flags
      73,   65, 0x0a095103,
      77,   65, 0x0a095103,
      86,   81, 0x01095103,
     101,   81, 0x01095103,
     116,   81, 0x01095103,
     127,   81, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QCAPlot[] = {
    "QCAPlot\0\0clearPoints()\0value\0"
    "doAddPoints(double)\0doAlarmColors()\0"
    "QString\0pvX\0pvY\0bool\0alarmSensitive\0"
    "blankOnInvalid\0hasToolTip\0"
    "controlInfoFromChannel\0"
};

const QMetaObject QCAPlot::staticMetaObject = {
    { &QwtPlot::staticMetaObject, qt_meta_stringdata_QCAPlot,
      qt_meta_data_QCAPlot, 0 }
};

const QMetaObject *QCAPlot::metaObject() const
{
    return &staticMetaObject;
}

void *QCAPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCAPlot))
	return static_cast<void*>(const_cast< QCAPlot*>(this));
    return QwtPlot::qt_metacast(_clname);
}

int QCAPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtPlot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: clearPoints(); break;
        case 1: doAddPoints((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: doAlarmColors(); break;
        }
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = pvX(); break;
        case 1: *reinterpret_cast< QString*>(_v) = pvY(); break;
        case 2: *reinterpret_cast< bool*>(_v) = alarmSensitive(); break;
        case 3: *reinterpret_cast< bool*>(_v) = blankOnInvalid(); break;
        case 4: *reinterpret_cast< bool*>(_v) = hasToolTip(); break;
        case 5: *reinterpret_cast< bool*>(_v) = controlInfoFromChannel(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPvX(*reinterpret_cast< QString*>(_v)); break;
        case 1: setPvY(*reinterpret_cast< QString*>(_v)); break;
        case 2: setAlarmSensitive(*reinterpret_cast< bool*>(_v)); break;
        case 3: setBlankOnInvalid(*reinterpret_cast< bool*>(_v)); break;
        case 4: setHasToolTip(*reinterpret_cast< bool*>(_v)); break;
        case 5: setControlInfoFromChannel(*reinterpret_cast< bool*>(_v)); break;
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
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
