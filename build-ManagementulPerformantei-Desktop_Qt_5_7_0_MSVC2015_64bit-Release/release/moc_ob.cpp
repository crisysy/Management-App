/****************************************************************************
** Meta object code from reading C++ file 'ob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ManagementulPerformantei/ob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Ob_t {
    QByteArrayData data[8];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Ob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Ob_t qt_meta_stringdata_Ob = {
    {
QT_MOC_LITERAL(0, 0, 2), // "Ob"
QT_MOC_LITERAL(1, 3, 19), // "on_addobstr_clicked"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 22), // "on_addobproces_clicked"
QT_MOC_LITERAL(4, 47, 23), // "on_addobagentie_clicked"
QT_MOC_LITERAL(5, 71, 17), // "on_iesire_clicked"
QT_MOC_LITERAL(6, 89, 19), // "on_salveaza_clicked"
QT_MOC_LITERAL(7, 109, 19) // "on_anuleaza_clicked"

    },
    "Ob\0on_addobstr_clicked\0\0on_addobproces_clicked\0"
    "on_addobagentie_clicked\0on_iesire_clicked\0"
    "on_salveaza_clicked\0on_anuleaza_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Ob[] = {

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

void Ob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Ob *_t = static_cast<Ob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_addobstr_clicked(); break;
        case 1: _t->on_addobproces_clicked(); break;
        case 2: _t->on_addobagentie_clicked(); break;
        case 3: _t->on_iesire_clicked(); break;
        case 4: _t->on_salveaza_clicked(); break;
        case 5: _t->on_anuleaza_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Ob::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Ob.data,
      qt_meta_data_Ob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Ob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Ob.stringdata0))
        return static_cast<void*>(const_cast< Ob*>(this));
    return QDialog::qt_metacast(_clname);
}

int Ob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
