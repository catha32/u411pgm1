/********************************************************************************
** Form generated from reading UI file 'qcachannelconfdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QCACHANNELCONFDIALOGBASE_H
#define UI_QCACHANNELCONFDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "qcalineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QCAChannelConfDialogBase
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QToolButton *toolButton;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout1;
    QLabel *label;
    QSpacerItem *spacerItem;
    QCALineEdit *channelName;
    QHBoxLayout *hboxLayout2;
    QLabel *label_8;
    QSpacerItem *spacerItem1;
    QCALineEdit *units;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout2;
    QCheckBox *alarmSensitive;
    QCheckBox *blankOnInvalid;
    QHBoxLayout *hboxLayout3;
    QLabel *label_4;
    QDoubleSpinBox *lowerAlarmLimit;
    QHBoxLayout *hboxLayout4;
    QLabel *label_5;
    QDoubleSpinBox *lowerWarningLimit;
    QHBoxLayout *hboxLayout5;
    QLabel *label_6;
    QDoubleSpinBox *higherWarningLimit;
    QHBoxLayout *hboxLayout6;
    QLabel *label_7;
    QDoubleSpinBox *higherAlarmLimit;
    QGroupBox *groupBox_2;
    QVBoxLayout *vboxLayout3;
    QHBoxLayout *hboxLayout7;
    QLabel *label_2;
    QDoubleSpinBox *minimum;
    QHBoxLayout *hboxLayout8;
    QLabel *label_3;
    QDoubleSpinBox *maximum;
    QHBoxLayout *hboxLayout9;
    QLabel *label_9;
    QSpinBox *precision;
    QSpacerItem *spacerItem2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QCAChannelConfDialogBase)
    {
        if (QCAChannelConfDialogBase->objectName().isEmpty())
            QCAChannelConfDialogBase->setObjectName(QStringLiteral("QCAChannelConfDialogBase"));
        QCAChannelConfDialogBase->resize(390, 512);
        vboxLayout = new QVBoxLayout(QCAChannelConfDialogBase);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        toolButton = new QToolButton(QCAChannelConfDialogBase);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        const QIcon icon = QIcon(QString::fromUtf8("../../txm/povray/zp.png"));
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(100, 100));

        hboxLayout->addWidget(toolButton);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        label = new QLabel(QCAChannelConfDialogBase);
        label->setObjectName(QStringLiteral("label"));

        hboxLayout1->addWidget(label);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        channelName = new QCALineEdit(QCAChannelConfDialogBase);
        channelName->setObjectName(QStringLiteral("channelName"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(channelName->sizePolicy().hasHeightForWidth());
        channelName->setSizePolicy(sizePolicy);
        channelName->setMinimumSize(QSize(140, 0));

        hboxLayout1->addWidget(channelName);


        vboxLayout1->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        label_8 = new QLabel(QCAChannelConfDialogBase);
        label_8->setObjectName(QStringLiteral("label_8"));

        hboxLayout2->addWidget(label_8);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);

        units = new QCALineEdit(QCAChannelConfDialogBase);
        units->setObjectName(QStringLiteral("units"));
        units->setMinimumSize(QSize(140, 0));

        hboxLayout2->addWidget(units);


        vboxLayout1->addLayout(hboxLayout2);


        hboxLayout->addLayout(vboxLayout1);


        vboxLayout->addLayout(hboxLayout);

        groupBox = new QGroupBox(QCAChannelConfDialogBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        vboxLayout2 = new QVBoxLayout(groupBox);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        alarmSensitive = new QCheckBox(groupBox);
        alarmSensitive->setObjectName(QStringLiteral("alarmSensitive"));
        alarmSensitive->setChecked(true);

        vboxLayout2->addWidget(alarmSensitive);

        blankOnInvalid = new QCheckBox(groupBox);
        blankOnInvalid->setObjectName(QStringLiteral("blankOnInvalid"));
        blankOnInvalid->setChecked(true);

        vboxLayout2->addWidget(blankOnInvalid);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        hboxLayout3->addWidget(label_4);

        lowerAlarmLimit = new QDoubleSpinBox(groupBox);
        lowerAlarmLimit->setObjectName(QStringLiteral("lowerAlarmLimit"));
        lowerAlarmLimit->setEnabled(false);

        hboxLayout3->addWidget(lowerAlarmLimit);


        vboxLayout2->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QStringLiteral("hboxLayout4"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        hboxLayout4->addWidget(label_5);

        lowerWarningLimit = new QDoubleSpinBox(groupBox);
        lowerWarningLimit->setObjectName(QStringLiteral("lowerWarningLimit"));
        lowerWarningLimit->setEnabled(false);

        hboxLayout4->addWidget(lowerWarningLimit);


        vboxLayout2->addLayout(hboxLayout4);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QStringLiteral("hboxLayout5"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        hboxLayout5->addWidget(label_6);

        higherWarningLimit = new QDoubleSpinBox(groupBox);
        higherWarningLimit->setObjectName(QStringLiteral("higherWarningLimit"));
        higherWarningLimit->setEnabled(false);

        hboxLayout5->addWidget(higherWarningLimit);


        vboxLayout2->addLayout(hboxLayout5);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QStringLiteral("hboxLayout6"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        hboxLayout6->addWidget(label_7);

        higherAlarmLimit = new QDoubleSpinBox(groupBox);
        higherAlarmLimit->setObjectName(QStringLiteral("higherAlarmLimit"));
        higherAlarmLimit->setEnabled(false);

        hboxLayout6->addWidget(higherAlarmLimit);


        vboxLayout2->addLayout(hboxLayout6);


        vboxLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(QCAChannelConfDialogBase);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        vboxLayout3 = new QVBoxLayout(groupBox_2);
        vboxLayout3->setObjectName(QStringLiteral("vboxLayout3"));
        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setObjectName(QStringLiteral("hboxLayout7"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        hboxLayout7->addWidget(label_2);

        minimum = new QDoubleSpinBox(groupBox_2);
        minimum->setObjectName(QStringLiteral("minimum"));
        minimum->setEnabled(false);

        hboxLayout7->addWidget(minimum);


        vboxLayout3->addLayout(hboxLayout7);

        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setObjectName(QStringLiteral("hboxLayout8"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        hboxLayout8->addWidget(label_3);

        maximum = new QDoubleSpinBox(groupBox_2);
        maximum->setObjectName(QStringLiteral("maximum"));
        maximum->setEnabled(false);

        hboxLayout8->addWidget(maximum);


        vboxLayout3->addLayout(hboxLayout8);

        hboxLayout9 = new QHBoxLayout();
        hboxLayout9->setObjectName(QStringLiteral("hboxLayout9"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        hboxLayout9->addWidget(label_9);

        precision = new QSpinBox(groupBox_2);
        precision->setObjectName(QStringLiteral("precision"));

        hboxLayout9->addWidget(precision);


        vboxLayout3->addLayout(hboxLayout9);


        vboxLayout->addWidget(groupBox_2);

        spacerItem2 = new QSpacerItem(352, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem2);

        buttonBox = new QDialogButtonBox(QCAChannelConfDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(QCAChannelConfDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QCAChannelConfDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QCAChannelConfDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QCAChannelConfDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QCAChannelConfDialogBase)
    {
        QCAChannelConfDialogBase->setWindowTitle(QApplication::translate("QCAChannelConfDialogBase", "Channel configuration", 0));
        toolButton->setText(QApplication::translate("QCAChannelConfDialogBase", "...", 0));
        label->setText(QApplication::translate("QCAChannelConfDialogBase", "Channel name", 0));
        label_8->setText(QApplication::translate("QCAChannelConfDialogBase", "Engineering units", 0));
        groupBox->setTitle(QApplication::translate("QCAChannelConfDialogBase", "Alarms", 0));
        alarmSensitive->setText(QApplication::translate("QCAChannelConfDialogBase", "Channel is alarm sensitive", 0));
        blankOnInvalid->setText(QApplication::translate("QCAChannelConfDialogBase", "Blank display when channel is invalid", 0));
        label_4->setText(QApplication::translate("QCAChannelConfDialogBase", "Lower alarm limit", 0));
        label_5->setText(QApplication::translate("QCAChannelConfDialogBase", "Lower warning limit", 0));
        label_6->setText(QApplication::translate("QCAChannelConfDialogBase", "Higher warning limit", 0));
        label_7->setText(QApplication::translate("QCAChannelConfDialogBase", "Higher alarm limit", 0));
        groupBox_2->setTitle(QApplication::translate("QCAChannelConfDialogBase", "Display limits", 0));
        label_2->setText(QApplication::translate("QCAChannelConfDialogBase", "Minimum", 0));
        label_3->setText(QApplication::translate("QCAChannelConfDialogBase", "Maximum", 0));
        label_9->setText(QApplication::translate("QCAChannelConfDialogBase", "Precision", 0));
    } // retranslateUi

};

namespace Ui {
    class QCAChannelConfDialogBase: public Ui_QCAChannelConfDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QCACHANNELCONFDIALOGBASE_H
