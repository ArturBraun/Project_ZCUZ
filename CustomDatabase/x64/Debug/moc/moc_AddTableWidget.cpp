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
    QByteArrayData data[12];
    char stringdata0[235];
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
QT_MOC_LITERAL(4, 52, 12), // "std::string&"
QT_MOC_LITERAL(5, 65, 9), // "tableName"
QT_MOC_LITERAL(6, 75, 60), // "std::unordered_map<int,std::p..."
QT_MOC_LITERAL(7, 136, 11), // "columnsData"
QT_MOC_LITERAL(8, 148, 19), // "cancelButtonClicked"
QT_MOC_LITERAL(9, 168, 17), // "saveButtonClicked"
QT_MOC_LITERAL(10, 186, 22), // "addColumnButtonClicked"
QT_MOC_LITERAL(11, 209, 25) // "deleteColumnButtonClicked"

    },
    "AddTableWidget\0restoreDefaultWidget\0"
    "\0createNewTable\0std::string&\0tableName\0"
    "std::unordered_map<int,std::pair<std::string,std::string> >&\0"
    "columnsData\0cancelButtonClicked\0"
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
       3,    2,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   50,    2, 0x0a /* Public */,
       9,    0,   51,    2, 0x0a /* Public */,
      10,    0,   52,    2, 0x0a /* Public */,
      11,    0,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,

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
        case 1: _t->createNewTable((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< std::unordered_map<int,std::pair<std::string,std::string> >(*)>(_a[2]))); break;
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
            using _t = void (AddTableWidget::*)(std::string & , std::unordered_map<int,std::pair<std::string,std::string>> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddTableWidget::createNewTable)) {
                *result = 1;
                return;
            }
        }
    }
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
void AddTableWidget::createNewTable(std::string & _t1, std::unordered_map<int,std::pair<std::string,std::string>> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
