/****************************************************************************
** Meta object code from reading C++ file 'stoppoint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "armProc/stoppoint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stoppoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StoppointSet_t {
    QByteArrayData data[14];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StoppointSet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StoppointSet_t qt_meta_stringdata_StoppointSet = {
    {
QT_MOC_LITERAL(0, 0, 12), // "StoppointSet"
QT_MOC_LITERAL(1, 13, 23), // "SignalStoppointInserted"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 22), // "SignalStoppointRemoved"
QT_MOC_LITERAL(4, 61, 6), // "size_t"
QT_MOC_LITERAL(5, 68, 5), // "index"
QT_MOC_LITERAL(6, 74, 20), // "SignalEnabledChanged"
QT_MOC_LITERAL(7, 95, 9), // "SignalHit"
QT_MOC_LITERAL(8, 105, 16), // "const Stoppoint*"
QT_MOC_LITERAL(9, 122, 2), // "sp"
QT_MOC_LITERAL(10, 125, 4), // "Word"
QT_MOC_LITERAL(11, 130, 7), // "address"
QT_MOC_LITERAL(12, 138, 16), // "const processor*"
QT_MOC_LITERAL(13, 155, 4) // "proc"

    },
    "StoppointSet\0SignalStoppointInserted\0"
    "\0SignalStoppointRemoved\0size_t\0index\0"
    "SignalEnabledChanged\0SignalHit\0"
    "const Stoppoint*\0sp\0Word\0address\0"
    "const processor*\0proc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StoppointSet[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,
       6,    1,   38,    2, 0x06 /* Public */,
       7,    4,   41,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 8, 0x80000000 | 10, 0x80000000 | 12,    5,    9,   11,   13,

       0        // eod
};

void StoppointSet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StoppointSet *_t = static_cast<StoppointSet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalStoppointInserted(); break;
        case 1: _t->SignalStoppointRemoved((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 2: _t->SignalEnabledChanged((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 3: _t->SignalHit((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< const Stoppoint*(*)>(_a[2])),(*reinterpret_cast< Word(*)>(_a[3])),(*reinterpret_cast< const processor*(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (StoppointSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StoppointSet::SignalStoppointInserted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (StoppointSet::*_t)(size_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StoppointSet::SignalStoppointRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (StoppointSet::*_t)(size_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StoppointSet::SignalEnabledChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (StoppointSet::*_t)(size_t , const Stoppoint * , Word , const processor * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StoppointSet::SignalHit)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject StoppointSet::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StoppointSet.data,
      qt_meta_data_StoppointSet,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *StoppointSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StoppointSet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StoppointSet.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StoppointSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void StoppointSet::SignalStoppointInserted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void StoppointSet::SignalStoppointRemoved(size_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StoppointSet::SignalEnabledChanged(size_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StoppointSet::SignalHit(size_t _t1, const Stoppoint * _t2, Word _t3, const processor * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
