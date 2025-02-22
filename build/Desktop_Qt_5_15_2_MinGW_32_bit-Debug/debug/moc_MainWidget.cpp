/****************************************************************************
** Meta object code from reading C++ file 'MainWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../MainWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWidget_t {
    QByteArrayData data[62];
    char stringdata0[1451];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWidget_t qt_meta_stringdata_MainWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWidget"
QT_MOC_LITERAL(1, 11, 20), // "playlist_removeMusic"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 13), // "play_to_favor"
QT_MOC_LITERAL(4, 47, 14), // "local_to_favor"
QT_MOC_LITERAL(5, 62, 17), // "local_to_playlist"
QT_MOC_LITERAL(6, 80, 17), // "favor_to_playlist"
QT_MOC_LITERAL(7, 98, 15), // "namelist_delete"
QT_MOC_LITERAL(8, 114, 21), // "musiclist_removeMusic"
QT_MOC_LITERAL(9, 136, 18), // "musiclist_to_favor"
QT_MOC_LITERAL(10, 155, 21), // "musiclist_to_playlist"
QT_MOC_LITERAL(11, 177, 21), // "background_to_default"
QT_MOC_LITERAL(12, 199, 18), // "background_setting"
QT_MOC_LITERAL(13, 218, 22), // "on_btnCurMusic_clicked"
QT_MOC_LITERAL(14, 241, 24), // "on_btnLocalMusic_clicked"
QT_MOC_LITERAL(15, 266, 24), // "on_btnFavorMusic_clicked"
QT_MOC_LITERAL(16, 291, 18), // "on_btnQuit_clicked"
QT_MOC_LITERAL(17, 310, 17), // "on_btnMin_clicked"
QT_MOC_LITERAL(18, 328, 18), // "on_btnPlay_clicked"
QT_MOC_LITERAL(19, 347, 18), // "on_btnNext_clicked"
QT_MOC_LITERAL(20, 366, 17), // "on_btnPre_clicked"
QT_MOC_LITERAL(21, 384, 22), // "on_btnPlayMode_clicked"
QT_MOC_LITERAL(22, 407, 17), // "on_btnAdd_clicked"
QT_MOC_LITERAL(23, 425, 20), // "on_btnVolume_clicked"
QT_MOC_LITERAL(24, 446, 28), // "on_volumeSlider_valueChanged"
QT_MOC_LITERAL(25, 475, 5), // "value"
QT_MOC_LITERAL(26, 481, 26), // "on_btnAddMusicList_clicked"
QT_MOC_LITERAL(27, 508, 31), // "on_playListWidget_doubleClicked"
QT_MOC_LITERAL(28, 540, 11), // "QModelIndex"
QT_MOC_LITERAL(29, 552, 5), // "index"
QT_MOC_LITERAL(30, 558, 33), // "on_localMusicWidget_doubleCli..."
QT_MOC_LITERAL(31, 592, 33), // "on_favorMusicWidget_doubleCli..."
QT_MOC_LITERAL(32, 626, 44), // "on_playListWidget_customConte..."
QT_MOC_LITERAL(33, 671, 3), // "pos"
QT_MOC_LITERAL(34, 675, 46), // "on_localMusicWidget_customCon..."
QT_MOC_LITERAL(35, 722, 46), // "on_favorMusicWidget_customCon..."
QT_MOC_LITERAL(36, 769, 44), // "on_nameListWidget_customConte..."
QT_MOC_LITERAL(37, 814, 31), // "on_nameListWidget_doubleClicked"
QT_MOC_LITERAL(38, 846, 18), // "on_btnSkin_clicked"
QT_MOC_LITERAL(39, 865, 28), // "on_btnAddtoMusicList_clicked"
QT_MOC_LITERAL(40, 894, 32), // "on_musicListWidget_doubleClicked"
QT_MOC_LITERAL(41, 927, 45), // "on_musicListWidget_customCont..."
QT_MOC_LITERAL(42, 973, 24), // "on_btnAddtoFavor_clicked"
QT_MOC_LITERAL(43, 998, 20), // "on_btnNeaten_clicked"
QT_MOC_LITERAL(44, 1019, 22), // "on_btnNeaten_2_clicked"
QT_MOC_LITERAL(45, 1042, 22), // "on_btnNeaten_3_clicked"
QT_MOC_LITERAL(46, 1065, 19), // "on_btnTitle_clicked"
QT_MOC_LITERAL(47, 1085, 19), // "on_btnLyric_clicked"
QT_MOC_LITERAL(48, 1105, 19), // "on_btnClear_clicked"
QT_MOC_LITERAL(49, 1125, 21), // "on_btnClear_2_clicked"
QT_MOC_LITERAL(50, 1147, 21), // "on_btnClear_3_clicked"
QT_MOC_LITERAL(51, 1169, 21), // "on_btnClear_4_clicked"
QT_MOC_LITERAL(52, 1191, 19), // "on_btnAbout_clicked"
QT_MOC_LITERAL(53, 1211, 24), // "on_btnSortSinger_clicked"
QT_MOC_LITERAL(54, 1236, 23), // "on_btnSortTitle_clicked"
QT_MOC_LITERAL(55, 1260, 26), // "on_btnSortDuration_clicked"
QT_MOC_LITERAL(56, 1287, 26), // "on_btnSortSinger_2_clicked"
QT_MOC_LITERAL(57, 1314, 25), // "on_btnSortTitle_2_clicked"
QT_MOC_LITERAL(58, 1340, 28), // "on_btnSortDuration_2_clicked"
QT_MOC_LITERAL(59, 1369, 26), // "on_btnSortSinger_4_clicked"
QT_MOC_LITERAL(60, 1396, 25), // "on_btnSortTitle_4_clicked"
QT_MOC_LITERAL(61, 1422, 28) // "on_btnSortDuration_4_clicked"

    },
    "MainWidget\0playlist_removeMusic\0\0"
    "play_to_favor\0local_to_favor\0"
    "local_to_playlist\0favor_to_playlist\0"
    "namelist_delete\0musiclist_removeMusic\0"
    "musiclist_to_favor\0musiclist_to_playlist\0"
    "background_to_default\0background_setting\0"
    "on_btnCurMusic_clicked\0on_btnLocalMusic_clicked\0"
    "on_btnFavorMusic_clicked\0on_btnQuit_clicked\0"
    "on_btnMin_clicked\0on_btnPlay_clicked\0"
    "on_btnNext_clicked\0on_btnPre_clicked\0"
    "on_btnPlayMode_clicked\0on_btnAdd_clicked\0"
    "on_btnVolume_clicked\0on_volumeSlider_valueChanged\0"
    "value\0on_btnAddMusicList_clicked\0"
    "on_playListWidget_doubleClicked\0"
    "QModelIndex\0index\0on_localMusicWidget_doubleClicked\0"
    "on_favorMusicWidget_doubleClicked\0"
    "on_playListWidget_customContextMenuRequested\0"
    "pos\0on_localMusicWidget_customContextMenuRequested\0"
    "on_favorMusicWidget_customContextMenuRequested\0"
    "on_nameListWidget_customContextMenuRequested\0"
    "on_nameListWidget_doubleClicked\0"
    "on_btnSkin_clicked\0on_btnAddtoMusicList_clicked\0"
    "on_musicListWidget_doubleClicked\0"
    "on_musicListWidget_customContextMenuRequested\0"
    "on_btnAddtoFavor_clicked\0on_btnNeaten_clicked\0"
    "on_btnNeaten_2_clicked\0on_btnNeaten_3_clicked\0"
    "on_btnTitle_clicked\0on_btnLyric_clicked\0"
    "on_btnClear_clicked\0on_btnClear_2_clicked\0"
    "on_btnClear_3_clicked\0on_btnClear_4_clicked\0"
    "on_btnAbout_clicked\0on_btnSortSinger_clicked\0"
    "on_btnSortTitle_clicked\0"
    "on_btnSortDuration_clicked\0"
    "on_btnSortSinger_2_clicked\0"
    "on_btnSortTitle_2_clicked\0"
    "on_btnSortDuration_2_clicked\0"
    "on_btnSortSinger_4_clicked\0"
    "on_btnSortTitle_4_clicked\0"
    "on_btnSortDuration_4_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      56,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  294,    2, 0x08 /* Private */,
       3,    0,  295,    2, 0x08 /* Private */,
       4,    0,  296,    2, 0x08 /* Private */,
       5,    0,  297,    2, 0x08 /* Private */,
       6,    0,  298,    2, 0x08 /* Private */,
       7,    0,  299,    2, 0x08 /* Private */,
       8,    0,  300,    2, 0x08 /* Private */,
       9,    0,  301,    2, 0x08 /* Private */,
      10,    0,  302,    2, 0x08 /* Private */,
      11,    0,  303,    2, 0x08 /* Private */,
      12,    0,  304,    2, 0x08 /* Private */,
      13,    0,  305,    2, 0x08 /* Private */,
      14,    0,  306,    2, 0x08 /* Private */,
      15,    0,  307,    2, 0x08 /* Private */,
      16,    0,  308,    2, 0x08 /* Private */,
      17,    0,  309,    2, 0x08 /* Private */,
      18,    0,  310,    2, 0x08 /* Private */,
      19,    0,  311,    2, 0x08 /* Private */,
      20,    0,  312,    2, 0x08 /* Private */,
      21,    0,  313,    2, 0x08 /* Private */,
      22,    0,  314,    2, 0x08 /* Private */,
      23,    0,  315,    2, 0x08 /* Private */,
      24,    1,  316,    2, 0x08 /* Private */,
      26,    0,  319,    2, 0x08 /* Private */,
      27,    1,  320,    2, 0x08 /* Private */,
      30,    1,  323,    2, 0x08 /* Private */,
      31,    1,  326,    2, 0x08 /* Private */,
      32,    1,  329,    2, 0x08 /* Private */,
      34,    1,  332,    2, 0x08 /* Private */,
      35,    1,  335,    2, 0x08 /* Private */,
      36,    1,  338,    2, 0x08 /* Private */,
      37,    1,  341,    2, 0x08 /* Private */,
      38,    0,  344,    2, 0x08 /* Private */,
      39,    0,  345,    2, 0x08 /* Private */,
      40,    1,  346,    2, 0x08 /* Private */,
      41,    1,  349,    2, 0x08 /* Private */,
      42,    0,  352,    2, 0x08 /* Private */,
      43,    0,  353,    2, 0x08 /* Private */,
      44,    0,  354,    2, 0x08 /* Private */,
      45,    0,  355,    2, 0x08 /* Private */,
      46,    0,  356,    2, 0x08 /* Private */,
      47,    0,  357,    2, 0x08 /* Private */,
      48,    0,  358,    2, 0x08 /* Private */,
      49,    0,  359,    2, 0x08 /* Private */,
      50,    0,  360,    2, 0x08 /* Private */,
      51,    0,  361,    2, 0x08 /* Private */,
      52,    0,  362,    2, 0x08 /* Private */,
      53,    0,  363,    2, 0x08 /* Private */,
      54,    0,  364,    2, 0x08 /* Private */,
      55,    0,  365,    2, 0x08 /* Private */,
      56,    0,  366,    2, 0x08 /* Private */,
      57,    0,  367,    2, 0x08 /* Private */,
      58,    0,  368,    2, 0x08 /* Private */,
      59,    0,  369,    2, 0x08 /* Private */,
      60,    0,  370,    2, 0x08 /* Private */,
      61,    0,  371,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, QMetaType::QPoint,   33,
    QMetaType::Void, QMetaType::QPoint,   33,
    QMetaType::Void, QMetaType::QPoint,   33,
    QMetaType::Void, QMetaType::QPoint,   33,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, QMetaType::QPoint,   33,
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

void MainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->playlist_removeMusic(); break;
        case 1: _t->play_to_favor(); break;
        case 2: _t->local_to_favor(); break;
        case 3: _t->local_to_playlist(); break;
        case 4: _t->favor_to_playlist(); break;
        case 5: _t->namelist_delete(); break;
        case 6: _t->musiclist_removeMusic(); break;
        case 7: _t->musiclist_to_favor(); break;
        case 8: _t->musiclist_to_playlist(); break;
        case 9: _t->background_to_default(); break;
        case 10: _t->background_setting(); break;
        case 11: _t->on_btnCurMusic_clicked(); break;
        case 12: _t->on_btnLocalMusic_clicked(); break;
        case 13: _t->on_btnFavorMusic_clicked(); break;
        case 14: _t->on_btnQuit_clicked(); break;
        case 15: _t->on_btnMin_clicked(); break;
        case 16: _t->on_btnPlay_clicked(); break;
        case 17: _t->on_btnNext_clicked(); break;
        case 18: _t->on_btnPre_clicked(); break;
        case 19: _t->on_btnPlayMode_clicked(); break;
        case 20: _t->on_btnAdd_clicked(); break;
        case 21: _t->on_btnVolume_clicked(); break;
        case 22: _t->on_volumeSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->on_btnAddMusicList_clicked(); break;
        case 24: _t->on_playListWidget_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 25: _t->on_localMusicWidget_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 26: _t->on_favorMusicWidget_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 27: _t->on_playListWidget_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 28: _t->on_localMusicWidget_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 29: _t->on_favorMusicWidget_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 30: _t->on_nameListWidget_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 31: _t->on_nameListWidget_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 32: _t->on_btnSkin_clicked(); break;
        case 33: _t->on_btnAddtoMusicList_clicked(); break;
        case 34: _t->on_musicListWidget_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 35: _t->on_musicListWidget_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 36: _t->on_btnAddtoFavor_clicked(); break;
        case 37: _t->on_btnNeaten_clicked(); break;
        case 38: _t->on_btnNeaten_2_clicked(); break;
        case 39: _t->on_btnNeaten_3_clicked(); break;
        case 40: _t->on_btnTitle_clicked(); break;
        case 41: _t->on_btnLyric_clicked(); break;
        case 42: _t->on_btnClear_clicked(); break;
        case 43: _t->on_btnClear_2_clicked(); break;
        case 44: _t->on_btnClear_3_clicked(); break;
        case 45: _t->on_btnClear_4_clicked(); break;
        case 46: _t->on_btnAbout_clicked(); break;
        case 47: _t->on_btnSortSinger_clicked(); break;
        case 48: _t->on_btnSortTitle_clicked(); break;
        case 49: _t->on_btnSortDuration_clicked(); break;
        case 50: _t->on_btnSortSinger_2_clicked(); break;
        case 51: _t->on_btnSortTitle_2_clicked(); break;
        case 52: _t->on_btnSortDuration_2_clicked(); break;
        case 53: _t->on_btnSortSinger_4_clicked(); break;
        case 54: _t->on_btnSortTitle_4_clicked(); break;
        case 55: _t->on_btnSortDuration_4_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MainWidget.data,
    qt_meta_data_MainWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 56)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 56;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 56)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 56;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
