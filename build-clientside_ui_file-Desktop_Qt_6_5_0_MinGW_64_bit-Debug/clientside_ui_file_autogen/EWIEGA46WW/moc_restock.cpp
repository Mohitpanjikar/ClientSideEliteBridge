/****************************************************************************
** Meta object code from reading C++ file 'restock.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../clientside_ui_file/restock.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'restock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSRestockENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSRestockENDCLASS = QtMocHelpers::stringData(
    "Restock",
    "on_pushButton_load_table_clicked",
    "",
    "on_pushButton_clicked",
    "on_tableWidget_cellActivated",
    "row",
    "column",
    "on_label_6_linkActivated",
    "link",
    "on_pushButton_load_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRestockENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[8];
    char stringdata1[33];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[29];
    char stringdata5[4];
    char stringdata6[7];
    char stringdata7[25];
    char stringdata8[5];
    char stringdata9[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRestockENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRestockENDCLASS_t qt_meta_stringdata_CLASSRestockENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "Restock"
        QT_MOC_LITERAL(8, 32),  // "on_pushButton_load_table_clicked"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(64, 28),  // "on_tableWidget_cellActivated"
        QT_MOC_LITERAL(93, 3),  // "row"
        QT_MOC_LITERAL(97, 6),  // "column"
        QT_MOC_LITERAL(104, 24),  // "on_label_6_linkActivated"
        QT_MOC_LITERAL(129, 4),  // "link"
        QT_MOC_LITERAL(134, 26)   // "on_pushButton_load_clicked"
    },
    "Restock",
    "on_pushButton_load_table_clicked",
    "",
    "on_pushButton_clicked",
    "on_tableWidget_cellActivated",
    "row",
    "column",
    "on_label_6_linkActivated",
    "link",
    "on_pushButton_load_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRestockENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    2,   46,    2, 0x08,    3 /* Private */,
       7,    1,   51,    2, 0x08,    6 /* Private */,
       9,    0,   54,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Restock::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSRestockENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRestockENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRestockENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Restock, std::true_type>,
        // method 'on_pushButton_load_table_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableWidget_cellActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_label_6_linkActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_pushButton_load_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Restock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Restock *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_load_table_clicked(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_tableWidget_cellActivated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
//        case 3: _t->on_label_6_linkActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break
        case 3: _t->on_pushButton_load_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *Restock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Restock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRestockENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Restock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
