/****************************************************************************
** Meta object code from reading C++ file 'FaxImage.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FaxImage.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FaxImage.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FaxImage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   10,    9,    9, 0x05,
      33,    9,    9,    9, 0x05,
      43,    9,    9,    9, 0x05,
      63,    9,    9,    9, 0x05,
      74,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     116,   97,   92,    9, 0x0a,
     152,  142,    9,    9, 0x0a,
     181,  168,    9,    9, 0x0a,
     202,  196,    9,    9, 0x0a,
     221,  213,    9,    9, 0x0a,
     251,  245,    9,    9, 0x2a,
     273,  271,    9,    9, 0x0a,
     289,  287,    9,    9, 0x0a,
     309,    9,    9,    9, 0x0a,
     324,    9,    9,    9, 0x0a,
     338,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FaxImage[] = {
    "FaxImage\0\0,\0sizeUpdated(int,int)\0"
    "clicked()\0widthAdjust(double)\0newImage()\0"
    "shiftLine(double)\0bool\0col,row,value,rgbg\0"
    "setPixel(int,int,int,int)\0cols,rows\0"
    "create(int,int)\0width,height\0"
    "scale(int,int)\0width\0scale(int)\0x,y,w,h\0"
    "resize(int,int,int,int)\0x,y,w\0"
    "resize(int,int,int)\0w\0setWidth(int)\0"
    "b\0setAutoScroll(bool)\0correctSlant()\0"
    "shiftColors()\0correctBegin()\0"
};

void FaxImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FaxImage *_t = static_cast<FaxImage *>(_o);
        switch (_id) {
        case 0: _t->sizeUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->clicked(); break;
        case 2: _t->widthAdjust((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->newImage(); break;
        case 4: _t->shiftLine((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: { bool _r = _t->setPixel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->create((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->scale((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->scale((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->resize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 10: _t->resize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 11: _t->setWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setAutoScroll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->correctSlant(); break;
        case 14: _t->shiftColors(); break;
        case 15: _t->correctBegin(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FaxImage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FaxImage::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_FaxImage,
      qt_meta_data_FaxImage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FaxImage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FaxImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FaxImage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FaxImage))
        return static_cast<void*>(const_cast< FaxImage*>(this));
    return QScrollArea::qt_metacast(_clname);
}

int FaxImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void FaxImage::sizeUpdated(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FaxImage::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void FaxImage::widthAdjust(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FaxImage::newImage()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void FaxImage::shiftLine(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
