/****************************************************************************
** Meta object code from reading C++ file 'converter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../converter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'converter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_converter_t {
    QByteArrayData data[9];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_converter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_converter_t qt_meta_stringdata_converter = {
    {
QT_MOC_LITERAL(0, 0, 9), // "converter"
QT_MOC_LITERAL(1, 10, 21), // "on_swapValues_pressed"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 20), // "on_swapUnits_pressed"
QT_MOC_LITERAL(4, 54, 32), // "on_toggleCategoryDetails_toggled"
QT_MOC_LITERAL(5, 87, 38), // "on_categorySelector_currentTe..."
QT_MOC_LITERAL(6, 126, 35), // "on_inputBeforeConversion_text..."
QT_MOC_LITERAL(7, 162, 29), // "on_actionInformatii_triggered"
QT_MOC_LITERAL(8, 192, 26) // "on_actionAddUnit_triggered"

    },
    "converter\0on_swapValues_pressed\0\0"
    "on_swapUnits_pressed\0"
    "on_toggleCategoryDetails_toggled\0"
    "on_categorySelector_currentTextChanged\0"
    "on_inputBeforeConversion_textEdited\0"
    "on_actionInformatii_triggered\0"
    "on_actionAddUnit_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_converter[] = {

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
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void converter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        converter *_t = static_cast<converter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_swapValues_pressed(); break;
        case 1: _t->on_swapUnits_pressed(); break;
        case 2: _t->on_toggleCategoryDetails_toggled(); break;
        case 3: _t->on_categorySelector_currentTextChanged(); break;
        case 4: _t->on_inputBeforeConversion_textEdited(); break;
        case 5: _t->on_actionInformatii_triggered(); break;
        case 6: _t->on_actionAddUnit_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject converter::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_converter.data,
      qt_meta_data_converter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *converter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *converter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_converter.stringdata0))
        return static_cast<void*>(const_cast< converter*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int converter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
