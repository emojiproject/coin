/****************************************************************************
** Meta object code from reading C++ file 'settingsinformationwidget.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/pivx/settings/settingsinformationwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingsinformationwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsInformationWidget_t {
    QByteArrayData data[14];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsInformationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsInformationWidget_t qt_meta_stringdata_SettingsInformationWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "SettingsInformationWidget"
QT_MOC_LITERAL(1, 26, 17), // "setNumConnections"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 5), // "count"
QT_MOC_LITERAL(4, 51, 12), // "setNumBlocks"
QT_MOC_LITERAL(5, 64, 18), // "setMasternodeCount"
QT_MOC_LITERAL(6, 83, 14), // "strMasternodes"
QT_MOC_LITERAL(7, 98, 9), // "showEvent"
QT_MOC_LITERAL(8, 108, 11), // "QShowEvent*"
QT_MOC_LITERAL(9, 120, 5), // "event"
QT_MOC_LITERAL(10, 126, 9), // "hideEvent"
QT_MOC_LITERAL(11, 136, 11), // "QHideEvent*"
QT_MOC_LITERAL(12, 148, 18), // "openNetworkMonitor"
QT_MOC_LITERAL(13, 167, 9) // "showPeers"

    },
    "SettingsInformationWidget\0setNumConnections\0"
    "\0count\0setNumBlocks\0setMasternodeCount\0"
    "strMasternodes\0showEvent\0QShowEvent*\0"
    "event\0hideEvent\0QHideEvent*\0"
    "openNetworkMonitor\0showPeers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsInformationWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       4,    1,   52,    2, 0x08 /* Private */,
       5,    1,   55,    2, 0x08 /* Private */,
       7,    1,   58,    2, 0x08 /* Private */,
      10,    1,   61,    2, 0x08 /* Private */,
      12,    0,   64,    2, 0x0a /* Public */,
      13,    0,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SettingsInformationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsInformationWidget *_t = static_cast<SettingsInformationWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setMasternodeCount((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 4: _t->hideEvent((*reinterpret_cast< QHideEvent*(*)>(_a[1]))); break;
        case 5: _t->openNetworkMonitor(); break;
        case 6: _t->showPeers(); break;
        default: ;
        }
    }
}

const QMetaObject SettingsInformationWidget::staticMetaObject = {
    { &PWidget::staticMetaObject, qt_meta_stringdata_SettingsInformationWidget.data,
      qt_meta_data_SettingsInformationWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SettingsInformationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsInformationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsInformationWidget.stringdata0))
        return static_cast<void*>(this);
    return PWidget::qt_metacast(_clname);
}

int SettingsInformationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
