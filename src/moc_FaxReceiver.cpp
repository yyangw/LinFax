/****************************************************************************
** Meta object code from reading C++ file 'FaxReceiver.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FaxReceiver.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FaxReceiver.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FaxReceiver[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      27,   12,   12,   12, 0x05,
      49,   45,   12,   12, 0x05,
      75,   12,   12,   12, 0x05,
      92,   12,   12,   12, 0x05,
      98,   12,   12,   12, 0x05,
     116,   12,   12,   12, 0x05,
     136,   12,   12,   12, 0x05,
     145,   12,   12,   12, 0x05,
     166,   12,   12,   12, 0x05,
     182,   45,   12,   12, 0x05,
     207,   12,   12,   12, 0x05,
     221,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     239,  236,   12,   12, 0x0a,
     258,  256,   12,   12, 0x0a,
     279,  256,   12,   12, 0x0a,
     305,  299,   12,   12, 0x0a,
     323,  319,   12,   12, 0x0a,
     341,   12,   12,   12, 0x0a,
     348,   12,   12,   12, 0x0a,
     365,  363,   12,   12, 0x0a,
     382,  380,   12,   12, 0x0a,
     403,  401,   12,   12, 0x0a,
     421,   12,   12,   12, 0x0a,
     437,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FaxReceiver[] = {
    "FaxReceiver\0\0aptFound(int)\0aptStopDetected()\0"
    ",,,\0setPixel(int,int,int,int)\0"
    "startReception()\0end()\0startingPhasing()\0"
    "phasingLine(double)\0row(int)\0"
    "bufferNotEmpty(bool)\0imageWidth(int)\0"
    "newSize(int,int,int,int)\0imageStarts()\0"
    "redrawStarts()\0,n\0decode(int*,int)\0f\0"
    "setAptStartFreq(int)\0setAptStopFreq(int)\0"
    "width\0setWidth(int)\0pol\0setPhasePol(bool)\0"
    "skip()\0endReception()\0b\0setColor(bool)\0"
    "d\0correctLPM(double)\0w\0correctWidth(int)\0"
    "releaseBuffer()\0adjustNext()\0"
};

void FaxReceiver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FaxReceiver *_t = static_cast<FaxReceiver *>(_o);
        switch (_id) {
        case 0: _t->aptFound((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->aptStopDetected(); break;
        case 2: _t->setPixel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->startReception(); break;
        case 4: _t->end(); break;
        case 5: _t->startingPhasing(); break;
        case 6: _t->phasingLine((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->row((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->bufferNotEmpty((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->imageWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->newSize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 11: _t->imageStarts(); break;
        case 12: _t->redrawStarts(); break;
        case 13: _t->decode((*reinterpret_cast< int*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->setAptStartFreq((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->setAptStopFreq((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->setWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->setPhasePol((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->skip(); break;
        case 19: _t->endReception(); break;
        case 20: _t->setColor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->correctLPM((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 22: _t->correctWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->releaseBuffer(); break;
        case 24: _t->adjustNext(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FaxReceiver::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FaxReceiver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FaxReceiver,
      qt_meta_data_FaxReceiver, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FaxReceiver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FaxReceiver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FaxReceiver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FaxReceiver))
        return static_cast<void*>(const_cast< FaxReceiver*>(this));
    return QObject::qt_metacast(_clname);
}

int FaxReceiver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void FaxReceiver::aptFound(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FaxReceiver::aptStopDetected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void FaxReceiver::setPixel(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FaxReceiver::startReception()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void FaxReceiver::end()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void FaxReceiver::startingPhasing()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void FaxReceiver::phasingLine(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void FaxReceiver::row(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void FaxReceiver::bufferNotEmpty(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void FaxReceiver::imageWidth(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void FaxReceiver::newSize(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void FaxReceiver::imageStarts()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void FaxReceiver::redrawStarts()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}
QT_END_MOC_NAMESPACE
