/****************************************************************************
** Meta object code from reading C++ file 'addresseswidget.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/pivx/addresseswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addresseswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddressesWidget_t {
    QByteArrayData data[16];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddressesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddressesWidget_t qt_meta_stringdata_AddressesWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "AddressesWidget"
QT_MOC_LITERAL(1, 16, 20), // "handleAddressClicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "index"
QT_MOC_LITERAL(4, 44, 21), // "onStoreContactClicked"
QT_MOC_LITERAL(5, 66, 13), // "onEditClicked"
QT_MOC_LITERAL(6, 80, 15), // "onDeleteClicked"
QT_MOC_LITERAL(7, 96, 13), // "onCopyClicked"
QT_MOC_LITERAL(8, 110, 27), // "onAddContactShowHideClicked"
QT_MOC_LITERAL(9, 138, 13), // "onSortChanged"
QT_MOC_LITERAL(10, 152, 3), // "idx"
QT_MOC_LITERAL(11, 156, 18), // "onSortOrderChanged"
QT_MOC_LITERAL(12, 175, 11), // "changeTheme"
QT_MOC_LITERAL(13, 187, 12), // "isLightTheme"
QT_MOC_LITERAL(14, 200, 8), // "QString&"
QT_MOC_LITERAL(15, 209, 5) // "theme"

    },
    "AddressesWidget\0handleAddressClicked\0"
    "\0index\0onStoreContactClicked\0onEditClicked\0"
    "onDeleteClicked\0onCopyClicked\0"
    "onAddContactShowHideClicked\0onSortChanged\0"
    "idx\0onSortOrderChanged\0changeTheme\0"
    "isLightTheme\0QString&\0theme"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddressesWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    0,   62,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    1,   67,    2, 0x08 /* Private */,
      11,    1,   70,    2, 0x08 /* Private */,
      12,    2,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 14,   13,   15,

       0        // eod
};

void AddressesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddressesWidget *_t = static_cast<AddressesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleAddressClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->onStoreContactClicked(); break;
        case 2: _t->onEditClicked(); break;
        case 3: _t->onDeleteClicked(); break;
        case 4: _t->onCopyClicked(); break;
        case 5: _t->onAddContactShowHideClicked(); break;
        case 6: _t->onSortChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->onSortOrderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->changeTheme((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject AddressesWidget::staticMetaObject = {
    { &PWidget::staticMetaObject, qt_meta_stringdata_AddressesWidget.data,
      qt_meta_data_AddressesWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AddressesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddressesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddressesWidget.stringdata0))
        return static_cast<void*>(this);
    return PWidget::qt_metacast(_clname);
}

int AddressesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
