/****************************************************************************
** Meta object code from reading C++ file 'vpnmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../vpnmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vpnmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VPNManager_t {
    QByteArrayData data[14];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VPNManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VPNManager_t qt_meta_stringdata_VPNManager = {
    {
QT_MOC_LITERAL(0, 0, 10), // "VPNManager"
QT_MOC_LITERAL(1, 11, 20), // "on_btServers_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "on_btkeys_clicked"
QT_MOC_LITERAL(4, 51, 22), // "on_listServers_clicked"
QT_MOC_LITERAL(5, 74, 5), // "index"
QT_MOC_LITERAL(6, 80, 19), // "on_listKeys_clicked"
QT_MOC_LITERAL(7, 100, 20), // "on_btConnect_clicked"
QT_MOC_LITERAL(8, 121, 15), // "on_btCA_clicked"
QT_MOC_LITERAL(9, 137, 17), // "on_listCA_clicked"
QT_MOC_LITERAL(10, 155, 23), // "on_btDisconnect_clicked"
QT_MOC_LITERAL(11, 179, 18), // "on_btClose_clicked"
QT_MOC_LITERAL(12, 198, 18), // "on_btClear_clicked"
QT_MOC_LITERAL(13, 217, 14) // "onCreateThread"

    },
    "VPNManager\0on_btServers_clicked\0\0"
    "on_btkeys_clicked\0on_listServers_clicked\0"
    "index\0on_listKeys_clicked\0"
    "on_btConnect_clicked\0on_btCA_clicked\0"
    "on_listCA_clicked\0on_btDisconnect_clicked\0"
    "on_btClose_clicked\0on_btClear_clicked\0"
    "onCreateThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VPNManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    1,   71,    2, 0x08 /* Private */,
       6,    1,   74,    2, 0x08 /* Private */,
       7,    0,   77,    2, 0x08 /* Private */,
       8,    0,   78,    2, 0x08 /* Private */,
       9,    1,   79,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VPNManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VPNManager *_t = static_cast<VPNManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btServers_clicked(); break;
        case 1: _t->on_btkeys_clicked(); break;
        case 2: _t->on_listServers_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_listKeys_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_btConnect_clicked(); break;
        case 5: _t->on_btCA_clicked(); break;
        case 6: _t->on_listCA_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->on_btDisconnect_clicked(); break;
        case 8: _t->on_btClose_clicked(); break;
        case 9: _t->on_btClear_clicked(); break;
        case 10: _t->onCreateThread(); break;
        default: ;
        }
    }
}

const QMetaObject VPNManager::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_VPNManager.data,
      qt_meta_data_VPNManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VPNManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VPNManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VPNManager.stringdata0))
        return static_cast<void*>(const_cast< VPNManager*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int VPNManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
