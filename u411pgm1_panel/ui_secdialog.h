/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include "qcalabel.h"

QT_BEGIN_NAMESPACE

class Ui_secDialog
{
public:
    QCALabel *label_4;
    QCALabel *label;
    QLabel *label_3;
    QLabel *label_5;
    QCALabel *label_6;
    QLabel *label_2;

    void setupUi(QDialog *secDialog)
    {
        if (secDialog->objectName().isEmpty())
            secDialog->setObjectName(QStringLiteral("secDialog"));
        secDialog->resize(311, 124);
        label_4 = new QCALabel(secDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(78, 51, 81, 16));
        label = new QCALabel(secDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(179, 19, 111, 16));
        label_3 = new QLabel(secDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(21, 51, 51, 16));
        label_5 = new QLabel(secDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(21, 81, 66, 16));
        label_6 = new QCALabel(secDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(99, 79, 191, 16));
        label_2 = new QLabel(secDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 143, 16));

        retranslateUi(secDialog);

        QMetaObject::connectSlotsByName(secDialog);
    } // setupUi

    void retranslateUi(QDialog *secDialog)
    {
        secDialog->setWindowTitle(QApplication::translate("secDialog", "Dialog", 0));
        label_4->setText(QApplication::translate("secDialog", "TextLabel", 0));
        label_4->setProperty("pv", QVariant(QApplication::translate("secDialog", "u411pgm1:monoVersion", 0)));
        label->setText(QApplication::translate("secDialog", "TextLabel", 0));
        label->setProperty("pv", QVariant(QApplication::translate("secDialog", "u411pgm1:MonoName", 0)));
        label_3->setText(QApplication::translate("secDialog", "Version:", 0));
        label_5->setText(QApplication::translate("secDialog", "Boot Time:", 0));
        label_6->setText(QApplication::translate("secDialog", "TextLabel", 0));
        label_6->setProperty("pv", QVariant(QApplication::translate("secDialog", "u411pgm1:boottime", 0)));
        label_2->setText(QApplication::translate("secDialog", "Monochromator Name:", 0));
    } // retranslateUi

};

namespace Ui {
    class secDialog: public Ui_secDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
