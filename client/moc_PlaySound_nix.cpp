/****************************************************************************
** Meta object code from reading C++ file 'PlaySound_nix.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "util/PlaySound_nix.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlaySound_nix.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlaySoundSpace__PlaySoundThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x0a,
      39,   32,   32,   32, 0x0a,
      46,   32,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PlaySoundSpace__PlaySoundThread[] = {
    "PlaySoundSpace::PlaySoundThread\0\0run()\0"
    "quit()\0terminate()\0"
};

void PlaySoundSpace::PlaySoundThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlaySoundThread *_t = static_cast<PlaySoundThread *>(_o);
        switch (_id) {
        case 0: _t->run(); break;
        case 1: _t->quit(); break;
        case 2: _t->terminate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PlaySoundSpace::PlaySoundThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlaySoundSpace::PlaySoundThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_PlaySoundSpace__PlaySoundThread,
      qt_meta_data_PlaySoundSpace__PlaySoundThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlaySoundSpace::PlaySoundThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlaySoundSpace::PlaySoundThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlaySoundSpace::PlaySoundThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlaySoundSpace__PlaySoundThread))
        return static_cast<void*>(const_cast< PlaySoundThread*>(this));
    return QThread::qt_metacast(_clname);
}

int PlaySoundSpace::PlaySoundThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
