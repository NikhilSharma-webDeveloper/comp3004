/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Assignment3/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[282];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 24), // "onChangeDimensionClicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 19), // "upElevatorRequested"
QT_MOC_LITERAL(4, 57, 21), // "downElevatorRequested"
QT_MOC_LITERAL(5, 79, 21), // "printUpdatesOnConsole"
QT_MOC_LITERAL(6, 101, 6), // "update"
QT_MOC_LITERAL(7, 108, 21), // "moveElevatorAnimation"
QT_MOC_LITERAL(8, 130, 9), // "targetPos"
QT_MOC_LITERAL(9, 140, 10), // "Rectangle*"
QT_MOC_LITERAL(10, 151, 21), // "elevatorToDestination"
QT_MOC_LITERAL(11, 173, 18), // "pushButtonOpenDoor"
QT_MOC_LITERAL(12, 192, 19), // "pushButtonCloseDoor"
QT_MOC_LITERAL(13, 212, 4), // "fire"
QT_MOC_LITERAL(14, 217, 11), // "powerOutage"
QT_MOC_LITERAL(15, 229, 17), // "helpButtonPressed"
QT_MOC_LITERAL(16, 247, 12), // "submitWeight"
QT_MOC_LITERAL(17, 260, 9), // "blockDoor"
QT_MOC_LITERAL(18, 270, 11) // "unBlockDoor"

    },
    "MainWindow\0onChangeDimensionClicked\0"
    "\0upElevatorRequested\0downElevatorRequested\0"
    "printUpdatesOnConsole\0update\0"
    "moveElevatorAnimation\0targetPos\0"
    "Rectangle*\0elevatorToDestination\0"
    "pushButtonOpenDoor\0pushButtonCloseDoor\0"
    "fire\0powerOutage\0helpButtonPressed\0"
    "submitWeight\0blockDoor\0unBlockDoor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    1,   87,    2, 0x08 /* Private */,
       7,    2,   90,    2, 0x08 /* Private */,
      10,    0,   95,    2, 0x08 /* Private */,
      11,    0,   96,    2, 0x08 /* Private */,
      12,    0,   97,    2, 0x08 /* Private */,
      13,    0,   98,    2, 0x08 /* Private */,
      14,    0,   99,    2, 0x08 /* Private */,
      15,    0,  100,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,
      17,    0,  102,    2, 0x08 /* Private */,
      18,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QPointF, 0x80000000 | 9,    8,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onChangeDimensionClicked(); break;
        case 1: _t->upElevatorRequested(); break;
        case 2: _t->downElevatorRequested(); break;
        case 3: _t->printUpdatesOnConsole((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->moveElevatorAnimation((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< Rectangle*(*)>(_a[2]))); break;
        case 5: _t->elevatorToDestination(); break;
        case 6: _t->pushButtonOpenDoor(); break;
        case 7: _t->pushButtonCloseDoor(); break;
        case 8: _t->fire(); break;
        case 9: _t->powerOutage(); break;
        case 10: _t->helpButtonPressed(); break;
        case 11: _t->submitWeight(); break;
        case 12: _t->blockDoor(); break;
        case 13: _t->unBlockDoor(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
