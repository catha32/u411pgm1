/********************************************************************************
** Form generated from reading UI file 'qcacounterconfdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QCACOUNTERCONFDIALOGBASE_H
#define UI_QCACOUNTERCONFDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QCACounterConfDialogBase
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QRadioButton *takeFromChannel;
    QRadioButton *userDefined;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QDoubleSpinBox *minimum;
    QHBoxLayout *hboxLayout1;
    QLabel *label_2;
    QDoubleSpinBox *maximum;
    QHBoxLayout *hboxLayout2;
    QLabel *label_3;
    QDoubleSpinBox *basicStep;
    QHBoxLayout *hboxLayout3;
    QLabel *label_4;
    QSpinBox *numButtons;
    QHBoxLayout *hboxLayout4;
    QLabel *label_5;
    QSpinBox *button1Steps;
    QHBoxLayout *hboxLayout5;
    QLabel *label_6;
    QSpinBox *button2Steps;
    QHBoxLayout *hboxLayout6;
    QLabel *label_7;
    QSpinBox *button3Steps;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QCACounterConfDialogBase)
    {
        if (QCACounterConfDialogBase->objectName().isEmpty())
            QCACounterConfDialogBase->setObjectName(QStringLiteral("QCACounterConfDialogBase"));
        QCACounterConfDialogBase->setWindowModality(Qt::NonModal);
        QCACounterConfDialogBase->resize(300, 350);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QCACounterConfDialogBase->sizePolicy().hasHeightForWidth());
        QCACounterConfDialogBase->setSizePolicy(sizePolicy);
        QCACounterConfDialogBase->setMinimumSize(QSize(297, 350));
        QCACounterConfDialogBase->setMaximumSize(QSize(300, 360));
        QCACounterConfDialogBase->setAutoFillBackground(false);
        QCACounterConfDialogBase->setSizeGripEnabled(false);
        vboxLayout = new QVBoxLayout(QCACounterConfDialogBase);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        groupBox = new QGroupBox(QCACounterConfDialogBase);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        takeFromChannel = new QRadioButton(groupBox);
        takeFromChannel->setObjectName(QStringLiteral("takeFromChannel"));
        takeFromChannel->setChecked(true);

        vboxLayout1->addWidget(takeFromChannel);

        userDefined = new QRadioButton(groupBox);
        userDefined->setObjectName(QStringLiteral("userDefined"));

        vboxLayout1->addWidget(userDefined);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        hboxLayout->addWidget(label);

        minimum = new QDoubleSpinBox(groupBox);
        minimum->setObjectName(QStringLiteral("minimum"));
        minimum->setEnabled(false);
        minimum->setDecimals(4);
        minimum->setMinimum(-100000);
        minimum->setMaximum(100000);
        minimum->setValue(-1000);

        hboxLayout->addWidget(minimum);


        vboxLayout1->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        hboxLayout1->addWidget(label_2);

        maximum = new QDoubleSpinBox(groupBox);
        maximum->setObjectName(QStringLiteral("maximum"));
        maximum->setEnabled(false);
        maximum->setDecimals(4);
        maximum->setMinimum(-100000);
        maximum->setMaximum(100000);
        maximum->setValue(1000);

        hboxLayout1->addWidget(maximum);


        vboxLayout1->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        hboxLayout2->addWidget(label_3);

        basicStep = new QDoubleSpinBox(groupBox);
        basicStep->setObjectName(QStringLiteral("basicStep"));
        basicStep->setEnabled(false);
        basicStep->setDecimals(4);
        basicStep->setMaximum(1000);
        basicStep->setSingleStep(0.1);
        basicStep->setValue(0.01);

        hboxLayout2->addWidget(basicStep);


        vboxLayout1->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        hboxLayout3->addWidget(label_4);

        numButtons = new QSpinBox(groupBox);
        numButtons->setObjectName(QStringLiteral("numButtons"));
        numButtons->setEnabled(false);
        numButtons->setMinimum(1);
        numButtons->setMaximum(3);

        hboxLayout3->addWidget(numButtons);


        vboxLayout1->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QStringLiteral("hboxLayout4"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        hboxLayout4->addWidget(label_5);

        button1Steps = new QSpinBox(groupBox);
        button1Steps->setObjectName(QStringLiteral("button1Steps"));
        button1Steps->setEnabled(false);
        button1Steps->setMinimum(1);
        button1Steps->setMaximum(100000);

        hboxLayout4->addWidget(button1Steps);


        vboxLayout1->addLayout(hboxLayout4);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QStringLiteral("hboxLayout5"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        hboxLayout5->addWidget(label_6);

        button2Steps = new QSpinBox(groupBox);
        button2Steps->setObjectName(QStringLiteral("button2Steps"));
        button2Steps->setEnabled(false);
        button2Steps->setMinimum(1);
        button2Steps->setMaximum(100000);
        button2Steps->setValue(10);

        hboxLayout5->addWidget(button2Steps);


        vboxLayout1->addLayout(hboxLayout5);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QStringLiteral("hboxLayout6"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        hboxLayout6->addWidget(label_7);

        button3Steps = new QSpinBox(groupBox);
        button3Steps->setObjectName(QStringLiteral("button3Steps"));
        button3Steps->setEnabled(false);
        button3Steps->setMinimum(1);
        button3Steps->setMaximum(100000);
        button3Steps->setValue(100);

        hboxLayout6->addWidget(button3Steps);


        vboxLayout1->addLayout(hboxLayout6);


        vboxLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(QCACounterConfDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy2);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(QCACounterConfDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QCACounterConfDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QCACounterConfDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QCACounterConfDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QCACounterConfDialogBase)
    {
        QCACounterConfDialogBase->setWindowTitle(QApplication::translate("QCACounterConfDialogBase", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("QCACounterConfDialogBase", "Control limits", 0));
        takeFromChannel->setText(QApplication::translate("QCACounterConfDialogBase", "Take from channel", 0));
        userDefined->setText(QApplication::translate("QCACounterConfDialogBase", "User defined", 0));
        label->setText(QApplication::translate("QCACounterConfDialogBase", "Minimum", 0));
        label_2->setText(QApplication::translate("QCACounterConfDialogBase", "Maximum", 0));
        label_3->setText(QApplication::translate("QCACounterConfDialogBase", "Basic step", 0));
        label_4->setText(QApplication::translate("QCACounterConfDialogBase", "Number of buttons", 0));
        label_5->setText(QApplication::translate("QCACounterConfDialogBase", "Button 1 steps", 0));
        label_6->setText(QApplication::translate("QCACounterConfDialogBase", "Button 2 steps", 0));
        label_7->setText(QApplication::translate("QCACounterConfDialogBase", "Button 3 steps", 0));
    } // retranslateUi

};

namespace Ui {
    class QCACounterConfDialogBase: public Ui_QCACounterConfDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QCACOUNTERCONFDIALOGBASE_H
