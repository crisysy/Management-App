/****************************************************************************
** Meta object code from reading C++ file 'riscuri.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ManagementulPerformantei/riscuri.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'riscuri.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Riscuri_t {
    QByteArrayData data[10];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Riscuri_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Riscuri_t qt_meta_stringdata_Riscuri = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Riscuri"
QT_MOC_LITERAL(1, 8, 18), // "on_addrisc_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 18), // "on_aclient_clicked"
QT_MOC_LITERAL(4, 47, 15), // "on_rfin_clicked"
QT_MOC_LITERAL(5, 63, 17), // "on_iesire_clicked"
QT_MOC_LITERAL(6, 81, 20), // "on_salveaza1_clicked"
QT_MOC_LITERAL(7, 102, 20), // "on_anuleaza1_clicked"
QT_MOC_LITERAL(8, 123, 20), // "on_salveaza2_clicked"
QT_MOC_LITERAL(9, 144, 20) // "on_anuleaza2_clicked"

    },
    "Riscuri\0on_addrisc_clicked\0\0"
    "on_aclient_clicked\0on_rfin_clicked\0"
    "on_iesire_clicked\0on_salveaza1_clicked\0"
    "on_anuleaza1_clicked\0on_salveaza2_clicked\0"
    "on_anuleaza2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Riscuri[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Riscuri::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Riscuri *_t = static_cast<Riscuri *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_addrisc_clicked(); break;
        case 1: _t->on_aclient_clicked(); break;
        case 2: _t->on_rfin_clicked(); break;
        case 3: _t->on_iesire_clicked(); break;
        case 4: _t->on_salveaza1_clicked(); break;
        case 5: _t->on_anuleaza1_clicked(); break;
        case 6: _t->on_salveaza2_clicked(); break;
        case 7: _t->on_anuleaza2_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Riscuri::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Riscuri.data,
      qt_meta_data_Riscuri,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Riscuri::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Riscuri::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Riscuri.stringdata0))
        return static_cast<void*>(const_cast< Riscuri*>(this));
    return QDialog::qt_metacast(_clname);
}

int Riscuri::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE