/****************************************************************************
** Meta object code from reading C++ file 'settingsfaqwidget.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/pivx/settings/settingsfaqwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingsfaqwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsFaqWidget_t {
    QByteArrayData data[10];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsFaqWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsFaqWidget_t qt_meta_stringdata_SettingsFaqWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SettingsFaqWidget"
QT_MOC_LITERAL(1, 18, 17), // "windowResizeEvent"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "QResizeEvent*"
QT_MOC_LITERAL(4, 51, 5), // "event"
QT_MOC_LITERAL(5, 57, 10), // "setSection"
QT_MOC_LITERAL(6, 68, 3), // "num"
QT_MOC_LITERAL(7, 72, 12), // "onFaqClicked"
QT_MOC_LITERAL(8, 85, 13), // "QWidget*const"
QT_MOC_LITERAL(9, 99, 6) // "widget"

    },
    "SettingsFaqWidget\0windowResizeEvent\0"
    "\0QResizeEvent*\0event\0setSection\0num\0"
    "onFaqClicked\0QWidget*const\0widget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsFaqWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       5,    1,   32,    2, 0x0a /* Public */,
       7,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void SettingsFaqWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsFaqWidget *_t = static_cast<SettingsFaqWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->windowResizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 1: _t->setSection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onFaqClicked((*reinterpret_cast< const QWidget*const(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SettingsFaqWidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SettingsFaqWidget.data,
      qt_meta_data_SettingsFaqWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SettingsFaqWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsFaqWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsFaqWidget.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SettingsFaqWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
