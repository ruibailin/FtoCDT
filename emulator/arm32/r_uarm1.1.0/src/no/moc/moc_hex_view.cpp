/****************************************************************************
** Meta object code from reading C++ file 'hex_view.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qarm/hex_view.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hex_view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HexView_t {
    QByteArrayData data[14];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HexView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HexView_t qt_meta_stringdata_HexView = {
    {
QT_MOC_LITERAL(0, 0, 7), // "HexView"
QT_MOC_LITERAL(1, 8, 13), // "doubleClicked"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "Word"
QT_MOC_LITERAL(4, 28, 4), // "addr"
QT_MOC_LITERAL(5, 33, 7), // "Refresh"
QT_MOC_LITERAL(6, 41, 6), // "symbol"
QT_MOC_LITERAL(7, 48, 12), // "MoveInterval"
QT_MOC_LITERAL(8, 61, 5), // "start"
QT_MOC_LITERAL(9, 67, 3), // "end"
QT_MOC_LITERAL(10, 71, 12), // "updateMargin"
QT_MOC_LITERAL(11, 84, 4), // "rect"
QT_MOC_LITERAL(12, 89, 2), // "dy"
QT_MOC_LITERAL(13, 92, 23) // "onCursorPositionChanged"

    },
    "HexView\0doubleClicked\0\0Word\0addr\0"
    "Refresh\0symbol\0MoveInterval\0start\0end\0"
    "updateMargin\0rect\0dy\0onCursorPositionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HexView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   47,    2, 0x0a /* Public */,
       5,    0,   50,    2, 0x0a /* Public */,
       7,    2,   51,    2, 0x0a /* Public */,
      10,    2,   56,    2, 0x08 /* Private */,
      13,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    8,    9,
    QMetaType::Void, QMetaType::QRect, QMetaType::Int,   11,   12,
    QMetaType::Void,

       0        // eod
};

void HexView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HexView *_t = static_cast<HexView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doubleClicked((*reinterpret_cast< Word(*)>(_a[1]))); break;
        case 1: _t->Refresh((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->Refresh(); break;
        case 3: _t->MoveInterval((*reinterpret_cast< Word(*)>(_a[1])),(*reinterpret_cast< Word(*)>(_a[2]))); break;
        case 4: _t->updateMargin((*reinterpret_cast< const QRect(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->onCursorPositionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (HexView::*_t)(Word );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HexView::doubleClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject HexView::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_HexView.data,
      qt_meta_data_HexView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *HexView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HexView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HexView.stringdata0))
        return static_cast<void*>(this);
    return QPlainTextEdit::qt_metacast(_clname);
}

int HexView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void HexView::doubleClicked(Word _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
