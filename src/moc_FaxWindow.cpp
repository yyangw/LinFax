/****************************************************************************
** Meta object code from reading C++ file 'FaxWindow.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FaxWindow.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FaxWindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FaxWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      27,   25,   10,   10, 0x0a,
      48,   10,   10,   10, 0x0a,
      63,   10,   10,   10, 0x0a,
      81,   10,   10,   10, 0x0a,
      92,   10,   10,   10, 0x0a,
     110,   10,   10,   10, 0x0a,
     127,   10,   10,   10, 0x0a,
     149,  145,   10,   10, 0x08,
     171,   10,   10,   10, 0x08,
     178,   10,   10,   10, 0x08,
     185,   10,   10,   10, 0x08,
     197,   10,   10,   10, 0x08,
     216,   10,   10,   10, 0x08,
     234,   10,   10,   10, 0x08,
     252,   10,   10,   10, 0x08,
     272,   10,   10,   10, 0x08,
     291,   10,   10,   10, 0x08,
     310,   10,   10,   10, 0x08,
     322,   10,   10,   10, 0x08,
     335,   10,   10,   10, 0x08,
     352,   10,   10,   10, 0x08,
     366,   10,   10,   10, 0x08,
     379,   10,   10,   10, 0x08,
     390,   10,   10,   10, 0x08,
     402,   10,   10,   10, 0x08,
     415,   25,   10,   10, 0x08,
     431,   25,   10,   10, 0x08,
     450,   25,   10,   10, 0x08,
     470,   10,   10,   10, 0x08,
     477,   10,   10,   10, 0x08,
     485,   10,   10,   10, 0x08,
     497,  495,   10,   10, 0x08,
     515,  513,   10,   10, 0x08,
     535,  533,   10,   10, 0x08,
     551,  549,   10,   10, 0x08,
     568,  566,   10,   10, 0x08,
     591,  533,   10,   10, 0x08,
     612,  566,   10,   10, 0x08,
     634,  533,   10,   10, 0x08,
     654,  566,   10,   10, 0x08,
     666,  566,   10,   10, 0x08,
     687,  685,   10,   10, 0x08,
     707,  495,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FaxWindow[] = {
    "FaxWindow\0\0setBeginEnd()\0b\0"
    "setImageAdjust(bool)\0endReception()\0"
    "endTransmission()\0slantEnd()\0"
    "slantWaitSecond()\0enableControls()\0"
    "disableControls()\0w,h\0newImageSize(int,int)\0"
    "load()\0save()\0quickSave()\0initTransmitFile()\0"
    "initTransmitDsp()\0initTransmitPtc()\0"
    "initReceptionFile()\0initReceptionDsp()\0"
    "initReceptionPtc()\0adjustIOC()\0"
    "scaleToIOC()\0slantWaitFirst()\0"
    "redrawColor()\0redrawMono()\0setBegin()\0"
    "doOptions()\0selectFont()\0changePTT(bool)\0"
    "changeScroll(bool)\0changeToolTip(bool)\0"
    "help()\0about()\0aboutQT()\0c\0setCarrier(int)\0"
    "d\0setDeviation(int)\0f\0setUseFM(int)\0"
    "n\0setFilter(int)\0l\0setAptStartLength(int)\0"
    "setAptStartFreq(int)\0setAptStopLength(int)\0"
    "setAptStopFreq(int)\0setLpm(int)\0"
    "setPhaseLines(int)\0i\0setPhaseInvert(int)\0"
    "setColor(int)\0"
};

void FaxWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FaxWindow *_t = static_cast<FaxWindow *>(_o);
        switch (_id) {
        case 0: _t->setBeginEnd(); break;
        case 1: _t->setImageAdjust((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->endReception(); break;
        case 3: _t->endTransmission(); break;
        case 4: _t->slantEnd(); break;
        case 5: _t->slantWaitSecond(); break;
        case 6: _t->enableControls(); break;
        case 7: _t->disableControls(); break;
        case 8: _t->newImageSize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->load(); break;
        case 10: _t->save(); break;
        case 11: _t->quickSave(); break;
        case 12: _t->initTransmitFile(); break;
        case 13: _t->initTransmitDsp(); break;
        case 14: _t->initTransmitPtc(); break;
        case 15: _t->initReceptionFile(); break;
        case 16: _t->initReceptionDsp(); break;
        case 17: _t->initReceptionPtc(); break;
        case 18: _t->adjustIOC(); break;
        case 19: _t->scaleToIOC(); break;
        case 20: _t->slantWaitFirst(); break;
        case 21: _t->redrawColor(); break;
        case 22: _t->redrawMono(); break;
        case 23: _t->setBegin(); break;
        case 24: _t->doOptions(); break;
        case 25: _t->selectFont(); break;
        case 26: _t->changePTT((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->changeScroll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->changeToolTip((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->help(); break;
        case 30: _t->about(); break;
        case 31: _t->aboutQT(); break;
        case 32: _t->setCarrier((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->setDeviation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->setUseFM((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->setFilter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->setAptStartLength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->setAptStartFreq((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->setAptStopLength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->setAptStopFreq((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->setLpm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->setPhaseLines((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->setPhaseInvert((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->setColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FaxWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FaxWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FaxWindow,
      qt_meta_data_FaxWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FaxWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FaxWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FaxWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FaxWindow))
        return static_cast<void*>(const_cast< FaxWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int FaxWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
