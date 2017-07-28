/****************************************************************************
** Meta object code from reading C++ file 'FaxTransmitter.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FaxTransmitter.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FaxTransmitter.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FaxTransmitter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      27,   15,   15,   15, 0x05,
      39,   37,   15,   15, 0x05,
      54,   15,   15,   15, 0x05,
      70,   64,   15,   15, 0x05,
      88,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     104,   94,   15,   15, 0x0a,
     126,   37,   15,   15, 0x0a,
     138,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FaxTransmitter[] = {
    "FaxTransmitter\0\0aptStart()\0phasing()\0"
    "n\0imageLine(int)\0aptStop()\0buf,n\0"
    "data(double*,int)\0end()\0cols,rows\0"
    "setImageSize(int,int)\0doNext(int)\0"
    "doAptStop()\0"
};

void FaxTransmitter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FaxTransmitter *_t = static_cast<FaxTransmitter *>(_o);
        switch (_id) {
        case 0: _t->aptStart(); break;
        case 1: _t->phasing(); break;
        case 2: _t->imageLine((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->aptStop(); break;
        case 4: _t->data((*reinterpret_cast< double*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->end(); break;
        case 6: _t->setImageSize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->doNext((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->doAptStop(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FaxTransmitter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FaxTransmitter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FaxTransmitter,
      qt_meta_data_FaxTransmitter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FaxTransmitter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FaxTransmitter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FaxTransmitter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FaxTransmitter))
        return static_cast<void*>(const_cast< FaxTransmitter*>(this));
    return QObject::qt_metacast(_clname);
}

int FaxTransmitter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void FaxTransmitter::aptStart()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void FaxTransmitter::phasing()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void FaxTransmitter::imageLine(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FaxTransmitter::aptStop()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void FaxTransmitter::data(double * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FaxTransmitter::end()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
