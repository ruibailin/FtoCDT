/****************************************************************************
** Meta object code from reading C++ file 'debug_session.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "services/debug_session.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'debug_session.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DebugSession_t {
    QByteArrayData data[7];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebugSession_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebugSession_t qt_meta_stringdata_DebugSession = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DebugSession"
QT_MOC_LITERAL(1, 13, 11), // "stabUpdated"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 10), // "MachineRan"
QT_MOC_LITERAL(4, 37, 16), // "stabUnavavilable"
QT_MOC_LITERAL(5, 54, 16), // "resetSymbolTable"
QT_MOC_LITERAL(6, 71, 22) // "onMachineConfigChanged"

    },
    "DebugSession\0stabUpdated\0\0MachineRan\0"
    "stabUnavavilable\0resetSymbolTable\0"
    "onMachineConfigChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebugSession[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DebugSession::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DebugSession *_t = static_cast<DebugSession *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stabUpdated(); break;
        case 1: _t->MachineRan(); break;
        case 2: _t->stabUnavavilable(); break;
        case 3: _t->resetSymbolTable(); break;
        case 4: _t->onMachineConfigChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DebugSession::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugSession::stabUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DebugSession::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugSession::MachineRan)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DebugSession::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugSession::stabUnavavilable)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject DebugSession::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DebugSession.data,
      qt_meta_data_DebugSession,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DebugSession::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebugSession::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebugSession.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DebugSession::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void DebugSession::stabUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DebugSession::MachineRan()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DebugSession::stabUnavavilable()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
