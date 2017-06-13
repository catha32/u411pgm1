/********************************************************************************
** Form generated from reading UI file 'smu.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMU_H
#define UI_SMU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_smu
{
public:

    void setupUi(QDialog *smu)
    {
        if (smu->objectName().isEmpty())
            smu->setObjectName(QStringLiteral("smu"));
        smu->resize(400, 300);

        retranslateUi(smu);

        QMetaObject::connectSlotsByName(smu);
    } // setupUi

    void retranslateUi(QDialog *smu)
    {
        smu->setWindowTitle(QApplication::translate("smu", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class smu: public Ui_smu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMU_H
