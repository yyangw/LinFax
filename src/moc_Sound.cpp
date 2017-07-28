/****************************************************************************
** Meta object code from reading C++ file 'Sound.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Sound.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Sound.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Sound[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    7,    6,    6, 0x05,
      26,    6,    6,    6, 0x05,
      41,    6,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
      56,    6,    6,    6, 0x0a,
      67,    6,    6,    6, 0x0a,
      88,   73,    6,    6, 0x0a,
     109,  106,    6,    6, 0x08,
     125,  106,    6,    6, 0x08,
     135,  106,    6,    6, 0x08,
     149,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Sound[] = {
    "Sound\0\0,\0data(short*,int)\0deviceClosed()\0"
    "spaceLeft(int)\0closeNow()\0end()\0"
    "samples,number\0write(short*,int)\0fd\0"
    "checkSpace(int)\0read(int)\0readALSA(int)\0"
    "close()\0"
};

void Sound::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Sound *_t = static_cast<Sound *>(_o);
        switch (_id) {
        case 0: _t->data((*reinterpret_cast< short*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->deviceClosed(); break;
        case 2: _t->spaceLeft((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->closeNow(); break;
        case 4: _t->end(); break;
        case 5: _t->write((*reinterpret_cast< short*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->checkSpace((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->read((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->readALSA((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->close(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Sound::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Sound::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Sound,
      qt_meta_data_Sound, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Sound::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Sound::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Sound::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Sound))
        return static_cast<void*>(const_cast< Sound*>(this));
    return QObject::qt_metacast(_clname);
}

int Sound::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Sound::data(short * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Sound::deviceClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Sound::spaceLeft(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
