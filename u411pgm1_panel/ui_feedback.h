/********************************************************************************
** Form generated from reading UI file 'feedback.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEEDBACK_H
#define UI_FEEDBACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qcacombobox.h"
#include "qcalabel.h"

QT_BEGIN_NAMESPACE

class Ui_feedback
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_8;
    QProgressBar *progressBar;
    QLabel *label_10;
    QCALabel *label_11;
    QLabel *label_12;
    QCALabel *label_13;
    QLabel *label_14;
    QCALabel *label_15;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QCAComboBox *comboBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QCALabel *label_4;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QCALabel *label_6;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *feedback)
    {
        if (feedback->objectName().isEmpty())
            feedback->setObjectName(QStringLiteral("feedback"));
        feedback->resize(646, 304);
        label = new QLabel(feedback);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 20, 111, 16));
        label_2 = new QLabel(feedback);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 50, 59, 14));
        lineEdit = new QLineEdit(feedback);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 71, 108, 22));
        label_8 = new QLabel(feedback);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(350, 50, 59, 14));
        progressBar = new QProgressBar(feedback);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(500, 50, 118, 23));
        progressBar->setValue(24);
        label_10 = new QLabel(feedback);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(530, 90, 59, 14));
        label_11 = new QCALabel(feedback);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(530, 120, 59, 14));
        label_11->setStyleSheet(QStringLiteral("color: rgb(0, 170, 127);"));
        label_12 = new QLabel(feedback);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(530, 150, 59, 14));
        label_13 = new QCALabel(feedback);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(530, 180, 59, 14));
        label_14 = new QLabel(feedback);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(530, 210, 59, 14));
        label_15 = new QCALabel(feedback);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(530, 240, 59, 14));
        label_15->setStyleSheet(QStringLiteral("color: rgb(0, 170, 127);"));
        pushButton = new QPushButton(feedback);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(520, 270, 81, 22));
        pushButton_2 = new QPushButton(feedback);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 170, 81, 22));
        pushButton_3 = new QPushButton(feedback);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 170, 81, 22));
        pushButton_4 = new QPushButton(feedback);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(240, 170, 81, 22));
        pushButton_5 = new QPushButton(feedback);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 220, 91, 22));
        comboBox = new QCAComboBox(feedback);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(240, 220, 81, 22));
        layoutWidget = new QWidget(feedback);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(21, 101, 175, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QCALabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("color: rgb(0, 170, 127);"));

        horizontalLayout->addWidget(label_4);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        lineEdit_4 = new QLineEdit(feedback);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(320, 71, 108, 22));
        layoutWidget1 = new QWidget(feedback);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(281, 101, 175, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QCALabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("color: rgb(0, 170, 127);"));

        horizontalLayout_2->addWidget(label_6);

        lineEdit_3 = new QLineEdit(layoutWidget1);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_2->addWidget(lineEdit_3);


        retranslateUi(feedback);

        QMetaObject::connectSlotsByName(feedback);
    } // setupUi

    void retranslateUi(QDialog *feedback)
    {
        feedback->setWindowTitle(QApplication::translate("feedback", "Dialog", 0));
        label->setText(QApplication::translate("feedback", "Feedback-Details", 0));
        label_2->setText(QApplication::translate("feedback", "Input", 0));
        label_8->setText(QApplication::translate("feedback", "Output", 0));
        label_10->setText(QApplication::translate("feedback", "Counter", 0));
        label_11->setText(QApplication::translate("feedback", "TextLabel", 0));
        label_11->setProperty("pv", QVariant(QApplication::translate("feedback", "u411pgm1:liVAL", 0)));
        label_12->setText(QApplication::translate("feedback", "Status", 0));
        label_13->setText(QApplication::translate("feedback", "TextLabel", 0));
        label_13->setProperty("pv", QVariant(QApplication::translate("feedback", "u411pgm1:liSTATUS", 0)));
        label_14->setText(QApplication::translate("feedback", "Flags", 0));
        label_15->setText(QApplication::translate("feedback", "TextLabel", 0));
        label_15->setProperty("pv", QVariant(QApplication::translate("feedback", "u411pgm1:liFLAGS", 0)));
        pushButton->setText(QApplication::translate("feedback", "close", 0));
        pushButton_2->setText(QApplication::translate("feedback", "Start", 0));
        pushButton_3->setText(QApplication::translate("feedback", "Stop", 0));
        pushButton_4->setText(QApplication::translate("feedback", "View Data", 0));
        pushButton_5->setText(QApplication::translate("feedback", "Trigger once", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("feedback", "Passive", 0)
         << QApplication::translate("feedback", "Event", 0)
        );
        comboBox->setProperty("pv", QVariant(QApplication::translate("feedback", "u411pgm1:fbpostmode", 0)));
        label_4->setText(QApplication::translate("feedback", "TextLabel", 0));
        label_4->setProperty("pv", QVariant(QApplication::translate("feedback", "u411pgm1:liINODE", 0)));
        label_6->setText(QApplication::translate("feedback", "TextLabel", 0));
        label_6->setProperty("pv", QVariant(QApplication::translate("feedback", "u411pgm1:liONODE", 0)));
    } // retranslateUi

};

namespace Ui {
    class feedback: public Ui_feedback {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEEDBACK_H
