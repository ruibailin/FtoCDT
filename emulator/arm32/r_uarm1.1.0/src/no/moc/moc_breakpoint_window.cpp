/****************************************************************************
** Meta object code from reading C++ file 'breakpoint_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qarm/breakpoint_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'breakpoint_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_breakpoint_window_t {
    QByteArrayData data[9];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_breakpoint_window_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_breakpoint_window_t qt_meta_stringdata_breakpoint_window = {
    {
QT_MOC_LITERAL(0, 0, 17), // "breakpoint_window"
QT_MOC_LITERAL(1, 18, 6), // "hiding"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "reset"
QT_MOC_LITERAL(4, 32, 13), // "updateContent"
QT_MOC_LITERAL(5, 46, 11), // "symtabReady"
QT_MOC_LITERAL(6, 58, 13), // "symtabMissing"
QT_MOC_LITERAL(7, 72, 18), // "onRemoveBreakpoint"
QT_MOC_LITERAL(8, 91, 15) // "onAddBreakpoint"

    },
    "breakpoint_window\0hiding\0\0reset\0"
    "updateContent\0symtabReady\0symtabMissing\0"
    "onRemoveBreakpoint\0onAddBreakpoint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_breakpoint_window[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void breakpoint_window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        breakpoint_window *_t = static_cast<breakpoint_window *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hiding(); break;
        case 1: _t->reset(); break;
        case 2: _t->updateContent(); break;
        case 3: _t->symtabReady(); break;
        case 4: _t->symtabMissing(); break;
        case 5: _t->onRemoveBreakpoint(); break;
        case 6: _t->onAddBreakpoint(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (breakpoint_window::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&breakpoint_window::hiding)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject breakpoint_window::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_breakpoint_window.data,
      qt_meta_data_breakpoint_window,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *breakpoint_window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *breakpoint_window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_breakpoint_window.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int breakpoint_window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void breakpoint_window::hiding()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
