/****************************************************************************
** Meta object code from reading C++ file 'machine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "armProc/machine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'machine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_machine_t {
    QByteArrayData data[27];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_machine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_machine_t qt_meta_stringdata_machine = {
    {
QT_MOC_LITERAL(0, 0, 7), // "machine"
QT_MOC_LITERAL(1, 8, 9), // "dataReady"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 5), // "Word*"
QT_MOC_LITERAL(4, 25, 3), // "cpu"
QT_MOC_LITERAL(5, 29, 4), // "cp15"
QT_MOC_LITERAL(6, 34, 8), // "pipeline"
QT_MOC_LITERAL(7, 43, 4), // "Word"
QT_MOC_LITERAL(8, 48, 4), // "todH"
QT_MOC_LITERAL(9, 53, 4), // "todL"
QT_MOC_LITERAL(10, 58, 5), // "timer"
QT_MOC_LITERAL(11, 64, 8), // "mnemonic"
QT_MOC_LITERAL(12, 73, 12), // "updateStatus"
QT_MOC_LITERAL(13, 86, 5), // "state"
QT_MOC_LITERAL(14, 92, 10), // "tlbChanged"
QT_MOC_LITERAL(15, 103, 5), // "index"
QT_MOC_LITERAL(16, 109, 19), // "executionTerminated"
QT_MOC_LITERAL(17, 129, 8), // "exitCode"
QT_MOC_LITERAL(18, 138, 4), // "step"
QT_MOC_LITERAL(19, 143, 11), // "refreshData"
QT_MOC_LITERAL(20, 155, 5), // "force"
QT_MOC_LITERAL(21, 161, 10), // "clearCause"
QT_MOC_LITERAL(22, 172, 3), // "run"
QT_MOC_LITERAL(23, 176, 5), // "reset"
QT_MOC_LITERAL(24, 182, 8), // "toggleBP"
QT_MOC_LITERAL(25, 191, 6), // "status"
QT_MOC_LITERAL(26, 198, 14) // "toggleTLBPause"

    },
    "machine\0dataReady\0\0Word*\0cpu\0cp15\0"
    "pipeline\0Word\0todH\0todL\0timer\0mnemonic\0"
    "updateStatus\0state\0tlbChanged\0index\0"
    "executionTerminated\0exitCode\0step\0"
    "refreshData\0force\0clearCause\0run\0reset\0"
    "toggleBP\0status\0toggleTLBPause"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_machine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    7,   74,    2, 0x06 /* Public */,
      12,    1,   89,    2, 0x06 /* Public */,
      14,    1,   92,    2, 0x06 /* Public */,
      16,    1,   95,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    0,   98,    2, 0x0a /* Public */,
      19,    0,   99,    2, 0x0a /* Public */,
      19,    1,  100,    2, 0x0a /* Public */,
      21,    0,  103,    2, 0x0a /* Public */,
      22,    0,  104,    2, 0x08 /* Private */,
      23,    0,  105,    2, 0x08 /* Private */,
      24,    1,  106,    2, 0x08 /* Private */,
      26,    1,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 7, 0x80000000 | 7, 0x80000000 | 7, QMetaType::QString,    4,    5,    6,    8,    9,   10,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::UInt,   15,
    QMetaType::Void, QMetaType::Int,   17,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,

       0        // eod
};

void machine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        machine *_t = static_cast<machine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataReady((*reinterpret_cast< Word*(*)>(_a[1])),(*reinterpret_cast< Word*(*)>(_a[2])),(*reinterpret_cast< Word*(*)>(_a[3])),(*reinterpret_cast< Word(*)>(_a[4])),(*reinterpret_cast< Word(*)>(_a[5])),(*reinterpret_cast< Word(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7]))); break;
        case 1: _t->updateStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->tlbChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: _t->executionTerminated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->step(); break;
        case 5: _t->refreshData(); break;
        case 6: _t->refreshData((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->clearCause(); break;
        case 8: _t->run(); break;
        case 9: _t->reset(); break;
        case 10: _t->toggleBP((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->toggleTLBPause((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (machine::*_t)(Word * , Word * , Word * , Word , Word , Word , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&machine::dataReady)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (machine::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&machine::updateStatus)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (machine::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&machine::tlbChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (machine::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&machine::executionTerminated)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject machine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_machine.data,
      qt_meta_data_machine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *machine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *machine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_machine.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int machine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void machine::dataReady(Word * _t1, Word * _t2, Word * _t3, Word _t4, Word _t5, Word _t6, QString _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void machine::updateStatus(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void machine::tlbChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void machine::executionTerminated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
