/********************************************************************************
** Form generated from reading UI file 'slitunit.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLITUNIT_H
#define UI_SLITUNIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qcaaxis.h"
#include "qcalabel.h"
#include "qcapushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_slitunit
{
public:
    QPushButton *pushButton_7;
    QCAPushButton *pushButton_5;
    QPushButton *pushButton_9;
    QPushButton *pushButton_2;
    QCAPushButton *pushButton_3;
    QCAPushButton *pushButton_6;
    QCAPushButton *pushButton_8;
    QPushButton *pushButton_4;
    QCAPushButton *pushButton_26;
    QCAPushButton *pushButton_27;
    QCALabel *label_41;
    QCALabel *label_15;
    QFrame *line;
    QLabel *label_6;
    QCAAxis *Axis_1;
    QCAAxis *Axis_2;
    QCAAxis *Axis_3;
    QCAAxis *Axis_4;
    QCAAxis *Axis_5;
    QCAAxis *Axis_6;
    QCAAxis *Axis_7;
    QCAAxis *Axis_8;
    QCAAxis *Axis_9;

    void setupUi(QWidget *slitunit)
    {
        if (slitunit->objectName().isEmpty())
            slitunit->setObjectName(QStringLiteral("slitunit"));
        slitunit->resize(978, 737);
        slitunit->setFocusPolicy(Qt::WheelFocus);
        pushButton_7 = new QPushButton(slitunit);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(920, 90, 51, 22));
        pushButton_5 = new QCAPushButton(slitunit);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(920, 200, 51, 22));
        pushButton_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        pushButton_9 = new QPushButton(slitunit);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(920, 260, 51, 22));
        pushButton_2 = new QPushButton(slitunit);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(920, 20, 51, 22));
        pushButton_3 = new QCAPushButton(slitunit);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(920, 50, 51, 22));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        pushButton_6 = new QCAPushButton(slitunit);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(920, 120, 51, 22));
        pushButton_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        pushButton_8 = new QCAPushButton(slitunit);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(920, 290, 51, 22));
        pushButton_8->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        pushButton_4 = new QPushButton(slitunit);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(920, 170, 51, 22));
        pushButton_26 = new QCAPushButton(slitunit);
        pushButton_26->setObjectName(QStringLiteral("pushButton_26"));
        pushButton_26->setGeometry(QRect(210, 400, 31, 22));
        pushButton_27 = new QCAPushButton(slitunit);
        pushButton_27->setObjectName(QStringLiteral("pushButton_27"));
        pushButton_27->setGeometry(QRect(210, 450, 31, 22));
        label_41 = new QCALabel(slitunit);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(200, 430, 59, 14));
        label_15 = new QCALabel(slitunit);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(200, 370, 59, 14));
        line = new QFrame(slitunit);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 590, 981, 16));
        line->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 0);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(slitunit);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(150, 660, 51, 16));
        Axis_1 = new QCAAxis(slitunit);
        Axis_1->setObjectName(QStringLiteral("Axis_1"));
        Axis_1->setGeometry(QRect(10, 30, 449, 32));
        Axis_2 = new QCAAxis(slitunit);
        Axis_2->setObjectName(QStringLiteral("Axis_2"));
        Axis_2->setGeometry(QRect(10, 90, 449, 32));
        Axis_3 = new QCAAxis(slitunit);
        Axis_3->setObjectName(QStringLiteral("Axis_3"));
        Axis_3->setEnabled(false);
        Axis_3->setGeometry(QRect(10, 150, 449, 31));
        Axis_4 = new QCAAxis(slitunit);
        Axis_4->setObjectName(QStringLiteral("Axis_4"));
        Axis_4->setGeometry(QRect(10, 210, 449, 32));
        Axis_5 = new QCAAxis(slitunit);
        Axis_5->setObjectName(QStringLiteral("Axis_5"));
        Axis_5->setGeometry(QRect(10, 270, 449, 32));
        Axis_6 = new QCAAxis(slitunit);
        Axis_6->setObjectName(QStringLiteral("Axis_6"));
        Axis_6->setGeometry(QRect(230, 650, 449, 32));
        Axis_7 = new QCAAxis(slitunit);
        Axis_7->setObjectName(QStringLiteral("Axis_7"));
        Axis_7->setGeometry(QRect(510, 400, 449, 32));
        Axis_8 = new QCAAxis(slitunit);
        Axis_8->setObjectName(QStringLiteral("Axis_8"));
        Axis_8->setGeometry(QRect(10, 540, 449, 32));
        Axis_9 = new QCAAxis(slitunit);
        Axis_9->setObjectName(QStringLiteral("Axis_9"));
        Axis_9->setGeometry(QRect(510, 540, 449, 32));

        retranslateUi(slitunit);

        QMetaObject::connectSlotsByName(slitunit);
    } // setupUi

    void retranslateUi(QWidget *slitunit)
    {
        slitunit->setWindowTitle(QApplication::translate("slitunit", "Form", 0));
        pushButton_7->setText(QApplication::translate("slitunit", "More", 0));
        pushButton_5->setText(QApplication::translate("slitunit", "STOP", 0));
        pushButton_5->setProperty("pv", QVariant(QApplication::translate("slitunit", "u411pgm1:PH_0_AKTION", 0)));
        pushButton_9->setText(QApplication::translate("slitunit", "More", 0));
        pushButton_2->setText(QApplication::translate("slitunit", "More", 0));
        pushButton_3->setText(QApplication::translate("slitunit", "STOP", 0));
        pushButton_3->setProperty("pv", QVariant(QApplication::translate("slitunit", "u411pgm1:ES_0_AKTION", 0)));
        pushButton_6->setText(QApplication::translate("slitunit", "STOP", 0));
        pushButton_6->setProperty("pv", QVariant(QApplication::translate("slitunit", "u411pgm1:PH_1_GET", 0)));
        pushButton_8->setText(QApplication::translate("slitunit", "STOP", 0));
        pushButton_8->setProperty("pv", QVariant(QApplication::translate("slitunit", "u411pgm1:PH_2_AKTION", 0)));
        pushButton_4->setText(QApplication::translate("slitunit", "More", 0));
        pushButton_26->setText(QApplication::translate("slitunit", "^", 0));
        pushButton_26->setProperty("pv", QVariant(QApplication::translate("slitunit", "u411pgm1:ES_0_AKTION", 0)));
        pushButton_27->setText(QApplication::translate("slitunit", "v", 0));
        pushButton_27->setProperty("pv", QVariant(QApplication::translate("slitunit", "u411pgm1:ES_0_AKTION", 0)));
        label_41->setText(QApplication::translate("slitunit", "TextLabel", 0));
        label_41->setProperty("pv", QVariant(QApplication::translate("slitunit", "u411pgm1:PH_0_GET", 0)));
        label_15->setText(QApplication::translate("slitunit", "TextLabel", 0));
        label_15->setProperty("pv", QVariant(QApplication::translate("slitunit", "u411pgm1:PH_0_Name", 0)));
        label_6->setText(QApplication::translate("slitunit", "Speed", 0));
        Axis_1->setProperty("description", QVariant(QApplication::translate("slitunit", "VDSO", 0)));
        Axis_1->setProperty("pvReadback", QVariant(QApplication::translate("slitunit", "u411pgm1:ES_0_SW", 0)));
        Axis_1->setProperty("units", QVariant(QApplication::translate("slitunit", "\302\265m", 0)));
        Axis_1->setProperty("pv", QVariant(QApplication::translate("slitunit", "u411pgm1:ES_0_Input", 0)));
        Axis_2->setProperty("description", QVariant(QApplication::translate("slitunit", "HDSO", 0)));
        Axis_2->setProperty("pvReadback", QVariant(QApplication::translate("slitunit", "u411pgm1:PH_0_GET", 0)));
        Axis_2->setProperty("units", QVariant(QApplication::translate("slitunit", "\302\265m", 0)));
        Axis_2->setProperty("pv", QVariant(QApplication::translate("slitunit", "u411pgm1:PH_0_SET", 0)));
        Axis_3->setProperty("description", QVariant(QApplication::translate("slitunit", "HDST", 0)));
        Axis_3->setProperty("pvReadback", QVariant(QApplication::translate("slitunit", "u411pgm1:PH_1_GET", 0)));
        Axis_3->setProperty("units", QVariant(QApplication::translate("slitunit", "\302\265m", 0)));
        Axis_3->setProperty("pv", QVariant(QApplication::translate("slitunit", "u411pgm1:PH_1_SET", 0)));
        Axis_4->setProperty("description", QVariant(QApplication::translate("slitunit", "SUT", 0)));
        Axis_4->setProperty("pvReadback", QVariant(QApplication::translate("slitunit", "u411pgm1:PH_2_GET", 0)));
        Axis_4->setProperty("units", QVariant(QApplication::translate("slitunit", "\302\265m", 0)));
        Axis_4->setProperty("pv", QVariant(QApplication::translate("slitunit", "u411pgm1:PH_2_SET", 0)));
        Axis_5->setProperty("description", QVariant(QApplication::translate("slitunit", "Speed", 0)));
        Axis_5->setProperty("pvReadback", QVariant(QApplication::translate("slitunit", "u411pgm1:ES_0_JOGSPEED", 0)));
        Axis_5->setProperty("units", QVariant(QApplication::translate("slitunit", "mm/s", 0)));
        Axis_5->setProperty("pv", QVariant(QApplication::translate("slitunit", "u411pgm1:ES_0_SETJOGSPEED", 0)));
        Axis_6->setProperty("description", QVariant(QApplication::translate("slitunit", "Low Level Motor", 0)));
        Axis_6->setProperty("pvReadback", QVariant(QApplication::translate("slitunit", "u411pgm1:ES_0_JOGSPEED", 0)));
        Axis_6->setProperty("units", QVariant(QApplication::translate("slitunit", "mm/s", 0)));
        Axis_6->setProperty("pv", QVariant(QApplication::translate("slitunit", "u411pgm1:ES_0_SETJOGSPEED", 0)));
        Axis_7->setProperty("description", QVariant(QApplication::translate("slitunit", "HDST", 0)));
        Axis_7->setProperty("pvReadback", QVariant(QApplication::translate("slitunit", "u411pgm1:PH_1_GET", 0)));
        Axis_7->setProperty("units", QVariant(QApplication::translate("slitunit", "um", 0)));
        Axis_7->setProperty("pv", QVariant(QApplication::translate("slitunit", "u411pgm1:PH_1_SET", 0)));
        Axis_8->setProperty("description", QVariant(QApplication::translate("slitunit", "VDSO", 0)));
        Axis_8->setProperty("pvReadback", QVariant(QApplication::translate("slitunit", "u411pgm1:ES_0_SW", 0)));
        Axis_8->setProperty("units", QVariant(QApplication::translate("slitunit", "um", 0)));
        Axis_8->setProperty("pv", QVariant(QApplication::translate("slitunit", "u411pgm1:ES_0_Input", 0)));
        Axis_9->setProperty("description", QVariant(QApplication::translate("slitunit", "SUT", 0)));
        Axis_9->setProperty("pvReadback", QVariant(QApplication::translate("slitunit", "u411pgm1:PH_2_GET", 0)));
        Axis_9->setProperty("units", QVariant(QApplication::translate("slitunit", "um", 0)));
        Axis_9->setProperty("pv", QVariant(QApplication::translate("slitunit", "u411pgm1:PH_2_SET", 0)));
    } // retranslateUi

};

namespace Ui {
    class slitunit: public Ui_slitunit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLITUNIT_H
