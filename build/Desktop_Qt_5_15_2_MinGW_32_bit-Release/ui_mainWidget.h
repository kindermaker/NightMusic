/********************************************************************************
** Form generated from reading UI file 'mainWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <LyricWidget.h>
#include <MusicListWidget.h>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnPre;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnPlay;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnNext;
    QSlider *positionSlider;
    QLabel *positionLabel;
    QPushButton *btnPlayMode;
    QWidget *layoutWidget1;
    QHBoxLayout *title_btn_horizontalLayout;
    QPushButton *btnMin;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnQuit;
    QLabel *infoLabel;
    QLabel *coverLabel;
    QSlider *volumeSlider;
    QPushButton *btnVolume;
    QStackedWidget *stackedWidget;
    QWidget *page_0;
    MusicListWidget *playListWidget;
    QLabel *titleLabel_2;
    QPushButton *btnClear;
    QWidget *page_1;
    MusicListWidget *localMusicWidget;
    QLabel *titleLabel_3;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnSortSinger;
    QPushButton *btnSortTitle;
    QPushButton *btnSortDuration;
    QPushButton *btnNeaten;
    QPushButton *btnClear_2;
    QWidget *page_2;
    QLabel *titleLabel_4;
    MusicListWidget *favorMusicWidget;
    QPushButton *btnAddtoFavor;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnSortSinger_2;
    QPushButton *btnSortTitle_2;
    QPushButton *btnSortDuration_2;
    QPushButton *btnNeaten_2;
    QPushButton *btnClear_3;
    QWidget *page_3;
    MusicListWidget *musicListWidget;
    QLabel *musicListNameLabel;
    QPushButton *btnAddtoMusicList;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnSortSinger_4;
    QPushButton *btnSortTitle_4;
    QPushButton *btnSortDuration_4;
    QPushButton *btnNeaten_3;
    QPushButton *btnClear_4;
    QWidget *page_4;
    QLabel *musicTitleLabel;
    QLabel *musicAlbumLabel;
    QLabel *musicAuthorLabel;
    LyricWidget *lyricWidget;
    QListWidget *nameListWidget;
    QLabel *titleLabel_5;
    QPushButton *btnAddMusicList;
    QLabel *label;
    QPushButton *btnSkin;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btnTitle;
    QLabel *titleLabel;
    QPushButton *btnLyric;
    QPushButton *btnAbout;
    QPushButton *btnAdd;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout;
    QPushButton *btnCurMusic;
    QPushButton *btnLocalMusic;
    QPushButton *btnFavorMusic;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1200, 800);
        Widget->setMinimumSize(QSize(1200, 800));
        Widget->setMaximumSize(QSize(1200, 800));
        Widget->setAcceptDrops(true);
        Widget->setStyleSheet(QString::fromUtf8("QWidget#Widget{\n"
"border-radius:10px;\n"
"border-image: url(:/image/image/background/default.jpg);\n"
"}\n"
""));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(580, 710, 311, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnPre = new QPushButton(layoutWidget);
        btnPre->setObjectName(QString::fromUtf8("btnPre"));
        btnPre->setMinimumSize(QSize(0, 35));
        btnPre->setCursor(QCursor(Qt::PointingHandCursor));
        btnPre->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-image: url(:/image/image/image/pre.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"}\n"
"QPushButton:hover{\n"
"background-image: url(:/image/image/image-hover/pre-hover.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:pressed{\n"
"background-image: url(:/image/image/image/pre.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
""));

        horizontalLayout->addWidget(btnPre);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnPlay = new QPushButton(layoutWidget);
        btnPlay->setObjectName(QString::fromUtf8("btnPlay"));
        btnPlay->setMinimumSize(QSize(0, 35));
        btnPlay->setCursor(QCursor(Qt::PointingHandCursor));
        btnPlay->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-image: url(:/image/image/image/pase.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-image: url(:/image/image/image-hover/pase-hover.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-image: url(:/image/image/image/pase.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
""));
        btnPlay->setFlat(false);

        horizontalLayout->addWidget(btnPlay);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnNext = new QPushButton(layoutWidget);
        btnNext->setObjectName(QString::fromUtf8("btnNext"));
        btnNext->setMinimumSize(QSize(0, 35));
        btnNext->setCursor(QCursor(Qt::PointingHandCursor));
        btnNext->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-image: url(:/image/image/image/next.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"}\n"
"QPushButton:hover{\n"
"background-image: url(:/image/image/image-hover/next-hover.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:pressed{\n"
"background-image: url(:/image/image/image/next.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
""));

        horizontalLayout->addWidget(btnNext);

        positionSlider = new QSlider(Widget);
        positionSlider->setObjectName(QString::fromUtf8("positionSlider"));
        positionSlider->setEnabled(false);
        positionSlider->setGeometry(QRect(470, 670, 521, 21));
        QFont font;
        font.setPointSize(13);
        positionSlider->setFont(font);
        positionSlider->setCursor(QCursor(Qt::PointingHandCursor));
        positionSlider->setStyleSheet(QString::fromUtf8("QSlider::add-page:Horizontal\n"
"{     \n"
"background-color: rgba(255, 255, 255,150);\n"
"height:4px;  \n"
"} \n"
"QSlider::sub-page:Horizontal   \n"
"{  \n"
"background-color: rgb(255, 255, 255);\n"
"height:4px;\n"
"}\n"
"QSlider::groove:Horizontal   \n"
"{ \n"
"background:transparent; \n"
"height:4px;\n"
"}  \n"
"QSlider::handle:Horizontal\n"
"{ \n"
"height:16px; \n"
"width:16px; \n"
"border-image:url(:/image/image/image/sliderHandle.png);\n"
"margin: -6 0px; \n"
"}\n"
"      \n"
""));
        positionSlider->setSingleStep(10);
        positionSlider->setOrientation(Qt::Horizontal);
        positionSlider->setTickPosition(QSlider::NoTicks);
        positionLabel = new QLabel(Widget);
        positionLabel->setObjectName(QString::fromUtf8("positionLabel"));
        positionLabel->setEnabled(false);
        positionLabel->setGeometry(QRect(990, 670, 141, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(false);
        positionLabel->setFont(font1);
        positionLabel->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));
        positionLabel->setAlignment(Qt::AlignCenter);
        btnPlayMode = new QPushButton(Widget);
        btnPlayMode->setObjectName(QString::fromUtf8("btnPlayMode"));
        btnPlayMode->setGeometry(QRect(490, 720, 35, 41));
        btnPlayMode->setMinimumSize(QSize(35, 35));
        btnPlayMode->setCursor(QCursor(Qt::PointingHandCursor));
        btnPlayMode->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-image: url(:/image/image/image/loop.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-image: url(:/image/image/image-hover/loop-hover.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-image: url(:/image/image/image/loop.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
""));
        btnPlayMode->setFlat(false);
        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(1100, 0, 91, 51));
        title_btn_horizontalLayout = new QHBoxLayout(layoutWidget1);
        title_btn_horizontalLayout->setSpacing(0);
        title_btn_horizontalLayout->setContentsMargins(11, 11, 11, 11);
        title_btn_horizontalLayout->setObjectName(QString::fromUtf8("title_btn_horizontalLayout"));
        title_btn_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnMin = new QPushButton(layoutWidget1);
        btnMin->setObjectName(QString::fromUtf8("btnMin"));
        btnMin->setMinimumSize(QSize(35, 35));
        btnMin->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:0px;\n"
"background-image: url(:/image/image/image/min.png);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border-radius: 10px; \n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255,100);\n"
"border-radius: 10px; \n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgba(95, 95, 95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-radius: 10px; \n"
"border-style:inset;\n"
"color:rgba(0,0,0,100);\n"
"}\n"
"\n"
""));

        title_btn_horizontalLayout->addWidget(btnMin);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        title_btn_horizontalLayout->addItem(horizontalSpacer_3);

        line = new QFrame(layoutWidget1);
        line->setObjectName(QString::fromUtf8("line"));
        line->setEnabled(false);
        line->setMaximumSize(QSize(16777215, 20));
        line->setStyleSheet(QString::fromUtf8("color: rgb(248, 246, 231);"));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(2);
        line->setFrameShape(QFrame::VLine);

        title_btn_horizontalLayout->addWidget(line);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        title_btn_horizontalLayout->addItem(horizontalSpacer_4);

        btnQuit = new QPushButton(layoutWidget1);
        btnQuit->setObjectName(QString::fromUtf8("btnQuit"));
        btnQuit->setMinimumSize(QSize(35, 35));
        btnQuit->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:0px;\n"
"background-image: url(:/image/image/image/quit.png);\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"border-radius: 10px; \n"
"\n"
"}\n"
"QPushButton:hover{\n"
"border-radius: 10px; \n"
"background-color: rgba(230,0,0,0.5);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgba(95, 95, 95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-radius: 10px; \n"
"border-style:inset;\n"
"color:rgba(0,0,0,100);\n"
"\n"
"}\n"
""));

        title_btn_horizontalLayout->addWidget(btnQuit);

        infoLabel = new QLabel(Widget);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        infoLabel->setEnabled(true);
        infoLabel->setGeometry(QRect(476, 640, 631, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font2.setBold(true);
        infoLabel->setFont(font2);
        infoLabel->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));
        coverLabel = new QLabel(Widget);
        coverLabel->setObjectName(QString::fromUtf8("coverLabel"));
        coverLabel->setGeometry(QRect(280, 620, 161, 161));
        coverLabel->setPixmap(QPixmap(QString::fromUtf8(":/image/image/image/non-music.png")));
        coverLabel->setScaledContents(true);
        volumeSlider = new QSlider(Widget);
        volumeSlider->setObjectName(QString::fromUtf8("volumeSlider"));
        volumeSlider->setGeometry(QRect(1140, 540, 35, 170));
        volumeSlider->setMinimumSize(QSize(35, 170));
        volumeSlider->setStyleSheet(QString::fromUtf8(" QSlider \n"
"    {  \n"
"        background-color: rgba(255,255,255,0.2);\n"
"        min-width:5px; \n"
"        max-width:5px;\n"
"		border-radius: 16px; \n"
"        border:15px solid rgba(255,255,255,0.2); \n"
"    }\n"
"     QSlider::add-page:vertical\n"
"     {      \n"
"       \n"
"	    background-color: rgb(255,255,255);\n"
"        width:4px;\n"
"     }\n"
"     QSlider::sub-page:vertical  \n"
"    {\n"
"        background-color: rgba(255,255,255,0.5); \n"
"        width:4px;\n"
"     }\n"
"    QSlider::groove:vertical \n"
"    {\n"
"        background:transparent;\n"
"        width:6px;\n"
"    }\n"
"    QSlider::handle:vertical \n"
"    {\n"
"         height: 13px;\n"
"        width:13px;\n"
" \n"
" margin: -0 -4px; \n"
"	border-image: url(:/image/image/image/volumeHandle.png);\n"
"     }"));
        volumeSlider->setMaximum(100);
        volumeSlider->setValue(100);
        volumeSlider->setOrientation(Qt::Vertical);
        btnVolume = new QPushButton(Widget);
        btnVolume->setObjectName(QString::fromUtf8("btnVolume"));
        btnVolume->setGeometry(QRect(1130, 720, 51, 41));
        btnVolume->setMinimumSize(QSize(35, 35));
        btnVolume->setCursor(QCursor(Qt::PointingHandCursor));
        btnVolume->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-image: url(:/image/image/image/music-voice.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border-radius: 10px; \n"
"border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-image: url(:/image/image/image-hover/music-voice-hover.png);\n"
"background-repeat:no-repeat;\n"
"border-radius: 10px; \n"
"background-position:center center;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-image: url(:/image/image/image/music-voice.png);\n"
"background-repeat:no-repeat;\n"
"border-radius: 10px; \n"
"background-position:center center;\n"
"}\n"
""));
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(280, 70, 831, 531));
        page_0 = new QWidget();
        page_0->setObjectName(QString::fromUtf8("page_0"));
        playListWidget = new MusicListWidget(page_0);
        playListWidget->setObjectName(QString::fromUtf8("playListWidget"));
        playListWidget->setGeometry(QRect(0, 40, 831, 491));
        QFont font3;
        font3.setBold(true);
        playListWidget->setFont(font3);
        playListWidget->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 50);\n"
""));
        playListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        playListWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        playListWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        playListWidget->setProperty("isWrapping", QVariant(false));
        playListWidget->setWordWrap(false);
        playListWidget->setSelectionRectVisible(false);
        playListWidget->setSortingEnabled(false);
        titleLabel_2 = new QLabel(page_0);
        titleLabel_2->setObjectName(QString::fromUtf8("titleLabel_2"));
        titleLabel_2->setEnabled(true);
        titleLabel_2->setGeometry(QRect(0, 0, 111, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setItalic(false);
        titleLabel_2->setFont(font4);
        titleLabel_2->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
""));
        titleLabel_2->setAlignment(Qt::AlignCenter);
        btnClear = new QPushButton(page_0);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setGeometry(QRect(100, 0, 41, 41));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font5.setPointSize(10);
        font5.setBold(true);
        btnClear->setFont(font5);
        btnClear->setCursor(QCursor(Qt::PointingHandCursor));
        btnClear->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"\n"
"border-radius: 10px; \n"
"}\n"
"QPushButton:hover{\n"
"\n"
"	border-radius: 10px; \n"
"}\n"
"QPushButton:pressed{\n"
"\n"
"border-radius: 10px; \n"
"\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/image/image/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnClear->setIcon(icon);
        btnClear->setIconSize(QSize(30, 30));
        btnClear->setFlat(true);
        stackedWidget->addWidget(page_0);
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        localMusicWidget = new MusicListWidget(page_1);
        localMusicWidget->setObjectName(QString::fromUtf8("localMusicWidget"));
        localMusicWidget->setGeometry(QRect(0, 40, 831, 491));
        localMusicWidget->setFont(font3);
        localMusicWidget->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 50);\n"
""));
        localMusicWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        localMusicWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        localMusicWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        localMusicWidget->setProperty("isWrapping", QVariant(false));
        localMusicWidget->setWordWrap(false);
        localMusicWidget->setSelectionRectVisible(false);
        localMusicWidget->setSortingEnabled(false);
        titleLabel_3 = new QLabel(page_1);
        titleLabel_3->setObjectName(QString::fromUtf8("titleLabel_3"));
        titleLabel_3->setEnabled(true);
        titleLabel_3->setGeometry(QRect(0, 0, 111, 41));
        titleLabel_3->setFont(font4);
        titleLabel_3->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
""));
        titleLabel_3->setAlignment(Qt::AlignCenter);
        layoutWidget2 = new QWidget(page_1);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(670, 0, 155, 43));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnSortSinger = new QPushButton(layoutWidget2);
        btnSortSinger->setObjectName(QString::fromUtf8("btnSortSinger"));
        btnSortSinger->setFont(font5);
        btnSortSinger->setCursor(QCursor(Qt::PointingHandCursor));
        btnSortSinger->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"\n"
"border-radius: 10px; \n"
"}\n"
"QPushButton:hover{\n"
"\n"
"	border-radius: 10px; \n"
"}\n"
"QPushButton:pressed{\n"
"\n"
"border-radius: 10px; \n"
"\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/image/image/singer.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSortSinger->setIcon(icon1);
        btnSortSinger->setIconSize(QSize(30, 30));
        btnSortSinger->setFlat(true);

        horizontalLayout_2->addWidget(btnSortSinger);

        btnSortTitle = new QPushButton(layoutWidget2);
        btnSortTitle->setObjectName(QString::fromUtf8("btnSortTitle"));
        btnSortTitle->setFont(font5);
        btnSortTitle->setCursor(QCursor(Qt::PointingHandCursor));
        btnSortTitle->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"\n"
"border-radius: 10px; \n"
"}\n"
"QPushButton:hover{\n"
"\n"
"	border-radius: 10px; \n"
"}\n"
"QPushButton:pressed{\n"
"\n"
"border-radius: 10px; \n"
"\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/image/image/sort-alpha-asc_ea48_ether.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSortTitle->setIcon(icon2);
        btnSortTitle->setIconSize(QSize(30, 30));
        btnSortTitle->setFlat(true);

        horizontalLayout_2->addWidget(btnSortTitle);

        btnSortDuration = new QPushButton(layoutWidget2);
        btnSortDuration->setObjectName(QString::fromUtf8("btnSortDuration"));
        btnSortDuration->setFont(font5);
        btnSortDuration->setCursor(QCursor(Qt::PointingHandCursor));
        btnSortDuration->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"\n"
"border-radius: 10px; \n"
"}\n"
"QPushButton:hover{\n"
"\n"
"	border-radius: 10px; \n"
"}\n"
"QPushButton:pressed{\n"
"\n"
"border-radius: 10px; \n"
"\n"
"}\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/image/image/duration.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSortDuration->setIcon(icon3);
        btnSortDuration->setIconSize(QSize(30, 30));
        btnSortDuration->setFlat(true);

        horizontalLayout_2->addWidget(btnSortDuration);

        btnNeaten = new QPushButton(page_1);
        btnNeaten->setObjectName(QString::fromUtf8("btnNeaten"));
        btnNeaten->setGeometry(QRect(590, 0, 41, 41));
        btnNeaten->setFont(font5);
        btnNeaten->setCursor(QCursor(Qt::PointingHandCursor));
        btnNeaten->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"\n"
"border-radius: 10px; \n"
"}\n"
"QPushButton:hover{\n"
"\n"
"	border-radius: 10px; \n"
"}\n"
"QPushButton:pressed{\n"
"\n"
"border-radius: 10px; \n"
"\n"
"}\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/image/image/remove_dup.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnNeaten->setIcon(icon4);
        btnNeaten->setIconSize(QSize(30, 30));
        btnNeaten->setFlat(true);
        btnClear_2 = new QPushButton(page_1);
        btnClear_2->setObjectName(QString::fromUtf8("btnClear_2"));
        btnClear_2->setGeometry(QRect(100, 0, 41, 41));
        btnClear_2->setFont(font5);
        btnClear_2->setCursor(QCursor(Qt::PointingHandCursor));
        btnClear_2->setStyleSheet(QString::fromUtf8(""));
        btnClear_2->setIcon(icon);
        btnClear_2->setIconSize(QSize(30, 30));
        btnClear_2->setFlat(true);
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        titleLabel_4 = new QLabel(page_2);
        titleLabel_4->setObjectName(QString::fromUtf8("titleLabel_4"));
        titleLabel_4->setEnabled(true);
        titleLabel_4->setGeometry(QRect(30, 0, 71, 41));
        titleLabel_4->setFont(font4);
        titleLabel_4->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
""));
        titleLabel_4->setAlignment(Qt::AlignCenter);
        favorMusicWidget = new MusicListWidget(page_2);
        favorMusicWidget->setObjectName(QString::fromUtf8("favorMusicWidget"));
        favorMusicWidget->setGeometry(QRect(0, 40, 831, 491));
        favorMusicWidget->setFont(font3);
        favorMusicWidget->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 50);\n"
""));
        favorMusicWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        favorMusicWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        favorMusicWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        favorMusicWidget->setProperty("isWrapping", QVariant(false));
        favorMusicWidget->setWordWrap(false);
        favorMusicWidget->setSelectionRectVisible(false);
        favorMusicWidget->setSortingEnabled(false);
        btnAddtoFavor = new QPushButton(page_2);
        btnAddtoFavor->setObjectName(QString::fromUtf8("btnAddtoFavor"));
        btnAddtoFavor->setGeometry(QRect(0, 0, 35, 41));
        btnAddtoFavor->setMinimumSize(QSize(35, 35));
        btnAddtoFavor->setCursor(QCursor(Qt::PointingHandCursor));
        btnAddtoFavor->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-image: url(:/image/image/image/add.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"border-radius: 10px; \n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-image: url(:/image/image/image-hover/add-hover.png);\n"
"background-repeat:no-repeat;\n"
"border-radius: 10px; \n"
"background-position:center center;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-image: url(:/image/image/image/add.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border-radius: 10px; \n"
"}\n"
""));
        layoutWidget_2 = new QWidget(page_2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(670, 0, 155, 43));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnSortSinger_2 = new QPushButton(layoutWidget_2);
        btnSortSinger_2->setObjectName(QString::fromUtf8("btnSortSinger_2"));
        btnSortSinger_2->setFont(font5);
        btnSortSinger_2->setCursor(QCursor(Qt::PointingHandCursor));
        btnSortSinger_2->setStyleSheet(QString::fromUtf8(""));
        btnSortSinger_2->setIcon(icon1);
        btnSortSinger_2->setIconSize(QSize(30, 30));
        btnSortSinger_2->setFlat(true);

        horizontalLayout_3->addWidget(btnSortSinger_2);

        btnSortTitle_2 = new QPushButton(layoutWidget_2);
        btnSortTitle_2->setObjectName(QString::fromUtf8("btnSortTitle_2"));
        btnSortTitle_2->setFont(font5);
        btnSortTitle_2->setCursor(QCursor(Qt::PointingHandCursor));
        btnSortTitle_2->setStyleSheet(QString::fromUtf8(""));
        btnSortTitle_2->setIcon(icon2);
        btnSortTitle_2->setIconSize(QSize(30, 30));
        btnSortTitle_2->setFlat(true);

        horizontalLayout_3->addWidget(btnSortTitle_2);

        btnSortDuration_2 = new QPushButton(layoutWidget_2);
        btnSortDuration_2->setObjectName(QString::fromUtf8("btnSortDuration_2"));
        btnSortDuration_2->setFont(font5);
        btnSortDuration_2->setCursor(QCursor(Qt::PointingHandCursor));
        btnSortDuration_2->setStyleSheet(QString::fromUtf8(""));
        btnSortDuration_2->setIcon(icon3);
        btnSortDuration_2->setIconSize(QSize(30, 30));
        btnSortDuration_2->setFlat(true);

        horizontalLayout_3->addWidget(btnSortDuration_2);

        btnNeaten_2 = new QPushButton(page_2);
        btnNeaten_2->setObjectName(QString::fromUtf8("btnNeaten_2"));
        btnNeaten_2->setGeometry(QRect(590, 0, 41, 41));
        btnNeaten_2->setFont(font5);
        btnNeaten_2->setCursor(QCursor(Qt::PointingHandCursor));
        btnNeaten_2->setStyleSheet(QString::fromUtf8(""));
        btnNeaten_2->setIcon(icon4);
        btnNeaten_2->setIconSize(QSize(30, 30));
        btnNeaten_2->setFlat(true);
        btnClear_3 = new QPushButton(page_2);
        btnClear_3->setObjectName(QString::fromUtf8("btnClear_3"));
        btnClear_3->setGeometry(QRect(100, 0, 41, 41));
        btnClear_3->setFont(font5);
        btnClear_3->setCursor(QCursor(Qt::PointingHandCursor));
        btnClear_3->setStyleSheet(QString::fromUtf8(""));
        btnClear_3->setIcon(icon);
        btnClear_3->setIconSize(QSize(30, 30));
        btnClear_3->setFlat(true);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        musicListWidget = new MusicListWidget(page_3);
        musicListWidget->setObjectName(QString::fromUtf8("musicListWidget"));
        musicListWidget->setGeometry(QRect(0, 40, 831, 491));
        musicListWidget->setFont(font3);
        musicListWidget->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 50);\n"
""));
        musicListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        musicListWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        musicListWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        musicListWidget->setProperty("isWrapping", QVariant(false));
        musicListWidget->setWordWrap(false);
        musicListWidget->setSelectionRectVisible(false);
        musicListWidget->setSortingEnabled(false);
        musicListNameLabel = new QLabel(page_3);
        musicListNameLabel->setObjectName(QString::fromUtf8("musicListNameLabel"));
        musicListNameLabel->setEnabled(true);
        musicListNameLabel->setGeometry(QRect(90, 0, 731, 41));
        musicListNameLabel->setFont(font4);
        musicListNameLabel->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
""));
        musicListNameLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        btnAddtoMusicList = new QPushButton(page_3);
        btnAddtoMusicList->setObjectName(QString::fromUtf8("btnAddtoMusicList"));
        btnAddtoMusicList->setGeometry(QRect(0, 0, 35, 41));
        btnAddtoMusicList->setMinimumSize(QSize(35, 35));
        btnAddtoMusicList->setCursor(QCursor(Qt::PointingHandCursor));
        btnAddtoMusicList->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-image: url(:/image/image/image/add.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-image: url(:/image/image/image-hover/add-hover.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-image: url(:/image/image/image/add.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
""));
        layoutWidget_3 = new QWidget(page_3);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(670, 0, 155, 43));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        btnSortSinger_4 = new QPushButton(layoutWidget_3);
        btnSortSinger_4->setObjectName(QString::fromUtf8("btnSortSinger_4"));
        btnSortSinger_4->setFont(font5);
        btnSortSinger_4->setCursor(QCursor(Qt::PointingHandCursor));
        btnSortSinger_4->setStyleSheet(QString::fromUtf8(""));
        btnSortSinger_4->setIcon(icon1);
        btnSortSinger_4->setIconSize(QSize(30, 30));
        btnSortSinger_4->setFlat(true);

        horizontalLayout_5->addWidget(btnSortSinger_4);

        btnSortTitle_4 = new QPushButton(layoutWidget_3);
        btnSortTitle_4->setObjectName(QString::fromUtf8("btnSortTitle_4"));
        btnSortTitle_4->setFont(font5);
        btnSortTitle_4->setCursor(QCursor(Qt::PointingHandCursor));
        btnSortTitle_4->setStyleSheet(QString::fromUtf8(""));
        btnSortTitle_4->setIcon(icon2);
        btnSortTitle_4->setIconSize(QSize(30, 30));
        btnSortTitle_4->setFlat(true);

        horizontalLayout_5->addWidget(btnSortTitle_4);

        btnSortDuration_4 = new QPushButton(layoutWidget_3);
        btnSortDuration_4->setObjectName(QString::fromUtf8("btnSortDuration_4"));
        btnSortDuration_4->setFont(font5);
        btnSortDuration_4->setCursor(QCursor(Qt::PointingHandCursor));
        btnSortDuration_4->setStyleSheet(QString::fromUtf8(""));
        btnSortDuration_4->setIcon(icon3);
        btnSortDuration_4->setIconSize(QSize(30, 30));
        btnSortDuration_4->setFlat(true);

        horizontalLayout_5->addWidget(btnSortDuration_4);

        btnNeaten_3 = new QPushButton(page_3);
        btnNeaten_3->setObjectName(QString::fromUtf8("btnNeaten_3"));
        btnNeaten_3->setGeometry(QRect(590, 0, 41, 41));
        btnNeaten_3->setFont(font5);
        btnNeaten_3->setCursor(QCursor(Qt::PointingHandCursor));
        btnNeaten_3->setStyleSheet(QString::fromUtf8(""));
        btnNeaten_3->setIcon(icon4);
        btnNeaten_3->setIconSize(QSize(30, 30));
        btnNeaten_3->setFlat(true);
        btnClear_4 = new QPushButton(page_3);
        btnClear_4->setObjectName(QString::fromUtf8("btnClear_4"));
        btnClear_4->setGeometry(QRect(40, 0, 31, 41));
        btnClear_4->setFont(font5);
        btnClear_4->setCursor(QCursor(Qt::PointingHandCursor));
        btnClear_4->setStyleSheet(QString::fromUtf8(""));
        btnClear_4->setIcon(icon);
        btnClear_4->setIconSize(QSize(30, 30));
        btnClear_4->setFlat(true);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        musicTitleLabel = new QLabel(page_4);
        musicTitleLabel->setObjectName(QString::fromUtf8("musicTitleLabel"));
        musicTitleLabel->setEnabled(true);
        musicTitleLabel->setGeometry(QRect(0, 0, 831, 41));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font6.setPointSize(14);
        font6.setBold(true);
        font6.setItalic(false);
        musicTitleLabel->setFont(font6);
        musicTitleLabel->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
""));
        musicTitleLabel->setAlignment(Qt::AlignCenter);
        musicAlbumLabel = new QLabel(page_4);
        musicAlbumLabel->setObjectName(QString::fromUtf8("musicAlbumLabel"));
        musicAlbumLabel->setEnabled(true);
        musicAlbumLabel->setGeometry(QRect(0, 80, 831, 21));
        musicAlbumLabel->setFont(font4);
        musicAlbumLabel->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
""));
        musicAlbumLabel->setAlignment(Qt::AlignCenter);
        musicAuthorLabel = new QLabel(page_4);
        musicAuthorLabel->setObjectName(QString::fromUtf8("musicAuthorLabel"));
        musicAuthorLabel->setEnabled(true);
        musicAuthorLabel->setGeometry(QRect(0, 50, 831, 21));
        musicAuthorLabel->setFont(font4);
        musicAuthorLabel->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
""));
        musicAuthorLabel->setAlignment(Qt::AlignCenter);
        lyricWidget = new LyricWidget(page_4);
        lyricWidget->setObjectName(QString::fromUtf8("lyricWidget"));
        lyricWidget->setGeometry(QRect(-1, 109, 831, 421));
        stackedWidget->addWidget(page_4);
        nameListWidget = new QListWidget(Widget);
        nameListWidget->setObjectName(QString::fromUtf8("nameListWidget"));
        nameListWidget->setGeometry(QRect(20, 350, 241, 431));
        nameListWidget->setFont(font3);
        nameListWidget->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 50);\n"
""));
        nameListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        titleLabel_5 = new QLabel(Widget);
        titleLabel_5->setObjectName(QString::fromUtf8("titleLabel_5"));
        titleLabel_5->setEnabled(true);
        titleLabel_5->setGeometry(QRect(80, 310, 111, 35));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font7.setPointSize(10);
        font7.setBold(true);
        font7.setItalic(false);
        titleLabel_5->setFont(font7);
        titleLabel_5->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
""));
        titleLabel_5->setAlignment(Qt::AlignCenter);
        btnAddMusicList = new QPushButton(Widget);
        btnAddMusicList->setObjectName(QString::fromUtf8("btnAddMusicList"));
        btnAddMusicList->setGeometry(QRect(180, 310, 41, 35));
        btnAddMusicList->setMinimumSize(QSize(35, 35));
        btnAddMusicList->setCursor(QCursor(Qt::PointingHandCursor));
        btnAddMusicList->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-image: url(:/image/image/image/add.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-image: url(:/image/image/image-hover/add-hover.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-image: url(:/image/image/image/add.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
""));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 310, 31, 31));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/image/image/myMusicList.png")));
        label->setScaledContents(true);
        btnSkin = new QPushButton(Widget);
        btnSkin->setObjectName(QString::fromUtf8("btnSkin"));
        btnSkin->setGeometry(QRect(1030, 10, 35, 35));
        btnSkin->setMinimumSize(QSize(35, 35));
        btnSkin->setCursor(QCursor(Qt::PointingHandCursor));
        btnSkin->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"\n"
"border-radius: 10px; \n"
"}\n"
"QPushButton:hover{\n"
"\n"
"	border-radius: 10px; \n"
"}\n"
"QPushButton:pressed{\n"
"\n"
"border-radius: 10px; \n"
"\n"
"}\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/image/image/skin.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSkin->setIcon(icon5);
        btnSkin->setIconSize(QSize(30, 30));
        btnSkin->setFlat(true);
        layoutWidget3 = new QWidget(Widget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(40, 10, 338, 53));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        btnTitle = new QPushButton(layoutWidget3);
        btnTitle->setObjectName(QString::fromUtf8("btnTitle"));
        btnTitle->setFont(font5);
        btnTitle->setCursor(QCursor(Qt::PointingHandCursor));
        btnTitle->setStyleSheet(QString::fromUtf8(""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/image/image/Title.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnTitle->setIcon(icon6);
        btnTitle->setIconSize(QSize(40, 40));
        btnTitle->setFlat(true);

        horizontalLayout_6->addWidget(btnTitle);

        titleLabel = new QLabel(layoutWidget3);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setEnabled(true);
        titleLabel->setFont(font4);
        titleLabel->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
""));
        titleLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(titleLabel);

        btnLyric = new QPushButton(Widget);
        btnLyric->setObjectName(QString::fromUtf8("btnLyric"));
        btnLyric->setGeometry(QRect(950, 720, 35, 41));
        btnLyric->setMinimumSize(QSize(35, 35));
        btnLyric->setCursor(QCursor(Qt::PointingHandCursor));
        btnLyric->setStyleSheet(QString::fromUtf8("border-radius: 10px; "));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/image/image/lyric.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLyric->setIcon(icon7);
        btnLyric->setIconSize(QSize(30, 30));
        btnLyric->setFlat(true);
        btnAbout = new QPushButton(Widget);
        btnAbout->setObjectName(QString::fromUtf8("btnAbout"));
        btnAbout->setGeometry(QRect(980, 10, 35, 35));
        btnAbout->setMinimumSize(QSize(35, 35));
        btnAbout->setCursor(QCursor(Qt::PointingHandCursor));
        btnAbout->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"\n"
"border-radius: 10px; \n"
"}\n"
"QPushButton:hover{\n"
"\n"
"	border-radius: 10px; \n"
"}\n"
"QPushButton:pressed{\n"
"\n"
"border-radius: 10px; \n"
"\n"
"}\n"
""));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/image/image/image/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAbout->setIcon(icon8);
        btnAbout->setIconSize(QSize(30, 30));
        btnAbout->setFlat(true);
        btnAdd = new QPushButton(Widget);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        btnAdd->setGeometry(QRect(1050, 720, 41, 41));
        btnAdd->setFont(font5);
        btnAdd->setCursor(QCursor(Qt::PointingHandCursor));
        btnAdd->setStyleSheet(QString::fromUtf8("border-radius: 10px; "));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/image/image/image/addFromLocal.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAdd->setIcon(icon9);
        btnAdd->setIconSize(QSize(30, 30));
        btnAdd->setFlat(true);
        layoutWidget4 = new QWidget(Widget);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(80, 90, 111, 231));
        verticalLayout = new QVBoxLayout(layoutWidget4);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnCurMusic = new QPushButton(layoutWidget4);
        btnCurMusic->setObjectName(QString::fromUtf8("btnCurMusic"));
        btnCurMusic->setMinimumSize(QSize(0, 40));
        btnCurMusic->setMaximumSize(QSize(16777215, 40));
        btnCurMusic->setFont(font5);
        btnCurMusic->setCursor(QCursor(Qt::PointingHandCursor));
        btnCurMusic->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"border-radius:0px;\n"
"background-color: rgba(255, 255, 255,0);\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"border-radius: 10px; \n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255,100);\n"
"	border-radius: 10px; \n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgba(95, 95, 95,100);\n"
"border-radius: 10px; \n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:checked {\n"
"    background-color: rgba(95, 95, 95, 100);  /* \346\214\211\344\270\213\345\220\216\347\232\204\351\242\234\350\211\262 */\n"
"    border-radius: 10px;\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
""));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/image/image/image/current-music.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCurMusic->setIcon(icon10);
        btnCurMusic->setIconSize(QSize(30, 30));
        btnCurMusic->setFlat(true);

        verticalLayout->addWidget(btnCurMusic);

        btnLocalMusic = new QPushButton(layoutWidget4);
        btnLocalMusic->setObjectName(QString::fromUtf8("btnLocalMusic"));
        btnLocalMusic->setMinimumSize(QSize(0, 40));
        btnLocalMusic->setMaximumSize(QSize(16777215, 40));
        btnLocalMusic->setFont(font5);
        btnLocalMusic->setCursor(QCursor(Qt::PointingHandCursor));
        btnLocalMusic->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"border-radius:0px;\n"
"background-color: rgba(255, 255, 255,0);\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"border-radius: 10px; \n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255,100);\n"
"	border-radius: 10px; \n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgba(95, 95, 95,100);\n"
"border-radius: 10px; \n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:checked {\n"
"    background-color: rgba(95, 95, 95, 100);  /* \346\214\211\344\270\213\345\220\216\347\232\204\351\242\234\350\211\262 */\n"
"    border-radius: 10px;\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
""));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/image/image/image/local-music.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLocalMusic->setIcon(icon11);
        btnLocalMusic->setIconSize(QSize(30, 30));
        btnLocalMusic->setFlat(true);

        verticalLayout->addWidget(btnLocalMusic);

        btnFavorMusic = new QPushButton(layoutWidget4);
        btnFavorMusic->setObjectName(QString::fromUtf8("btnFavorMusic"));
        btnFavorMusic->setMinimumSize(QSize(0, 40));
        btnFavorMusic->setMaximumSize(QSize(16777215, 40));
        btnFavorMusic->setFont(font5);
        btnFavorMusic->setCursor(QCursor(Qt::PointingHandCursor));
        btnFavorMusic->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"border-radius: 10px; \n"
"background-color: rgba(255, 255, 255,0);\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 255, 255,100);\n"
"	border-radius: 10px; \n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgba(95, 95, 95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-radius: 10px; \n"
"border-style:inset;\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:checked {\n"
"    background-color: rgba(95, 95, 95, 100);  /* \346\214\211\344\270\213\345\220\216\347\232\204\351\242\234\350\211\262 */\n"
"    border-radius: 10px;\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
""));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/image/image/image/favo-music.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnFavorMusic->setIcon(icon12);
        btnFavorMusic->setIconSize(QSize(30, 30));
        btnFavorMusic->setFlat(true);

        verticalLayout->addWidget(btnFavorMusic);


        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
#if QT_CONFIG(tooltip)
        Widget->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnPre->setToolTip(QCoreApplication::translate("Widget", "\344\270\212\344\270\200\351\246\226", nullptr));
#endif // QT_CONFIG(tooltip)
        btnPre->setText(QString());
#if QT_CONFIG(shortcut)
        btnPre->setShortcut(QCoreApplication::translate("Widget", "Alt+Left", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        btnPlay->setToolTip(QCoreApplication::translate("Widget", "\346\222\255\346\224\276/\346\232\202\345\201\234", nullptr));
#endif // QT_CONFIG(tooltip)
        btnPlay->setText(QString());
#if QT_CONFIG(shortcut)
        btnPlay->setShortcut(QCoreApplication::translate("Widget", "Space", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        btnNext->setToolTip(QCoreApplication::translate("Widget", "\344\270\213\344\270\200\351\246\226", nullptr));
#endif // QT_CONFIG(tooltip)
        btnNext->setText(QString());
#if QT_CONFIG(shortcut)
        btnNext->setShortcut(QCoreApplication::translate("Widget", "Alt+Right", nullptr));
#endif // QT_CONFIG(shortcut)
        positionLabel->setText(QCoreApplication::translate("Widget", "00:00/00:00", nullptr));
#if QT_CONFIG(tooltip)
        btnPlayMode->setToolTip(QCoreApplication::translate("Widget", "\345\276\252\347\216\257\346\222\255\346\224\276", nullptr));
#endif // QT_CONFIG(tooltip)
        btnPlayMode->setText(QString());
#if QT_CONFIG(tooltip)
        btnMin->setToolTip(QCoreApplication::translate("Widget", "\346\234\200\345\260\217\345\214\226", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMin->setText(QString());
#if QT_CONFIG(tooltip)
        btnQuit->setToolTip(QCoreApplication::translate("Widget", "\345\205\263\351\227\255", nullptr));
#endif // QT_CONFIG(tooltip)
        btnQuit->setText(QString());
        infoLabel->setText(QCoreApplication::translate("Widget", "KEEP CALM AND CARRY ON ...", nullptr));
        coverLabel->setText(QString());
#if QT_CONFIG(tooltip)
        btnVolume->setToolTip(QCoreApplication::translate("Widget", "\351\237\263\351\207\217\346\216\247\345\210\266", nullptr));
#endif // QT_CONFIG(tooltip)
        btnVolume->setText(QString());
        titleLabel_2->setText(QCoreApplication::translate("Widget", "\345\275\223\345\211\215\346\222\255\346\224\276", nullptr));
#if QT_CONFIG(tooltip)
        btnClear->setToolTip(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\345\275\223\345\211\215\345\210\227\350\241\250", nullptr));
#endif // QT_CONFIG(tooltip)
        btnClear->setText(QString());
        titleLabel_3->setText(QCoreApplication::translate("Widget", "\346\234\254\345\234\260\351\237\263\344\271\220", nullptr));
#if QT_CONFIG(tooltip)
        btnSortSinger->setToolTip(QCoreApplication::translate("Widget", "\346\214\211\346\255\214\346\211\213\345\220\215\346\216\222\345\272\217", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSortSinger->setText(QString());
#if QT_CONFIG(tooltip)
        btnSortTitle->setToolTip(QCoreApplication::translate("Widget", "\346\214\211\346\255\214\346\233\262\345\220\215\346\216\222\345\272\217", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSortTitle->setText(QString());
#if QT_CONFIG(tooltip)
        btnSortDuration->setToolTip(QCoreApplication::translate("Widget", "\346\214\211\346\227\266\351\225\277\346\216\222\345\272\217", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSortDuration->setText(QString());
#if QT_CONFIG(tooltip)
        btnNeaten->setToolTip(QCoreApplication::translate("Widget", "\346\225\264\347\220\206\346\255\214\346\233\262\357\274\210\346\216\222\345\272\217\344\270\224\345\216\273\351\231\244\351\207\215\345\244\215\357\274\211", nullptr));
#endif // QT_CONFIG(tooltip)
        btnNeaten->setText(QString());
#if QT_CONFIG(tooltip)
        btnClear_2->setToolTip(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\345\275\223\345\211\215\345\210\227\350\241\250", nullptr));
#endif // QT_CONFIG(tooltip)
        btnClear_2->setText(QString());
        titleLabel_4->setText(QCoreApplication::translate("Widget", "\346\210\221\345\226\234\346\254\242", nullptr));
#if QT_CONFIG(tooltip)
        btnAddtoFavor->setToolTip(QCoreApplication::translate("Widget", "\346\267\273\345\212\240\351\237\263\344\271\220", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddtoFavor->setText(QString());
#if QT_CONFIG(tooltip)
        btnSortSinger_2->setToolTip(QCoreApplication::translate("Widget", "\346\214\211\346\255\214\346\211\213\345\220\215\346\216\222\345\272\217", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSortSinger_2->setText(QString());
#if QT_CONFIG(tooltip)
        btnSortTitle_2->setToolTip(QCoreApplication::translate("Widget", "\346\214\211\346\255\214\346\233\262\345\220\215\346\216\222\345\272\217", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSortTitle_2->setText(QString());
#if QT_CONFIG(tooltip)
        btnSortDuration_2->setToolTip(QCoreApplication::translate("Widget", "\346\214\211\346\227\266\351\225\277\346\216\222\345\272\217", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSortDuration_2->setText(QString());
#if QT_CONFIG(tooltip)
        btnNeaten_2->setToolTip(QCoreApplication::translate("Widget", "\346\225\264\347\220\206\346\255\214\346\233\262\357\274\210\346\216\222\345\272\217\344\270\224\345\216\273\351\231\244\351\207\215\345\244\215\357\274\211", nullptr));
#endif // QT_CONFIG(tooltip)
        btnNeaten_2->setText(QString());
#if QT_CONFIG(tooltip)
        btnClear_3->setToolTip(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\345\275\223\345\211\215\345\210\227\350\241\250", nullptr));
#endif // QT_CONFIG(tooltip)
        btnClear_3->setText(QString());
        musicListNameLabel->setText(QCoreApplication::translate("Widget", "\346\255\214\345\215\225", nullptr));
#if QT_CONFIG(tooltip)
        btnAddtoMusicList->setToolTip(QCoreApplication::translate("Widget", "\346\267\273\345\212\240\351\237\263\344\271\220", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddtoMusicList->setText(QString());
#if QT_CONFIG(tooltip)
        btnSortSinger_4->setToolTip(QCoreApplication::translate("Widget", "\346\214\211\346\255\214\346\211\213\345\220\215\346\216\222\345\272\217", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSortSinger_4->setText(QString());
#if QT_CONFIG(tooltip)
        btnSortTitle_4->setToolTip(QCoreApplication::translate("Widget", "\346\214\211\346\255\214\346\233\262\345\220\215\346\216\222\345\272\217", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSortTitle_4->setText(QString());
#if QT_CONFIG(tooltip)
        btnSortDuration_4->setToolTip(QCoreApplication::translate("Widget", "\346\214\211\346\227\266\351\225\277\346\216\222\345\272\217", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSortDuration_4->setText(QString());
#if QT_CONFIG(tooltip)
        btnNeaten_3->setToolTip(QCoreApplication::translate("Widget", "\346\225\264\347\220\206\346\255\214\346\233\262\357\274\210\346\216\222\345\272\217\344\270\224\345\216\273\351\231\244\351\207\215\345\244\215\357\274\211", nullptr));
#endif // QT_CONFIG(tooltip)
        btnNeaten_3->setText(QString());
#if QT_CONFIG(tooltip)
        btnClear_4->setToolTip(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\345\275\223\345\211\215\345\210\227\350\241\250", nullptr));
#endif // QT_CONFIG(tooltip)
        btnClear_4->setText(QString());
        musicTitleLabel->setText(QString());
        musicAlbumLabel->setText(QString());
        musicAuthorLabel->setText(QString());
        titleLabel_5->setText(QCoreApplication::translate("Widget", "\346\210\221\347\232\204\346\255\214\345\215\225", nullptr));
#if QT_CONFIG(tooltip)
        btnAddMusicList->setToolTip(QCoreApplication::translate("Widget", "\346\267\273\345\212\240\351\237\263\344\271\220", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddMusicList->setText(QString());
        label->setText(QString());
#if QT_CONFIG(tooltip)
        btnSkin->setToolTip(QCoreApplication::translate("Widget", "\346\233\264\346\215\242\350\203\214\346\231\257", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSkin->setText(QString());
#if QT_CONFIG(tooltip)
        btnTitle->setToolTip(QCoreApplication::translate("Widget", "\345\205\263\344\272\216", nullptr));
#endif // QT_CONFIG(tooltip)
        btnTitle->setText(QString());
        titleLabel->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:12pt;\">MyMusicPlayer | By \346\240\227\346\202\237\351\245\255\344\270\216\351\276\237\346\263\242\345\212\237</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        btnLyric->setToolTip(QCoreApplication::translate("Widget", "\350\277\233\345\205\245\346\255\214\350\257\215\347\225\214\351\235\242", nullptr));
#endif // QT_CONFIG(tooltip)
        btnLyric->setText(QString());
#if QT_CONFIG(tooltip)
        btnAbout->setToolTip(QCoreApplication::translate("Widget", "\345\205\263\344\272\216", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAbout->setText(QString());
#if QT_CONFIG(tooltip)
        btnAdd->setToolTip(QCoreApplication::translate("Widget", "\346\267\273\345\212\240\346\234\254\345\234\260\351\237\263\344\271\220", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAdd->setText(QString());
#if QT_CONFIG(shortcut)
        btnAdd->setShortcut(QCoreApplication::translate("Widget", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        btnCurMusic->setText(QCoreApplication::translate("Widget", " \345\275\223\345\211\215\346\222\255\346\224\276", nullptr));
        btnLocalMusic->setText(QCoreApplication::translate("Widget", " \346\234\254\345\234\260\351\237\263\344\271\220", nullptr));
        btnFavorMusic->setText(QCoreApplication::translate("Widget", " \346\210\221\345\226\234\346\254\242   ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
