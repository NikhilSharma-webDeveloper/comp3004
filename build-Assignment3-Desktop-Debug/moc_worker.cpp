/****************************************************************************
** Meta object code from reading C++ file 'worker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Assignment3/worker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'worker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Worker_t {
    QByteArrayData data[19];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Worker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Worker_t qt_meta_stringdata_Worker = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Worker"
QT_MOC_LITERAL(1, 7, 21), // "moveElevatorAnimation"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "targetPos"
QT_MOC_LITERAL(4, 40, 10), // "Rectangle*"
QT_MOC_LITERAL(5, 51, 3), // "ele"
QT_MOC_LITERAL(6, 55, 13), // "consoleUpdate"
QT_MOC_LITERAL(7, 69, 7), // "message"
QT_MOC_LITERAL(8, 77, 20), // "pushButtonDownNormal"
QT_MOC_LITERAL(9, 98, 18), // "pushButtonUpNormal"
QT_MOC_LITERAL(10, 117, 19), // "upElevatorRequested"
QT_MOC_LITERAL(11, 137, 21), // "downElevatorRequested"
QT_MOC_LITERAL(12, 159, 12), // "moveElevator"
QT_MOC_LITERAL(13, 172, 5), // "floor"
QT_MOC_LITERAL(14, 178, 8), // "elevator"
QT_MOC_LITERAL(15, 187, 19), // "moveElevatorToFloor"
QT_MOC_LITERAL(16, 207, 13), // "overrideTimer"
QT_MOC_LITERAL(17, 221, 4), // "fire"
QT_MOC_LITERAL(18, 226, 11) // "powerOutage"

    },
    "Worker\0moveElevatorAnimation\0\0targetPos\0"
    "Rectangle*\0ele\0consoleUpdate\0message\0"
    "pushButtonDownNormal\0pushButtonUpNormal\0"
    "upElevatorRequested\0downElevatorRequested\0"
    "moveElevator\0floor\0elevator\0"
    "moveElevatorToFloor\0overrideTimer\0"
    "fire\0powerOutage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Worker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       6,    1,   74,    2, 0x06 /* Public */,
       8,    0,   77,    2, 0x06 /* Public */,
       9,    0,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   79,    2, 0x0a /* Public */,
      11,    0,   80,    2, 0x0a /* Public */,
      12,    2,   81,    2, 0x0a /* Public */,
      15,    0,   86,    2, 0x0a /* Public */,
      16,    0,   87,    2, 0x0a /* Public */,
      17,    0,   88,    2, 0x0a /* Public */,
      18,    0,   89,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,   13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Worker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Worker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->moveElevatorAnimation((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< Rectangle*(*)>(_a[2]))); break;
        case 1: _t->consoleUpdate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->pushButtonDownNormal(); break;
        case 3: _t->pushButtonUpNormal(); break;
        case 4: _t->upElevatorRequested(); break;
        case 5: _t->downElevatorRequested(); break;
        case 6: _t->moveElevator((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Rectangle*(*)>(_a[2]))); break;
        case 7: _t->moveElevatorToFloor(); break;
        case 8: _t->overrideTimer(); break;
        case 9: _t->fire(); break;
        case 10: _t->powerOutage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Worker::*)(const QPointF & , Rectangle * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::moveElevatorAnimation)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Worker::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::consoleUpdate)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Worker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::pushButtonDownNormal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Worker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::pushButtonUpNormal)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Worker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Worker.data,
    qt_meta_data_Worker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Worker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Worker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Worker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Worker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Worker::moveElevatorAnimation(const QPointF & _t1, Rectangle * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Worker::consoleUpdate(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Worker::pushButtonDownNormal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Worker::pushButtonUpNormal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
