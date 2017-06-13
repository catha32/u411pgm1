/********************************************************************************
** Form generated from reading UI file 'undulator.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNDULATOR_H
#define UI_UNDULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcaaxis.h"
#include "qcalcdnumber.h"
#include "qcaled.h"

QT_BEGIN_NAMESPACE

class Ui_undulator
{
public:
    QGroupBox *groupBox;
    QGridLayout *_3;
    QLabel *label;
    QSpacerItem *spacerItem;
    QCALCDNumber *LCDNumber;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *spacerItem1;
    QCALCDNumber *LCDNumber_2;
    QLabel *label_4;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_11;
    QCALed *LedV1;
    QCALCDNumber *QCALCDNumberX;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_38;
    QCALed *LedV1_2;
    QCALCDNumber *QCALCDNumber_12;
    QLabel *label_37;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_12;
    QCALed *LedV2;
    QCALCDNumber *QCALCDNumber_2;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_24;
    QCALed *LedV12_3;
    QCALCDNumber *QCALCDNumber_11;
    QLabel *label_36;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_13;
    QCALed *LedV3;
    QCALCDNumber *QCALCDNumber_3;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_17;
    QCALed *LedV4;
    QCALCDNumber *QCALCDNumber_4;
    QLabel *label_23;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_18;
    QCALed *LedV5;
    QCALCDNumber *QCALCDNumber_5;
    QLabel *label_25;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_19;
    QCALed *LedV6;
    QCALCDNumber *QCALCDNumber_6;
    QLabel *label_26;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_20;
    QCALed *LedV7;
    QCALCDNumber *QCALCDNumber_7;
    QLabel *label_27;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_21;
    QCALed *LedV8;
    QCALCDNumber *QCALCDNumber_8;
    QLabel *label_28;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_40;
    QSpacerItem *horizontalSpacer;
    QCALCDNumber *QCALCDNumber_13;
    QLabel *label_41;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_32;
    QCALed *LedV11_5;
    QCALCDNumber *QCALCDNumber_17;
    QLabel *label_35;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_31;
    QCALed *LedV11;
    QCALCDNumber *QCALCDNumber_10;
    QLabel *label_34;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_42;
    QCALed *LedV11_2;
    QCALCDNumber *QCALCDNumber_14;
    QLabel *label_43;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_44;
    QCALed *LedV11_3;
    QCALCDNumber *QCALCDNumber_15;
    QLabel *label_45;
    QHBoxLayout *horizontalLayout_21;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QCAAxis *energyAxis;
    QCAAxis *slitAxis;
    QCAAxis *cffAxis;

    void setupUi(QWidget *undulator)
    {
        if (undulator->objectName().isEmpty())
            undulator->setObjectName(QStringLiteral("undulator"));
        undulator->resize(350, 770);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(undulator->sizePolicy().hasHeightForWidth());
        undulator->setSizePolicy(sizePolicy);
        undulator->setMinimumSize(QSize(0, 0));
        groupBox = new QGroupBox(undulator);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 8, 283, 116));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        _3 = new QGridLayout(groupBox);
        _3->setObjectName(QStringLiteral("_3"));
        _3->setContentsMargins(3, 3, 3, 3);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        _3->addWidget(label, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _3->addItem(spacerItem, 0, 1, 1, 1);

        LCDNumber = new QCALCDNumber(groupBox);
        LCDNumber->setObjectName(QStringLiteral("LCDNumber"));

        _3->addWidget(LCDNumber, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        _3->addWidget(label_2, 0, 3, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        _3->addWidget(label_3, 1, 0, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _3->addItem(spacerItem1, 1, 1, 1, 1);

        LCDNumber_2 = new QCALCDNumber(groupBox);
        LCDNumber_2->setObjectName(QStringLiteral("LCDNumber_2"));
        LCDNumber_2->setDigitCount(7);

        _3->addWidget(LCDNumber_2, 1, 2, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        _3->addWidget(label_4, 1, 3, 1, 1);

        groupBox_3 = new QGroupBox(undulator);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 250, 283, 523));
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(22, 0));

        horizontalLayout->addWidget(label_11);

        LedV1 = new QCALed(groupBox_3);
        LedV1->setObjectName(QStringLiteral("LedV1"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(LedV1->sizePolicy().hasHeightForWidth());
        LedV1->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(LedV1);

        QCALCDNumberX = new QCALCDNumber(groupBox_3);
        QCALCDNumberX->setObjectName(QStringLiteral("QCALCDNumberX"));
        QCALCDNumberX->setMinimumSize(QSize(140, 24));
        QCALCDNumberX->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(QCALCDNumberX);

        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout->addWidget(label_14);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_38 = new QLabel(groupBox_3);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setMinimumSize(QSize(22, 0));

        horizontalLayout_2->addWidget(label_38);

        LedV1_2 = new QCALed(groupBox_3);
        LedV1_2->setObjectName(QStringLiteral("LedV1_2"));
        sizePolicy2.setHeightForWidth(LedV1_2->sizePolicy().hasHeightForWidth());
        LedV1_2->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(LedV1_2);

        QCALCDNumber_12 = new QCALCDNumber(groupBox_3);
        QCALCDNumber_12->setObjectName(QStringLiteral("QCALCDNumber_12"));
        QCALCDNumber_12->setMinimumSize(QSize(140, 24));

        horizontalLayout_2->addWidget(QCALCDNumber_12);

        label_37 = new QLabel(groupBox_3);
        label_37->setObjectName(QStringLiteral("label_37"));

        horizontalLayout_2->addWidget(label_37);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(22, 0));

        horizontalLayout_3->addWidget(label_12);

        LedV2 = new QCALed(groupBox_3);
        LedV2->setObjectName(QStringLiteral("LedV2"));
        sizePolicy2.setHeightForWidth(LedV2->sizePolicy().hasHeightForWidth());
        LedV2->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(LedV2);

        QCALCDNumber_2 = new QCALCDNumber(groupBox_3);
        QCALCDNumber_2->setObjectName(QStringLiteral("QCALCDNumber_2"));
        QCALCDNumber_2->setMinimumSize(QSize(140, 24));

        horizontalLayout_3->addWidget(QCALCDNumber_2);

        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_3->addWidget(label_15);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_24 = new QLabel(groupBox_3);
        label_24->setObjectName(QStringLiteral("label_24"));

        horizontalLayout_4->addWidget(label_24);

        LedV12_3 = new QCALed(groupBox_3);
        LedV12_3->setObjectName(QStringLiteral("LedV12_3"));
        sizePolicy2.setHeightForWidth(LedV12_3->sizePolicy().hasHeightForWidth());
        LedV12_3->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(LedV12_3);

        QCALCDNumber_11 = new QCALCDNumber(groupBox_3);
        QCALCDNumber_11->setObjectName(QStringLiteral("QCALCDNumber_11"));
        QCALCDNumber_11->setMinimumSize(QSize(140, 24));

        horizontalLayout_4->addWidget(QCALCDNumber_11);

        label_36 = new QLabel(groupBox_3);
        label_36->setObjectName(QStringLiteral("label_36"));

        horizontalLayout_4->addWidget(label_36);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(22, 0));

        horizontalLayout_5->addWidget(label_13);

        LedV3 = new QCALed(groupBox_3);
        LedV3->setObjectName(QStringLiteral("LedV3"));
        sizePolicy2.setHeightForWidth(LedV3->sizePolicy().hasHeightForWidth());
        LedV3->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(LedV3);

        QCALCDNumber_3 = new QCALCDNumber(groupBox_3);
        QCALCDNumber_3->setObjectName(QStringLiteral("QCALCDNumber_3"));
        QCALCDNumber_3->setMinimumSize(QSize(140, 24));

        horizontalLayout_5->addWidget(QCALCDNumber_3);

        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_5->addWidget(label_16);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMinimumSize(QSize(22, 0));

        horizontalLayout_6->addWidget(label_17);

        LedV4 = new QCALed(groupBox_3);
        LedV4->setObjectName(QStringLiteral("LedV4"));
        sizePolicy2.setHeightForWidth(LedV4->sizePolicy().hasHeightForWidth());
        LedV4->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(LedV4);

        QCALCDNumber_4 = new QCALCDNumber(groupBox_3);
        QCALCDNumber_4->setObjectName(QStringLiteral("QCALCDNumber_4"));
        QCALCDNumber_4->setMinimumSize(QSize(140, 24));

        horizontalLayout_6->addWidget(QCALCDNumber_4);

        label_23 = new QLabel(groupBox_3);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_6->addWidget(label_23);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMinimumSize(QSize(22, 0));

        horizontalLayout_7->addWidget(label_18);

        LedV5 = new QCALed(groupBox_3);
        LedV5->setObjectName(QStringLiteral("LedV5"));
        sizePolicy2.setHeightForWidth(LedV5->sizePolicy().hasHeightForWidth());
        LedV5->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(LedV5);

        QCALCDNumber_5 = new QCALCDNumber(groupBox_3);
        QCALCDNumber_5->setObjectName(QStringLiteral("QCALCDNumber_5"));
        QCALCDNumber_5->setMinimumSize(QSize(140, 24));

        horizontalLayout_7->addWidget(QCALCDNumber_5);

        label_25 = new QLabel(groupBox_3);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout_7->addWidget(label_25);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setMinimumSize(QSize(22, 0));

        horizontalLayout_8->addWidget(label_19);

        LedV6 = new QCALed(groupBox_3);
        LedV6->setObjectName(QStringLiteral("LedV6"));
        sizePolicy2.setHeightForWidth(LedV6->sizePolicy().hasHeightForWidth());
        LedV6->setSizePolicy(sizePolicy2);

        horizontalLayout_8->addWidget(LedV6);

        QCALCDNumber_6 = new QCALCDNumber(groupBox_3);
        QCALCDNumber_6->setObjectName(QStringLiteral("QCALCDNumber_6"));
        QCALCDNumber_6->setMinimumSize(QSize(140, 24));

        horizontalLayout_8->addWidget(QCALCDNumber_6);

        label_26 = new QLabel(groupBox_3);
        label_26->setObjectName(QStringLiteral("label_26"));

        horizontalLayout_8->addWidget(label_26);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setMinimumSize(QSize(22, 0));

        horizontalLayout_9->addWidget(label_20);

        LedV7 = new QCALed(groupBox_3);
        LedV7->setObjectName(QStringLiteral("LedV7"));
        sizePolicy2.setHeightForWidth(LedV7->sizePolicy().hasHeightForWidth());
        LedV7->setSizePolicy(sizePolicy2);

        horizontalLayout_9->addWidget(LedV7);

        QCALCDNumber_7 = new QCALCDNumber(groupBox_3);
        QCALCDNumber_7->setObjectName(QStringLiteral("QCALCDNumber_7"));
        QCALCDNumber_7->setMinimumSize(QSize(140, 24));

        horizontalLayout_9->addWidget(QCALCDNumber_7);

        label_27 = new QLabel(groupBox_3);
        label_27->setObjectName(QStringLiteral("label_27"));

        horizontalLayout_9->addWidget(label_27);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setMinimumSize(QSize(22, 0));

        horizontalLayout_10->addWidget(label_21);

        LedV8 = new QCALed(groupBox_3);
        LedV8->setObjectName(QStringLiteral("LedV8"));
        sizePolicy2.setHeightForWidth(LedV8->sizePolicy().hasHeightForWidth());
        LedV8->setSizePolicy(sizePolicy2);

        horizontalLayout_10->addWidget(LedV8);

        QCALCDNumber_8 = new QCALCDNumber(groupBox_3);
        QCALCDNumber_8->setObjectName(QStringLiteral("QCALCDNumber_8"));
        QCALCDNumber_8->setMinimumSize(QSize(140, 24));

        horizontalLayout_10->addWidget(QCALCDNumber_8);

        label_28 = new QLabel(groupBox_3);
        label_28->setObjectName(QStringLiteral("label_28"));

        horizontalLayout_10->addWidget(label_28);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_40 = new QLabel(groupBox_3);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setMinimumSize(QSize(30, 0));

        horizontalLayout_18->addWidget(label_40);

        horizontalSpacer = new QSpacerItem(37, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer);

        QCALCDNumber_13 = new QCALCDNumber(groupBox_3);
        QCALCDNumber_13->setObjectName(QStringLiteral("QCALCDNumber_13"));
        QCALCDNumber_13->setMinimumSize(QSize(140, 24));

        horizontalLayout_18->addWidget(QCALCDNumber_13);

        label_41 = new QLabel(groupBox_3);
        label_41->setObjectName(QStringLiteral("label_41"));

        horizontalLayout_18->addWidget(label_41);


        verticalLayout->addLayout(horizontalLayout_18);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_32 = new QLabel(groupBox_3);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setMinimumSize(QSize(30, 0));

        horizontalLayout_14->addWidget(label_32);

        LedV11_5 = new QCALed(groupBox_3);
        LedV11_5->setObjectName(QStringLiteral("LedV11_5"));
        sizePolicy2.setHeightForWidth(LedV11_5->sizePolicy().hasHeightForWidth());
        LedV11_5->setSizePolicy(sizePolicy2);

        horizontalLayout_14->addWidget(LedV11_5);

        QCALCDNumber_17 = new QCALCDNumber(groupBox_3);
        QCALCDNumber_17->setObjectName(QStringLiteral("QCALCDNumber_17"));
        QCALCDNumber_17->setMinimumSize(QSize(140, 24));

        horizontalLayout_14->addWidget(QCALCDNumber_17);

        label_35 = new QLabel(groupBox_3);
        label_35->setObjectName(QStringLiteral("label_35"));

        horizontalLayout_14->addWidget(label_35);


        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_31 = new QLabel(groupBox_3);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setMinimumSize(QSize(30, 0));

        horizontalLayout_13->addWidget(label_31);

        LedV11 = new QCALed(groupBox_3);
        LedV11->setObjectName(QStringLiteral("LedV11"));
        sizePolicy2.setHeightForWidth(LedV11->sizePolicy().hasHeightForWidth());
        LedV11->setSizePolicy(sizePolicy2);

        horizontalLayout_13->addWidget(LedV11);

        QCALCDNumber_10 = new QCALCDNumber(groupBox_3);
        QCALCDNumber_10->setObjectName(QStringLiteral("QCALCDNumber_10"));
        QCALCDNumber_10->setMinimumSize(QSize(140, 24));

        horizontalLayout_13->addWidget(QCALCDNumber_10);

        label_34 = new QLabel(groupBox_3);
        label_34->setObjectName(QStringLiteral("label_34"));

        horizontalLayout_13->addWidget(label_34);


        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_42 = new QLabel(groupBox_3);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setMinimumSize(QSize(30, 0));

        horizontalLayout_19->addWidget(label_42);

        LedV11_2 = new QCALed(groupBox_3);
        LedV11_2->setObjectName(QStringLiteral("LedV11_2"));
        sizePolicy2.setHeightForWidth(LedV11_2->sizePolicy().hasHeightForWidth());
        LedV11_2->setSizePolicy(sizePolicy2);

        horizontalLayout_19->addWidget(LedV11_2);

        QCALCDNumber_14 = new QCALCDNumber(groupBox_3);
        QCALCDNumber_14->setObjectName(QStringLiteral("QCALCDNumber_14"));
        QCALCDNumber_14->setMinimumSize(QSize(140, 24));

        horizontalLayout_19->addWidget(QCALCDNumber_14);

        label_43 = new QLabel(groupBox_3);
        label_43->setObjectName(QStringLiteral("label_43"));

        horizontalLayout_19->addWidget(label_43);


        verticalLayout->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_44 = new QLabel(groupBox_3);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setMinimumSize(QSize(30, 0));

        horizontalLayout_20->addWidget(label_44);

        LedV11_3 = new QCALed(groupBox_3);
        LedV11_3->setObjectName(QStringLiteral("LedV11_3"));
        sizePolicy2.setHeightForWidth(LedV11_3->sizePolicy().hasHeightForWidth());
        LedV11_3->setSizePolicy(sizePolicy2);

        horizontalLayout_20->addWidget(LedV11_3);

        QCALCDNumber_15 = new QCALCDNumber(groupBox_3);
        QCALCDNumber_15->setObjectName(QStringLiteral("QCALCDNumber_15"));
        QCALCDNumber_15->setMinimumSize(QSize(140, 24));
        QCALCDNumber_15->setDigitCount(5);

        horizontalLayout_20->addWidget(QCALCDNumber_15);

        label_45 = new QLabel(groupBox_3);
        label_45->setObjectName(QStringLiteral("label_45"));

        horizontalLayout_20->addWidget(label_45);


        verticalLayout->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));

        verticalLayout->addLayout(horizontalLayout_21);

        groupBox_2 = new QGroupBox(undulator);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 130, 283, 122));
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(3, 3, 3, 3);
        energyAxis = new QCAAxis(groupBox_2);
        energyAxis->setObjectName(QStringLiteral("energyAxis"));
        energyAxis->setMinimumSize(QSize(100, 10));

        verticalLayout_2->addWidget(energyAxis);

        slitAxis = new QCAAxis(groupBox_2);
        slitAxis->setObjectName(QStringLiteral("slitAxis"));
        slitAxis->setMinimumSize(QSize(100, 10));

        verticalLayout_2->addWidget(slitAxis);

        cffAxis = new QCAAxis(groupBox_2);
        cffAxis->setObjectName(QStringLiteral("cffAxis"));
        cffAxis->setMinimumSize(QSize(100, 10));

        verticalLayout_2->addWidget(cffAxis);


        retranslateUi(undulator);

        QMetaObject::connectSlotsByName(undulator);
    } // setupUi

    void retranslateUi(QWidget *undulator)
    {
        undulator->setWindowTitle(QApplication::translate("undulator", "Form", 0));
        groupBox->setTitle(QApplication::translate("undulator", "Undulator", 0));
        label->setText(QApplication::translate("undulator", "Energy", 0));
        LCDNumber->setProperty("pv", QVariant(QApplication::translate("undulator", "u411pgm1:monoGetEnergy", 0)));
        label_2->setText(QApplication::translate("undulator", "eV", 0));
        label_3->setText(QApplication::translate("undulator", "Gap", 0));
        LCDNumber_2->setProperty("pv", QVariant(QApplication::translate("undulator", "U41IT3R:BasePmGap.A", 0)));
        label_4->setText(QApplication::translate("undulator", "mm", 0));
        groupBox_3->setTitle(QApplication::translate("undulator", "Vacuum", 0));
        label_11->setText(QApplication::translate("undulator", "V1", 0));
        LedV1->setProperty("pv", QVariant(QApplication::translate("undulator", "V01V01U006L:Opened", 0)));
        QCALCDNumberX->setProperty("pv", QVariant(QApplication::translate("undulator", "GPNT01V01U006L:Pressure", 0)));
        label_14->setText(QApplication::translate("undulator", "mbar", 0));
        label_38->setText(QApplication::translate("undulator", "V1-2", 0));
        LedV1_2->setProperty("pv", QVariant(QApplication::translate("undulator", "V02V01U006L:Opened", 0)));
        QCALCDNumber_12->setProperty("pv", QVariant(QApplication::translate("undulator", "GPNT01-02V01U006L:Pressure", 0)));
        label_37->setText(QApplication::translate("undulator", "mbar", 0));
        label_12->setText(QApplication::translate("undulator", "V2", 0));
        LedV2->setProperty("pv", QVariant(QApplication::translate("undulator", "V02V01U006L:Opened", 0)));
        QCALCDNumber_2->setProperty("pv", QVariant(QApplication::translate("undulator", "GPNT02V01U006L:Pressure", 0)));
        label_15->setText(QApplication::translate("undulator", "mbar", 0));
        label_24->setText(QApplication::translate("undulator", "BS", 0));
        LedV12_3->setProperty("pv", QVariant(QApplication::translate("undulator", "BSR01U006L:Opened", 0)));
        QCALCDNumber_11->setProperty("pv", QVariant(QApplication::translate("undulator", "MR02V01U006L:Pressure", 0)));
        label_36->setText(QApplication::translate("undulator", "mbar", 0));
        label_13->setText(QApplication::translate("undulator", "V3", 0));
        LedV3->setProperty("pv", QVariant(QApplication::translate("undulator", "V03V01U006L:Opened", 0)));
        QCALCDNumber_3->setProperty("pv", QVariant(QApplication::translate("undulator", "GPNT03V01U106L:Pressure", 0)));
        label_16->setText(QApplication::translate("undulator", "mbar", 0));
        label_17->setText(QApplication::translate("undulator", "V4", 0));
        LedV4->setProperty("pv", QVariant(QApplication::translate("undulator", "V04V01U106L:Opened", 0)));
        QCALCDNumber_4->setProperty("pv", QVariant(QApplication::translate("undulator", "GPNT04V01U106L:Pressure", 0)));
        label_23->setText(QApplication::translate("undulator", "mbar", 0));
        label_18->setText(QApplication::translate("undulator", "V5", 0));
        LedV5->setProperty("pv", QVariant(QApplication::translate("undulator", "V05V01U106L:Opened", 0)));
        QCALCDNumber_5->setProperty("pv", QVariant(QApplication::translate("undulator", "GPNT05V01U106L:Pressure", 0)));
        label_25->setText(QApplication::translate("undulator", "mbar", 0));
        label_19->setText(QApplication::translate("undulator", "V6", 0));
        LedV6->setProperty("pv", QVariant(QApplication::translate("undulator", "V06V01U106L:Opened", 0)));
        QCALCDNumber_6->setProperty("pv", QVariant(QApplication::translate("undulator", "GPNT06V01U106L:Pressure", 0)));
        label_26->setText(QApplication::translate("undulator", "mbar", 0));
        label_20->setText(QApplication::translate("undulator", "V7", 0));
        LedV7->setProperty("pv", QVariant(QApplication::translate("undulator", "V07V01U306L:Opened", 0)));
        QCALCDNumber_7->setProperty("pv", QVariant(QApplication::translate("undulator", "GPNT07V01U306L:Pressure", 0)));
        label_27->setText(QApplication::translate("undulator", "mbar", 0));
        label_21->setText(QApplication::translate("undulator", "V8", 0));
        LedV8->setProperty("pv", QVariant(QApplication::translate("undulator", "V08V01U306L:Opened", 0)));
        QCALCDNumber_8->setProperty("pv", QVariant(QApplication::translate("undulator", "GPNT08V01U306L:Pressure", 0)));
        label_28->setText(QApplication::translate("undulator", "mbar", 0));
        label_40->setText(QApplication::translate("undulator", "V9", 0));
        QCALCDNumber_13->setProperty("pv", QVariant(QApplication::translate("undulator", "MR09V01U306L:Pressure", 0)));
        label_41->setText(QApplication::translate("undulator", "mbar", 0));
        label_32->setText(QApplication::translate("undulator", "V10", 0));
        LedV11_5->setProperty("pv", QVariant(QApplication::translate("undulator", "V10V01U306L:Opened", 0)));
        QCALCDNumber_17->setProperty("pv", QVariant(QApplication::translate("undulator", "GPNT10V01U306L:Pressure", 0)));
        label_35->setText(QApplication::translate("undulator", "mbar", 0));
        label_31->setText(QApplication::translate("undulator", "V11", 0));
        LedV11->setProperty("pv", QVariant(QApplication::translate("undulator", "V11V01U306L:Opened", 0)));
        QCALCDNumber_10->setProperty("pv", QVariant(QApplication::translate("undulator", "MR11-01V01U306L:Pressure", 0)));
        label_34->setText(QApplication::translate("undulator", "mbar", 0));
        label_42->setText(QApplication::translate("undulator", "V12", 0));
        LedV11_2->setProperty("pv", QVariant(QApplication::translate("undulator", "V12V01U306L:Opened", 0)));
        QCALCDNumber_14->setProperty("pv", QVariant(QApplication::translate("undulator", "MR12V01U306L:Pressure", 0)));
        label_43->setText(QApplication::translate("undulator", "mbar", 0));
        label_44->setText(QApplication::translate("undulator", "V13", 0));
        LedV11_3->setProperty("pv", QVariant(QApplication::translate("undulator", "V13V01U306L:Opened", 0)));
        QCALCDNumber_15->setProperty("pv", QVariant(QApplication::translate("undulator", "MR13V01U306L:Pressure", 0)));
        label_45->setText(QApplication::translate("undulator", "mbar", 0));
        groupBox_2->setTitle(QApplication::translate("undulator", "Monochromator", 0));
        energyAxis->setProperty("description", QVariant(QApplication::translate("undulator", "Energy", 0)));
        energyAxis->setProperty("pvReadback", QVariant(QApplication::translate("undulator", "u411pgm1:monoGetEnergy", 0)));
        energyAxis->setProperty("units", QVariant(QApplication::translate("undulator", "eV", 0)));
        energyAxis->setProperty("pv", QVariant(QApplication::translate("undulator", "u411pgm1:monoSetEnergy", 0)));
        slitAxis->setProperty("description", QVariant(QApplication::translate("undulator", "Ext Slit", 0)));
        slitAxis->setProperty("pvReadback", QVariant(QApplication::translate("undulator", "u411pgm1:ES_0_SW", 0)));
        slitAxis->setProperty("units", QVariant(QApplication::translate("undulator", "\302\265m", 0)));
        slitAxis->setProperty("pv", QVariant(QApplication::translate("undulator", "u411pgm1:ES_0_SetSW", 0)));
        cffAxis->setProperty("description", QVariant(QApplication::translate("undulator", "CFF Value", 0)));
        cffAxis->setProperty("pvReadback", QVariant(QApplication::translate("undulator", "u411pgm1:cff", 0)));
        cffAxis->setProperty("units", QVariant(QString()));
        cffAxis->setProperty("pv", QVariant(QApplication::translate("undulator", "u411pgm1:SetCff", 0)));
    } // retranslateUi

};

namespace Ui {
    class undulator: public Ui_undulator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNDULATOR_H
