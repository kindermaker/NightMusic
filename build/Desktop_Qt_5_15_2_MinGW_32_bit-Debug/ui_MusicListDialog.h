/********************************************************************************
** Form generated from reading UI file 'MusicListDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICLISTDIALOG_H
#define UI_MUSICLISTDIALOG_H

#include <MusicListWidget.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_MusicListDialog
{
public:
    QDialogButtonBox *buttonBox;
    MusicListWidget *listWidget;
    QLabel *label;

    void setupUi(QDialog *MusicListDialog)
    {
        if (MusicListDialog->objectName().isEmpty())
            MusicListDialog->setObjectName(QString::fromUtf8("MusicListDialog"));
        MusicListDialog->resize(801, 491);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MusicListDialog->sizePolicy().hasHeightForWidth());
        MusicListDialog->setSizePolicy(sizePolicy);
        MusicListDialog->setMinimumSize(QSize(801, 491));
        MusicListDialog->setMaximumSize(QSize(801, 491));
        buttonBox = new QDialogButtonBox(MusicListDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(430, 440, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        listWidget = new MusicListWidget(MusicListDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(30, 50, 741, 381));
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setBold(true);
        font.setWeight(75);
        listWidget->setFont(font);
        listWidget->setStyleSheet(QString::fromUtf8(""));
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        listWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        listWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        listWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        label = new QLabel(MusicListDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 731, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);

        retranslateUi(MusicListDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MusicListDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MusicListDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MusicListDialog);
    } // setupUi

    void retranslateUi(QDialog *MusicListDialog)
    {
        MusicListDialog->setWindowTitle(QCoreApplication::translate("MusicListDialog", "\346\267\273\345\212\240\346\255\214\346\233\262", nullptr));
        label->setText(QCoreApplication::translate("MusicListDialog", "\346\263\250\357\274\232\346\255\244\345\244\204\344\270\272\345\244\232\351\200\211\346\250\241\345\274\217\357\274\214\345\215\225\345\207\273\346\210\226\350\200\205\346\214\211\344\275\217\346\213\226\345\212\250\345\215\263\345\217\257\351\200\211\346\213\251\347\233\270\345\272\224\346\255\214\346\233\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MusicListDialog: public Ui_MusicListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICLISTDIALOG_H
