/****************************************************************************
** Meta object code from reading C++ file 'AddTableWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../View/AddTableWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddTableWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddTableWidget_t {
    QByteArrayData data[8];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddTableWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddTableWidget_t qt_meta_stringdata_AddTableWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AddTableWidget"
QT_MOC_LITERAL(1, 15, 20), // "restoreDefaultWidget"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 14), // "createNewTable"
QT_MOC_LITERAL(4, 52, 19), // "cancelButtonClicked"
QT_MOC_LITERAL(5, 72, 17), // "saveButtonClicked"
QT_MOC_LITERAL(6, 90, 22), // "addColumnButtonClicked"
QT_MOC_LITERAL(7, 113, 25) // "deleteColumnButtonClicked"

    },
    "AddTableWidget\0restoreDefaultWidget\0"
    "\0createNewTable\0cancelButtonClicked\0"
    "saveButtonClicked\0addColumnButtonClicked\0"
    "deleteColumnButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddTableWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddTableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddTableWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->restoreDefaultWidget(); break;
        case 1: _t->createNewTable(); break;
        case 2: _t->cancelButtonClicked(); break;
        case 3: _t->saveButtonClicked(); break;
        case 4: _t->addColumnButtonClicked(); break;
        case 5: _t->deleteColumnButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AddTableWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddTableWidget::restoreDefaultWidget)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AddTableWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddTableWidget::createNewTable)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AddTableWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AddTableWidget.data,
    qt_meta_data_AddTableWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AddTableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddTableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddTableWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AddTableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AddTableWidget::restoreDefaultWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AddTableWidget::createNewTable()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
