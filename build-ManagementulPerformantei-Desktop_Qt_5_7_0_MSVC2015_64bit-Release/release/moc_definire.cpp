/****************************************************************************
** Meta object code from reading C++ file 'definire.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ManagementulPerformantei/definire.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'definire.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Definire_t {
    QByteArrayData data[15];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Definire_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Definire_t qt_meta_stringdata_Definire = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Definire"
QT_MOC_LITERAL(1, 9, 19), // "on_salveaza_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 19), // "on_anuleaza_clicked"
QT_MOC_LITERAL(4, 50, 18), // "on_inchide_clicked"
QT_MOC_LITERAL(5, 69, 25), // "on_misiuneEdit_textEdited"
QT_MOC_LITERAL(6, 95, 4), // "arg1"
QT_MOC_LITERAL(7, 100, 36), // "on_misiuneEdit_cursorPosition..."
QT_MOC_LITERAL(8, 137, 4), // "arg2"
QT_MOC_LITERAL(9, 142, 25), // "on_viziuneEdit_textEdited"
QT_MOC_LITERAL(10, 168, 36), // "on_viziuneEdit_cursorPosition..."
QT_MOC_LITERAL(11, 205, 24), // "on_valoriEdit_textEdited"
QT_MOC_LITERAL(12, 230, 35), // "on_valoriEdit_cursorPositionC..."
QT_MOC_LITERAL(13, 266, 21), // "on_strEdit_textEdited"
QT_MOC_LITERAL(14, 288, 32) // "on_strEdit_cursorPositionChanged"

    },
    "Definire\0on_salveaza_clicked\0\0"
    "on_anuleaza_clicked\0on_inchide_clicked\0"
    "on_misiuneEdit_textEdited\0arg1\0"
    "on_misiuneEdit_cursorPositionChanged\0"
    "arg2\0on_viziuneEdit_textEdited\0"
    "on_viziuneEdit_cursorPositionChanged\0"
    "on_valoriEdit_textEdited\0"
    "on_valoriEdit_cursorPositionChanged\0"
    "on_strEdit_textEdited\0"
    "on_strEdit_cursorPositionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Definire[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    1,   72,    2, 0x08 /* Private */,
       7,    2,   75,    2, 0x08 /* Private */,
       9,    1,   80,    2, 0x08 /* Private */,
      10,    2,   83,    2, 0x08 /* Private */,
      11,    1,   88,    2, 0x08 /* Private */,
      12,    2,   91,    2, 0x08 /* Private */,
      13,    1,   96,    2, 0x08 /* Private */,
      14,    2,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    8,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    8,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    8,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    8,

       0        // eod
};

void Definire::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Definire *_t = static_cast<Definire *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_salveaza_clicked(); break;
        case 1: _t->on_anuleaza_clicked(); break;
        case 2: _t->on_inchide_clicked(); break;
        case 3: _t->on_misiuneEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_misiuneEdit_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->on_viziuneEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_viziuneEdit_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->on_valoriEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_valoriEdit_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->on_strEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_strEdit_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject Definire::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Definire.data,
      qt_meta_data_Definire,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Definire::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Definire::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Definire.stringdata0))
        return static_cast<void*>(const_cast< Definire*>(this));
    return QDialog::qt_metacast(_clname);
}

int Definire::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
