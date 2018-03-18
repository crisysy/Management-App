/********************************************************************************
** Form generated from reading UI file 'co2.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CO2_H
#define UI_CO2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Co2
{
public:

    void setupUi(QDialog *Co2)
    {
        if (Co2->objectName().isEmpty())
            Co2->setObjectName(QStringLiteral("Co2"));
        Co2->resize(800, 600);

        retranslateUi(Co2);

        QMetaObject::connectSlotsByName(Co2);
    } // setupUi

    void retranslateUi(QDialog *Co2)
    {
        Co2->setWindowTitle(QApplication::translate("Co2", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Co2: public Ui_Co2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CO2_H
