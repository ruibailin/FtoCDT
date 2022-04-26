/****************************************************************************
** Meta object code from reading C++ file 'select_structures_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qarm/select_structures_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'select_structures_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SelectStructuresDialog_t {
    QByteArrayData data[15];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelectStructuresDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelectStructuresDialog_t qt_meta_stringdata_SelectStructuresDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "SelectStructuresDialog"
QT_MOC_LITERAL(1, 23, 14), // "selectedObject"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 4), // "Word"
QT_MOC_LITERAL(4, 44, 5), // "start"
QT_MOC_LITERAL(5, 50, 3), // "end"
QT_MOC_LITERAL(6, 54, 7), // "openRam"
QT_MOC_LITERAL(7, 62, 5), // "label"
QT_MOC_LITERAL(8, 68, 6), // "offset"
QT_MOC_LITERAL(9, 75, 13), // "updateContent"
QT_MOC_LITERAL(10, 89, 14), // "triggerOpenRam"
QT_MOC_LITERAL(11, 104, 4), // "addr"
QT_MOC_LITERAL(12, 109, 18), // "onSelectionChanged"
QT_MOC_LITERAL(13, 128, 14), // "QItemSelection"
QT_MOC_LITERAL(14, 143, 8) // "selected"

    },
    "SelectStructuresDialog\0selectedObject\0"
    "\0Word\0start\0end\0openRam\0label\0offset\0"
    "updateContent\0triggerOpenRam\0addr\0"
    "onSelectionChanged\0QItemSelection\0"
    "selected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelectStructuresDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       6,    4,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   58,    2, 0x0a /* Public */,
      10,    0,   59,    2, 0x0a /* Public */,
      10,    1,   60,    2, 0x0a /* Public */,
      12,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::QString, QMetaType::Bool,    4,    5,    7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void SelectStructuresDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SelectStructuresDialog *_t = static_cast<SelectStructuresDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedObject((*reinterpret_cast< Word(*)>(_a[1])),(*reinterpret_cast< Word(*)>(_a[2]))); break;
        case 1: _t->openRam((*reinterpret_cast< Word(*)>(_a[1])),(*reinterpret_cast< Word(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 2: _t->updateContent(); break;
        case 3: _t->triggerOpenRam(); break;
        case 4: _t->triggerOpenRam((*reinterpret_cast< Word(*)>(_a[1]))); break;
        case 5: _t->onSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SelectStructuresDialog::*_t)(Word , Word );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SelectStructuresDialog::selectedObject)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SelectStructuresDialog::*_t)(Word , Word , QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SelectStructuresDialog::openRam)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject SelectStructuresDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SelectStructuresDialog.data,
      qt_meta_data_SelectStructuresDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SelectStructuresDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectStructuresDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SelectStructuresDialog.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SelectStructuresDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SelectStructuresDialog::selectedObject(Word _t1, Word _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SelectStructuresDialog::openRam(Word _t1, Word _t2, QString _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
