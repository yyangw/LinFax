/****************************************************************************
** Meta object code from reading C++ file 'ReceiveDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ReceiveDialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ReceiveDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ReceiveDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      31,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   45,   14,   14, 0x0a,
      56,   14,   14,   14, 0x0a,
      70,   66,   14,   14, 0x0a,
      94,   90,   14,   14, 0x0a,
     108,   14,   14,   14, 0x0a,
     131,  122,   14,   14, 0x0a,
     151,  122,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ReceiveDialog[] = {
    "ReceiveDialog\0\0cancelClicked()\0"
    "skipClicked()\0f\0apt(int)\0phasing()\0"
    "lpm\0phasingLine(double)\0row\0imageRow(int)\0"
    "disableSkip()\0buffer,n\0imageData(int*,int)\0"
    "samples(short*,int)\0"
};

void ReceiveDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ReceiveDialog *_t = static_cast<ReceiveDialog *>(_o);
        switch (_id) {
        case 0: _t->cancelClicked(); break;
        case 1: _t->skipClicked(); break;
        case 2: _t->apt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->phasing(); break;
        case 4: _t->phasingLine((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->imageRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->disableSkip(); break;
        case 7: _t->imageData((*reinterpret_cast< int*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->samples((*reinterpret_cast< short*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ReceiveDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ReceiveDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ReceiveDialog,
      qt_meta_data_ReceiveDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ReceiveDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ReceiveDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ReceiveDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ReceiveDialog))
        return static_cast<void*>(const_cast< ReceiveDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ReceiveDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void ReceiveDialog::cancelClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ReceiveDialog::skipClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
