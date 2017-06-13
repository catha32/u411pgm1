/********************************************************************************
** Form generated from reading UI file 'iddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDDIALOG_H
#define UI_IDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include "qcalabel.h"

QT_BEGIN_NAMESPACE

class Ui_idDialog
{
public:
    QLabel *label;
    QCALabel *label_2;
    QLabel *label_3;
    QCALabel *label_4;

    void setupUi(QDialog *idDialog)
    {
        if (idDialog->objectName().isEmpty())
            idDialog->setObjectName(QStringLiteral("idDialog"));
        idDialog->resize(317, 96);
        label = new QLabel(idDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 151, 16));
        label_2 = new QCALabel(idDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 20, 121, 16));
        label_3 = new QLabel(idDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 50, 111, 16));
        label_4 = new QCALabel(idDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(180, 50, 121, 16));

        retranslateUi(idDialog);

        QMetaObject::connectSlotsByName(idDialog);
    } // setupUi

    void retranslateUi(QDialog *idDialog)
    {
        idDialog->setWindowTitle(QApplication::translate("idDialog", "Dialog", 0));
        label->setText(QApplication::translate("idDialog", "Monochromator Name:", 0));
        label_2->setText(QApplication::translate("idDialog", "TextLabel", 0));
        label_2->setProperty("pv", QVariant(QApplication::translate("idDialog", "u411pgm1:MonoName", 0)));
        label_3->setText(QApplication::translate("idDialog", "ID-Modul Version:", 0));
        label_4->setText(QApplication::translate("idDialog", "TextLabel", 0));
        label_4->setProperty("pv", QVariant(QApplication::translate("idDialog", "u411pgm1:idVersion", 0)));
    } // retranslateUi

};

namespace Ui {
    class idDialog: public Ui_idDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDDIALOG_H
