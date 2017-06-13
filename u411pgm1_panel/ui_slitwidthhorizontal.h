/********************************************************************************
** Form generated from reading UI file 'slitwidthhorizontal.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLITWIDTHHORIZONTAL_H
#define UI_SLITWIDTHHORIZONTAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qcaaxis.h"
#include "qcalabel.h"
#include "qcaled.h"
#include "qcapushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_slitwidthhorizontal
{
public:
    QCAPushButton *pushButton_16;
    QCAPushButton *pushButton_17;
    QCALabel *label_9;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QCAPushButton *pushButton_18;
    QCAPushButton *pushButton_19;
    QCAPushButton *pushButton_20;
    QCALabel *label_11;
    QCALed *LedV1_5;
    QCAPushButton *pushButton_21;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QCAPushButton *pushButton_22;
    QCAPushButton *pushButton_23;
    QCAPushButton *pushButton_24;
    QCALabel *label_12;
    QCAPushButton *pushButton_25;
    QCALabel *label_14;
    QLabel *label_15;
    QCAPushButton *pushButton_26;
    QCALed *LedV1_6;
    QCAPushButton *pushButton_27;
    QCAPushButton *pushButton_28;
    QCALed *LedV1_7;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_7;
    QCAPushButton *pushButton_29;
    QCAPushButton *pushButton_30;
    QCALed *LedV1_8;
    QCALabel *label;
    QCAAxis *gotoaxis;
    QCAAxis *stepsaxis;
    QCAAxis *speedaxis;
    QCAAxis *posaxis;

    void setupUi(QWidget *slitwidthhorizontal)
    {
        if (slitwidthhorizontal->objectName().isEmpty())
            slitwidthhorizontal->setObjectName(QStringLiteral("slitwidthhorizontal"));
        slitwidthhorizontal->resize(501, 601);
        slitwidthhorizontal->setMinimumSize(QSize(0, 0));
        pushButton_16 = new QCAPushButton(slitwidthhorizontal);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(130, 260, 171, 22));
        pushButton_17 = new QCAPushButton(slitwidthhorizontal);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(218, 103, 80, 22));
        label_9 = new QCALabel(slitwidthhorizontal);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 103, 41, 16));
        layoutWidget_4 = new QWidget(slitwidthhorizontal);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(130, 140, 168, 24));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_18 = new QCAPushButton(layoutWidget_4);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));

        horizontalLayout_5->addWidget(pushButton_18);

        pushButton_19 = new QCAPushButton(layoutWidget_4);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));

        horizontalLayout_5->addWidget(pushButton_19);

        pushButton_20 = new QCAPushButton(slitwidthhorizontal);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setGeometry(QRect(370, 380, 51, 22));
        label_11 = new QCALabel(slitwidthhorizontal);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(140, 30, 161, 16));
        LedV1_5 = new QCALed(slitwidthhorizontal);
        LedV1_5->setObjectName(QStringLiteral("LedV1_5"));
        LedV1_5->setGeometry(QRect(80, 100, 21, 21));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LedV1_5->sizePolicy().hasHeightForWidth());
        LedV1_5->setSizePolicy(sizePolicy);
        pushButton_21 = new QCAPushButton(slitwidthhorizontal);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));
        pushButton_21->setGeometry(QRect(370, 420, 51, 22));
        layoutWidget_5 = new QWidget(slitwidthhorizontal);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(130, 220, 168, 24));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButton_22 = new QCAPushButton(layoutWidget_5);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));

        horizontalLayout_6->addWidget(pushButton_22);

        pushButton_23 = new QCAPushButton(layoutWidget_5);
        pushButton_23->setObjectName(QStringLiteral("pushButton_23"));

        horizontalLayout_6->addWidget(pushButton_23);

        pushButton_24 = new QCAPushButton(slitwidthhorizontal);
        pushButton_24->setObjectName(QStringLiteral("pushButton_24"));
        pushButton_24->setGeometry(QRect(430, 420, 51, 22));
        label_12 = new QCALabel(slitwidthhorizontal);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(50, 540, 59, 14));
        label_12->setLayoutDirection(Qt::LeftToRight);
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushButton_25 = new QCAPushButton(slitwidthhorizontal);
        pushButton_25->setObjectName(QStringLiteral("pushButton_25"));
        pushButton_25->setGeometry(QRect(130, 103, 80, 22));
        label_14 = new QCALabel(slitwidthhorizontal);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(160, 10, 111, 16));
        label_15 = new QLabel(slitwidthhorizontal);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(180, 540, 59, 14));
        label_15->setLayoutDirection(Qt::LeftToRight);
        label_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushButton_26 = new QCAPushButton(slitwidthhorizontal);
        pushButton_26->setObjectName(QStringLiteral("pushButton_26"));
        pushButton_26->setGeometry(QRect(430, 380, 51, 22));
        LedV1_6 = new QCALed(slitwidthhorizontal);
        LedV1_6->setObjectName(QStringLiteral("LedV1_6"));
        LedV1_6->setGeometry(QRect(80, 180, 21, 21));
        sizePolicy.setHeightForWidth(LedV1_6->sizePolicy().hasHeightForWidth());
        LedV1_6->setSizePolicy(sizePolicy);
        pushButton_27 = new QCAPushButton(slitwidthhorizontal);
        pushButton_27->setObjectName(QStringLiteral("pushButton_27"));
        pushButton_27->setGeometry(QRect(300, 560, 81, 22));
        pushButton_27->setLayoutDirection(Qt::LeftToRight);
        pushButton_27->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        pushButton_28 = new QCAPushButton(slitwidthhorizontal);
        pushButton_28->setObjectName(QStringLiteral("pushButton_28"));
        pushButton_28->setGeometry(QRect(40, 560, 81, 22));
        pushButton_28->setLayoutDirection(Qt::LeftToRight);
        LedV1_7 = new QCALed(slitwidthhorizontal);
        LedV1_7->setObjectName(QStringLiteral("LedV1_7"));
        LedV1_7->setGeometry(QRect(80, 140, 21, 21));
        sizePolicy.setHeightForWidth(LedV1_7->sizePolicy().hasHeightForWidth());
        LedV1_7->setSizePolicy(sizePolicy);
        layoutWidget_6 = new QWidget(slitwidthhorizontal);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(130, 180, 168, 24));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        pushButton_29 = new QCAPushButton(layoutWidget_6);
        pushButton_29->setObjectName(QStringLiteral("pushButton_29"));

        horizontalLayout_7->addWidget(pushButton_29);

        pushButton_30 = new QCAPushButton(layoutWidget_6);
        pushButton_30->setObjectName(QStringLiteral("pushButton_30"));

        horizontalLayout_7->addWidget(pushButton_30);

        LedV1_8 = new QCALed(slitwidthhorizontal);
        LedV1_8->setObjectName(QStringLiteral("LedV1_8"));
        LedV1_8->setGeometry(QRect(80, 220, 21, 21));
        sizePolicy.setHeightForWidth(LedV1_8->sizePolicy().hasHeightForWidth());
        LedV1_8->setSizePolicy(sizePolicy);
        label = new QCALabel(slitwidthhorizontal);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 150, 59, 14));
        gotoaxis = new QCAAxis(slitwidthhorizontal);
        gotoaxis->setObjectName(QStringLiteral("gotoaxis"));
        gotoaxis->setGeometry(QRect(10, 320, 350, 27));
        gotoaxis->setMinimumSize(QSize(100, 10));
        stepsaxis = new QCAAxis(slitwidthhorizontal);
        stepsaxis->setObjectName(QStringLiteral("stepsaxis"));
        stepsaxis->setGeometry(QRect(10, 420, 350, 27));
        stepsaxis->setMinimumSize(QSize(100, 10));
        speedaxis = new QCAAxis(slitwidthhorizontal);
        speedaxis->setObjectName(QStringLiteral("speedaxis"));
        speedaxis->setGeometry(QRect(10, 380, 350, 27));
        speedaxis->setMinimumSize(QSize(100, 10));
        posaxis = new QCAAxis(slitwidthhorizontal);
        posaxis->setObjectName(QStringLiteral("posaxis"));
        posaxis->setGeometry(QRect(10, 470, 350, 27));
        posaxis->setMinimumSize(QSize(100, 10));

        retranslateUi(slitwidthhorizontal);

        QMetaObject::connectSlotsByName(slitwidthhorizontal);
    } // setupUi

    void retranslateUi(QWidget *slitwidthhorizontal)
    {
        slitwidthhorizontal->setWindowTitle(QApplication::translate("slitwidthhorizontal", "Form", 0));
        pushButton_16->setText(QApplication::translate("slitwidthhorizontal", "Save all as startup", 0));
        pushButton_16->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_AKTION", 0)));
        pushButton_17->setText(QApplication::translate("slitwidthhorizontal", "Save as", 0));
        pushButton_17->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_SAVEN", 0)));
        label_9->setText(QApplication::translate("slitwidthhorizontal", "open", 0));
        label_9->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_GETN.ONST", 0)));
        pushButton_18->setText(QApplication::translate("slitwidthhorizontal", "Goto", 0));
        pushButton_18->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_GON", 0)));
        pushButton_19->setText(QApplication::translate("slitwidthhorizontal", "Save as", 0));
        pushButton_19->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_SAVEN", 0)));
        pushButton_20->setText(QApplication::translate("slitwidthhorizontal", "In", 0));
        pushButton_20->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_DOSTEP", 0)));
        label_11->setText(QApplication::translate("slitwidthhorizontal", "TextLabel", 0));
        label_11->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_Name", 0)));
        LedV1_5->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_getn.B.", 0)));
        pushButton_21->setText(QApplication::translate("slitwidthhorizontal", "In", 0));
        pushButton_21->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_AKTION", 0)));
        pushButton_22->setText(QApplication::translate("slitwidthhorizontal", "Goto", 0));
        pushButton_22->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_GON", 0)));
        pushButton_23->setText(QApplication::translate("slitwidthhorizontal", "Save as", 0));
        pushButton_23->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_SAVEN", 0)));
        pushButton_24->setText(QApplication::translate("slitwidthhorizontal", "Out", 0));
        pushButton_24->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_AKTION", 0)));
        label_12->setText(QApplication::translate("slitwidthhorizontal", "Hard (H)", 0));
        label_12->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_REF_STAT", 0)));
        pushButton_25->setText(QApplication::translate("slitwidthhorizontal", "Goto", 0));
        pushButton_25->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_GON", 0)));
        label_14->setText(QApplication::translate("slitwidthhorizontal", "TextLabel", 0));
        label_14->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:MonoName", 0)));
        label_15->setText(QApplication::translate("slitwidthhorizontal", "Pinhole", 0));
        pushButton_26->setText(QApplication::translate("slitwidthhorizontal", "Out", 0));
        pushButton_26->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_DOSTEP", 0)));
        LedV1_6->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_getn.D.", 0)));
        pushButton_27->setText(QApplication::translate("slitwidthhorizontal", "STOP", 0));
        pushButton_27->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_AKTION", 0)));
        pushButton_28->setText(QApplication::translate("slitwidthhorizontal", "DoRef", 0));
        pushButton_28->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_AKTION", 0)));
        LedV1_7->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_getn.C.", 0)));
        pushButton_29->setText(QApplication::translate("slitwidthhorizontal", "Goto", 0));
        pushButton_29->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_GON", 0)));
        pushButton_30->setText(QApplication::translate("slitwidthhorizontal", "Save as", 0));
        pushButton_30->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_SAVEN", 0)));
        LedV1_8->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_getn.E.", 0)));
        label->setText(QApplication::translate("slitwidthhorizontal", "close", 0));
        label->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_GETN.TWST", 0)));
        gotoaxis->setProperty("description", QVariant(QApplication::translate("slitwidthhorizontal", "Goto", 0)));
        gotoaxis->setProperty("pvReadback", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_SET", 0)));
        gotoaxis->setProperty("units", QVariant(QApplication::translate("slitwidthhorizontal", "um", 0)));
        gotoaxis->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_GET", 0)));
        stepsaxis->setProperty("description", QVariant(QApplication::translate("slitwidthhorizontal", "Rel.Steps", 0)));
        stepsaxis->setProperty("pvReadback", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_SETSTEP", 0)));
        stepsaxis->setProperty("units", QVariant(QApplication::translate("slitwidthhorizontal", "um", 0)));
        stepsaxis->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_STEP", 0)));
        speedaxis->setProperty("description", QVariant(QApplication::translate("slitwidthhorizontal", "jogSpeed", 0)));
        speedaxis->setProperty("pvReadback", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_SETJOGSPEED", 0)));
        speedaxis->setProperty("units", QVariant(QApplication::translate("slitwidthhorizontal", "um", "mm/s")));
        speedaxis->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_JOGSPEED", 0)));
        posaxis->setProperty("description", QVariant(QApplication::translate("slitwidthhorizontal", "setpos", 0)));
        posaxis->setProperty("pvReadback", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_Load", 0)));
        posaxis->setProperty("units", QVariant(QApplication::translate("slitwidthhorizontal", "mm/s", 0)));
        posaxis->setProperty("pv", QVariant(QApplication::translate("slitwidthhorizontal", "u411pgm1:PH_0_Load", 0)));
    } // retranslateUi

};

namespace Ui {
    class slitwidthhorizontal: public Ui_slitwidthhorizontal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLITWIDTHHORIZONTAL_H
