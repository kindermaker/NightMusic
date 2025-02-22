/********************************************************************************
** Form generated from reading UI file 'kurisuwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KURISUWIDGET_H
#define UI_KURISUWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KurisuWidget
{
public:
    QLabel *label_3i;
    QLabel *label_2i;
    QLabel *label_i;
    QLabel *label_i1;
    QLabel *label_i2;
    QLabel *label_1i;
    QLabel *label_i3;

    void setupUi(QWidget *KurisuWidget)
    {
        if (KurisuWidget->objectName().isEmpty())
            KurisuWidget->setObjectName(QString::fromUtf8("KurisuWidget"));
        KurisuWidget->resize(831, 411);
        KurisuWidget->setStyleSheet(QString::fromUtf8(""));
        label_3i = new QLabel(KurisuWidget);
        label_3i->setObjectName(QString::fromUtf8("label_3i"));
        label_3i->setGeometry(QRect(0, 30, 831, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft JhengHei UI"));
        font.setPointSize(10);
        font.setBold(true);
        label_3i->setFont(font);
        label_3i->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 170);"));
        label_3i->setAlignment(Qt::AlignCenter);
        label_2i = new QLabel(KurisuWidget);
        label_2i->setObjectName(QString::fromUtf8("label_2i"));
        label_2i->setGeometry(QRect(0, 80, 831, 31));
        label_2i->setFont(font);
        label_2i->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 170);"));
        label_2i->setAlignment(Qt::AlignCenter);
        label_i = new QLabel(KurisuWidget);
        label_i->setObjectName(QString::fromUtf8("label_i"));
        label_i->setGeometry(QRect(0, 190, 831, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft JhengHei UI"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        label_i->setFont(font1);
        label_i->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_i->setAlignment(Qt::AlignCenter);
        label_i1 = new QLabel(KurisuWidget);
        label_i1->setObjectName(QString::fromUtf8("label_i1"));
        label_i1->setGeometry(QRect(0, 250, 831, 31));
        label_i1->setFont(font);
        label_i1->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 170);"));
        label_i1->setAlignment(Qt::AlignCenter);
        label_i2 = new QLabel(KurisuWidget);
        label_i2->setObjectName(QString::fromUtf8("label_i2"));
        label_i2->setGeometry(QRect(0, 300, 831, 31));
        label_i2->setFont(font);
        label_i2->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 170);"));
        label_i2->setAlignment(Qt::AlignCenter);
        label_1i = new QLabel(KurisuWidget);
        label_1i->setObjectName(QString::fromUtf8("label_1i"));
        label_1i->setGeometry(QRect(0, 130, 831, 31));
        label_1i->setFont(font);
        label_1i->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 170);"));
        label_1i->setAlignment(Qt::AlignCenter);
        label_i3 = new QLabel(KurisuWidget);
        label_i3->setObjectName(QString::fromUtf8("label_i3"));
        label_i3->setGeometry(QRect(0, 350, 831, 31));
        label_i3->setFont(font);
        label_i3->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 170);"));
        label_i3->setAlignment(Qt::AlignCenter);

        retranslateUi(KurisuWidget);

        QMetaObject::connectSlotsByName(KurisuWidget);
    } // setupUi

    void retranslateUi(QWidget *KurisuWidget)
    {
        KurisuWidget->setWindowTitle(QCoreApplication::translate("KurisuWidget", "Form", nullptr));
        label_3i->setText(QCoreApplication::translate("KurisuWidget", "Show me the signShow me the signShow me the sign", nullptr));
        label_2i->setText(QCoreApplication::translate("KurisuWidget", "Show me the signShow me the signShow me the signShow me the sign", nullptr));
        label_i->setText(QCoreApplication::translate("KurisuWidget", "Show me the signShow me the signShow me the signShow me the sign", nullptr));
        label_i1->setText(QCoreApplication::translate("KurisuWidget", "Show me the signShow me the signShow me the signShow me the sign", nullptr));
        label_i2->setText(QCoreApplication::translate("KurisuWidget", "Show me the signShow me the signShow me the signShow me the sign", nullptr));
        label_1i->setText(QCoreApplication::translate("KurisuWidget", "Show me the signShow me the signShow me the signShow me the sign", nullptr));
        label_i3->setText(QCoreApplication::translate("KurisuWidget", "Show me the signShow me the signShow me the signShow me the sign", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KurisuWidget: public Ui_KurisuWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KURISUWIDGET_H
