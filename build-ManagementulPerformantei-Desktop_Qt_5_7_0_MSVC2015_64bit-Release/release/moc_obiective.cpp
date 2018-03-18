/****************************************************************************
** Meta object code from reading C++ file 'obiective.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ManagementulPerformantei/obiective.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'obiective.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Obiective_t {
    QByteArrayData data[8];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Obiective_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Obiective_t qt_meta_stringdata_Obiective = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Obiective"
QT_MOC_LITERAL(1, 10, 17), // "on_inapoi_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 18), // "on_procese_clicked"
QT_MOC_LITERAL(4, 48, 13), // "on_ob_clicked"
QT_MOC_LITERAL(5, 62, 13), // "on_cf_clicked"
QT_MOC_LITERAL(6, 76, 18), // "on_individ_clicked"
QT_MOC_LITERAL(7, 95, 19) // "on_cotidian_clicked"

    },
    "Obiective\0on_inapoi_clicked\0\0"
    "on_procese_clicked\0on_ob_clicked\0"
    "on_cf_clicked\0on_individ_clicked\0"
    "on_cotidian_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Obiective[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Obiective::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Obiective *_t = static_cast<Obiective *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_inapoi_clicked(); break;
        case 1: _t->on_procese_clicked(); break;
        case 2: _t->on_ob_clicked(); break;
        case 3: _t->on_cf_clicked(); break;
        case 4: _t->on_individ_clicked(); break;
        case 5: _t->on_cotidian_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Obiective::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Obiective.data,
      qt_meta_data_Obiective,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Obiective::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Obiective::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Obiective.stringdata0))
        return static_cast<void*>(const_cast< Obiective*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Obiective::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
