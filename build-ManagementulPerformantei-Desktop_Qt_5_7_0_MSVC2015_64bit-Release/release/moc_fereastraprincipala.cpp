/****************************************************************************
** Meta object code from reading C++ file 'fereastraprincipala.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ManagementulPerformantei/fereastraprincipala.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fereastraprincipala.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FereastraPrincipala_t {
    QByteArrayData data[14];
    char stringdata0[277];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FereastraPrincipala_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FereastraPrincipala_t qt_meta_stringdata_FereastraPrincipala = {
    {
QT_MOC_LITERAL(0, 0, 19), // "FereastraPrincipala"
QT_MOC_LITERAL(1, 20, 21), // "on_gestionare_clicked"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 19), // "on_evaluare_clicked"
QT_MOC_LITERAL(4, 63, 21), // "on_componente_clicked"
QT_MOC_LITERAL(5, 85, 20), // "on_strategie_clicked"
QT_MOC_LITERAL(6, 106, 20), // "on_obiective_clicked"
QT_MOC_LITERAL(7, 127, 21), // "on_management_clicked"
QT_MOC_LITERAL(8, 149, 21), // "on_indicatori_clicked"
QT_MOC_LITERAL(9, 171, 23), // "on_imbunatatire_clicked"
QT_MOC_LITERAL(10, 195, 20), // "on_raportare_clicked"
QT_MOC_LITERAL(11, 216, 18), // "on_inapoi1_clicked"
QT_MOC_LITERAL(12, 235, 18), // "on_inapoi2_clicked"
QT_MOC_LITERAL(13, 254, 22) // "on_schimbauser_clicked"

    },
    "FereastraPrincipala\0on_gestionare_clicked\0"
    "\0on_evaluare_clicked\0on_componente_clicked\0"
    "on_strategie_clicked\0on_obiective_clicked\0"
    "on_management_clicked\0on_indicatori_clicked\0"
    "on_imbunatatire_clicked\0on_raportare_clicked\0"
    "on_inapoi1_clicked\0on_inapoi2_clicked\0"
    "on_schimbauser_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FereastraPrincipala[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void FereastraPrincipala::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FereastraPrincipala *_t = static_cast<FereastraPrincipala *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_gestionare_clicked(); break;
        case 1: _t->on_evaluare_clicked(); break;
        case 2: _t->on_componente_clicked(); break;
        case 3: _t->on_strategie_clicked(); break;
        case 4: _t->on_obiective_clicked(); break;
        case 5: _t->on_management_clicked(); break;
        case 6: _t->on_indicatori_clicked(); break;
        case 7: _t->on_imbunatatire_clicked(); break;
        case 8: _t->on_raportare_clicked(); break;
        case 9: _t->on_inapoi1_clicked(); break;
        case 10: _t->on_inapoi2_clicked(); break;
        case 11: _t->on_schimbauser_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FereastraPrincipala::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FereastraPrincipala.data,
      qt_meta_data_FereastraPrincipala,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FereastraPrincipala::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FereastraPrincipala::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FereastraPrincipala.stringdata0))
        return static_cast<void*>(const_cast< FereastraPrincipala*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int FereastraPrincipala::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
