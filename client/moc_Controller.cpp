/****************************************************************************
** Meta object code from reading C++ file 'Controller.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Controller.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Controller[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      34,   27,   11,   11, 0x05,
      65,   57,   11,   11, 0x05,
      98,   93,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     120,   11,   11,   11, 0x08,
     137,   11,   11,   11, 0x08,
     163,  151,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Controller[] = {
    "Controller\0\0stateChanged()\0result\0"
    "gameResult(GameResult)\0message\0"
    "gameError(GameErrorMessage)\0name\0"
    "gameOpponent(QString)\0onDataReceived()\0"
    "onConnected()\0socketError\0"
    "onError(QAbstractSocket::SocketError)\0"
};

void Controller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Controller *_t = static_cast<Controller *>(_o);
        switch (_id) {
        case 0: _t->stateChanged(); break;
        case 1: _t->gameResult((*reinterpret_cast< GameResult(*)>(_a[1]))); break;
        case 2: _t->gameError((*reinterpret_cast< GameErrorMessage(*)>(_a[1]))); break;
        case 3: _t->gameOpponent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onDataReceived(); break;
        case 5: _t->onConnected(); break;
        case 6: _t->onError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Controller::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Controller::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Controller,
      qt_meta_data_Controller, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Controller::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Controller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Controller::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Controller))
        return static_cast<void*>(const_cast< Controller*>(this));
    return QWidget::qt_metacast(_clname);
}

int Controller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Controller::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Controller::gameResult(GameResult _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Controller::gameError(GameErrorMessage _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Controller::gameOpponent(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
