/****************************************************************************
** Meta object code from reading C++ file 'PTC.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "PTC.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PTC.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PTC[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,    5,    4,    4, 0x05,
      22,    4,    4,    4, 0x05,
      37,    4,    4,    4, 0x05,

 // slots: signature, parameters, type, tag, flags
      66,   52,    4,    4, 0x0a,
      91,   88,    4,    4, 0x08,
     101,   88,    4,    4, 0x08,
     117,    4,    4,    4, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PTC[] = {
    "PTC\0\0,\0data(int*,int)\0spaceLeft(int)\0"
    "deviceClosed()\0samples,count\0"
    "transmit(double*,int)\0fd\0read(int)\0"
    "checkSpace(int)\0close()\0"
};

void PTC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PTC *_t = static_cast<PTC *>(_o);
        switch (_id) {
        case 0: _t->data((*reinterpret_cast< int*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->spaceLeft((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->deviceClosed(); break;
        case 3: _t->transmit((*reinterpret_cast< double*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->read((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->checkSpace((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->close(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PTC::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PTC::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PTC,
      qt_meta_data_PTC, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PTC::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PTC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PTC::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PTC))
        return static_cast<void*>(const_cast< PTC*>(this));
    return QObject::qt_metacast(_clname);
}

int PTC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void PTC::data(int * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PTC::spaceLeft(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PTC::deviceClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
