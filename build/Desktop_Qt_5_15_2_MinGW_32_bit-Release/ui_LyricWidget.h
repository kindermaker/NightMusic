/********************************************************************************
** Form generated from reading UI file 'LyricWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LYRICWIDGET_H
#define UI_LYRICWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LyricWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_3i;
    QLabel *label_2i;
    QLabel *label_1i;
    QLabel *label_i;
    QLabel *label_i1;
    QLabel *label_i2;
    QLabel *label_i3;

    void setupUi(QWidget *LyricWidget)
    {
        if (LyricWidget->objectName().isEmpty())
            LyricWidget->setObjectName(QString::fromUtf8("LyricWidget"));
        LyricWidget->resize(831, 411);
        LyricWidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(LyricWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3i = new QLabel(LyricWidget);
        label_3i->setObjectName(QString::fromUtf8("label_3i"));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft JhengHei UI"));
        font.setPointSize(10);
        font.setBold(true);
        label_3i->setFont(font);
        label_3i->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 170);"));
        label_3i->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3i);

        label_2i = new QLabel(LyricWidget);
        label_2i->setObjectName(QString::fromUtf8("label_2i"));
        label_2i->setFont(font);
        label_2i->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 170);"));
        label_2i->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2i);

        label_1i = new QLabel(LyricWidget);
        label_1i->setObjectName(QString::fromUtf8("label_1i"));
        label_1i->setFont(font);
        label_1i->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 170);"));
        label_1i->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_1i);

        label_i = new QLabel(LyricWidget);
        label_i->setObjectName(QString::fromUtf8("label_i"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft JhengHei UI"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        label_i->setFont(font1);
        label_i->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_i->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_i);

        label_i1 = new QLabel(LyricWidget);
        label_i1->setObjectName(QString::fromUtf8("label_i1"));
        label_i1->setFont(font);
        label_i1->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 170);"));
        label_i1->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_i1);

        label_i2 = new QLabel(LyricWidget);
        label_i2->setObjectName(QString::fromUtf8("label_i2"));
        label_i2->setFont(font);
        label_i2->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 170);"));
        label_i2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_i2);

        label_i3 = new QLabel(LyricWidget);
        label_i3->setObjectName(QString::fromUtf8("label_i3"));
        label_i3->setFont(font);
        label_i3->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 170);"));
        label_i3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_i3);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(LyricWidget);

        QMetaObject::connectSlotsByName(LyricWidget);
    } // setupUi

    void retranslateUi(QWidget *LyricWidget)
    {
        LyricWidget->setWindowTitle(QCoreApplication::translate("LyricWidget", "Form", nullptr));
        label_3i->setText(QCoreApplication::translate("LyricWidget", "<html><head/><body><p><span style=\" font-size:8pt;\">secret base \357\275\236\345\220\233\343\201\214\343\201\217\343\202\214\343\201\237\343\202\202\343\201\256\357\275\236(10 years after Ver.)secret base \357\275\236\345\220\233\343\201\214\343\201\217\343\202\214\343\201\237\343\202\202\343\201\256\357\275\236(10 years after Ver.)</span></p></body></html>", nullptr));
        label_2i->setText(QCoreApplication::translate("LyricWidget", "secret base \357\275\236\345\220\233\343\201\214\343\201\217\343\202\214\343\201\237\343\202\202\343\201\256\357\275\236(10 years after Ver.)secret base \357\275\236\345\220\233\343\201\214\343\201\217\343\202\214\343\201\237\343\202\202\343\201\256\357\275\236(10 years after Ver.)", nullptr));
        label_1i->setText(QCoreApplication::translate("LyricWidget", "<html><head/><body><p><span style=\" font-size:12pt;\">secret base \357\275\236\345\220\233\343\201\214\343\201\217\343\202\214\343\201\237\343\202\202\343\201\256\357\275\236(10 years after Ver.)secret base \357\275\236\345\220\233\343\201\214\343\201\217\343\202\214\343\201\237\343\202\202\343\201\256\357\275\236(10 years after Ver.)</span></p></body></html>", nullptr));
        label_i->setText(QCoreApplication::translate("LyricWidget", "<html><head/><body><p><span style=\" font-size:16pt;\">secret base \357\275\236\345\220\233\343\201\214\343\201\217\343\202\214\343\201\237\343\202\202\343\201\256\357\275\236(10 years after Ver.)secret base \357\275\236\345\220\233\343\201\214\343\201\217\343\202\214\343\201\237\343\202\202\343\201\256\357\275\236(10 years after Ver.)</span></p></body></html>", nullptr));
        label_i1->setText(QCoreApplication::translate("LyricWidget", "<html><head/><body><p><span style=\" font-size:12pt;\">secret base \357\275\236\345\220\233\343\201\214\343\201\217\343\202\214\343\201\237\343\202\202\343\201\256\357\275\236(10 years after Ver.)secret base \357\275\236\345\220\233\343\201\214\343\201\217\343\202\214\343\201\237\343\202\202\343\201\256\357\275\236(10 years after Ver.)</span></p></body></html>", nullptr));
        label_i2->setText(QCoreApplication::translate("LyricWidget", "secret base \357\275\236\345\220\233\343\201\214\343\201\217\343\202\214\343\201\237\343\202\202\343\201\256\357\275\236(10 years after Ver.)secret base \357\275\236\345\220\233\343\201\214\343\201\217\343\202\214\343\201\237\343\202\202\343\201\256\357\275\236(10 years after Ver.)", nullptr));
        label_i3->setText(QCoreApplication::translate("LyricWidget", "<html><head/><body><p><span style=\" font-size:8pt;\">secret base \357\275\236\345\220\233\343\201\214\343\201\217\343\202\214\343\201\237\343\202\202\343\201\256\357\275\236(10 years after Ver.)secret base \357\275\236\345\220\233\343\201\214\343\201\217\343\202\214\343\201\237\343\202\202\343\201\256\357\275\236(10 years after Ver.)</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LyricWidget: public Ui_LyricWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LYRICWIDGET_H
