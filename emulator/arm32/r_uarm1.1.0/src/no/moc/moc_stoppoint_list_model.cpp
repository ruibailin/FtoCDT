/****************************************************************************
** Meta object code from reading C++ file 'stoppoint_list_model.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qarm/stoppoint_list_model.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stoppoint_list_model.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BaseStoppointListModel_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BaseStoppointListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BaseStoppointListModel_t qt_meta_stringdata_BaseStoppointListModel = {
    {
QT_MOC_LITERAL(0, 0, 22) // "BaseStoppointListModel"

    },
    "BaseStoppointListModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BaseStoppointListModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void BaseStoppointListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject BaseStoppointListModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_BaseStoppointListModel.data,
      qt_meta_data_BaseStoppointListModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BaseStoppointListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaseStoppointListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BaseStoppointListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int BaseStoppointListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StoppointListModel_t {
    QByteArrayData data[14];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StoppointListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StoppointListModel_t qt_meta_stringdata_StoppointListModel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "StoppointListModel"
QT_MOC_LITERAL(1, 19, 5), // "onHit"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 6), // "size_t"
QT_MOC_LITERAL(4, 33, 5), // "index"
QT_MOC_LITERAL(5, 39, 16), // "const Stoppoint*"
QT_MOC_LITERAL(6, 56, 9), // "stoppoint"
QT_MOC_LITERAL(7, 66, 4), // "Word"
QT_MOC_LITERAL(8, 71, 4), // "addr"
QT_MOC_LITERAL(9, 76, 16), // "const processor*"
QT_MOC_LITERAL(10, 93, 3), // "cpu"
QT_MOC_LITERAL(11, 97, 16), // "onEnabledChanged"
QT_MOC_LITERAL(12, 114, 7), // "spIndex"
QT_MOC_LITERAL(13, 122, 12) // "onMachineRan"

    },
    "StoppointListModel\0onHit\0\0size_t\0index\0"
    "const Stoppoint*\0stoppoint\0Word\0addr\0"
    "const processor*\0cpu\0onEnabledChanged\0"
    "spIndex\0onMachineRan"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StoppointListModel[] = {

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
       1,    4,   29,    2, 0x08 /* Private */,
      11,    1,   38,    2, 0x08 /* Private */,
      13,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7, 0x80000000 | 9,    4,    6,    8,   10,
    QMetaType::Void, 0x80000000 | 3,   12,
    QMetaType::Void,

       0        // eod
};

void StoppointListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StoppointListModel *_t = static_cast<StoppointListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onHit((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< const Stoppoint*(*)>(_a[2])),(*reinterpret_cast< Word(*)>(_a[3])),(*reinterpret_cast< const processor*(*)>(_a[4]))); break;
        case 1: _t->onEnabledChanged((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 2: _t->onMachineRan(); break;
        default: ;
        }
    }
}

const QMetaObject StoppointListModel::staticMetaObject = {
    { &BaseStoppointListModel::staticMetaObject, qt_meta_stringdata_StoppointListModel.data,
      qt_meta_data_StoppointListModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *StoppointListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StoppointListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StoppointListModel.stringdata0))
        return static_cast<void*>(this);
    return BaseStoppointListModel::qt_metacast(_clname);
}

int StoppointListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseStoppointListModel::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
