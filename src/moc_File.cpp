/****************************************************************************
** Meta object code from reading C++ file 'File.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "File.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'File.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_File[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,    6,    5,    5, 0x05,
      34,   32,    5,    5, 0x05,
      44,    5,    5,    5, 0x05,

 // slots: signature, parameters, type, tag, flags
      74,   59,    5,    5, 0x0a,
      92,    5,    5,    5, 0x0a,
     106,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_File[] = {
    "File\0\0buffer,n\0data(short*,int)\0n\0"
    "next(int)\0deviceClosed()\0samples,number\0"
    "write(short*,int)\0timerSignal()\0read()\0"
};

void File::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        File *_t = static_cast<File *>(_o);
        switch (_id) {
        case 0: _t->data((*reinterpret_cast< short*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->next((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->deviceClosed(); break;
        case 3: _t->write((*reinterpret_cast< short*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->timerSignal(); break;
        case 5: _t->read(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData File::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject File::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_File,
      qt_meta_data_File, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &File::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *File::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *File::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_File))
        return static_cast<void*>(const_cast< File*>(this));
    return QObject::qt_metacast(_clname);
}

int File::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void File::data(short * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void File::next(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void File::deviceClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
