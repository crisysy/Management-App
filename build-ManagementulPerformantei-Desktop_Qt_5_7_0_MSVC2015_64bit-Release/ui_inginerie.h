/********************************************************************************
** Form generated from reading UI file 'inginerie.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INGINERIE_H
#define UI_INGINERIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Inginerie
{
public:

    void setupUi(QDialog *Inginerie)
    {
        if (Inginerie->objectName().isEmpty())
            Inginerie->setObjectName(QStringLiteral("Inginerie"));
        Inginerie->resize(800, 600);

        retranslateUi(Inginerie);

        QMetaObject::connectSlotsByName(Inginerie);
    } // setupUi

    void retranslateUi(QDialog *Inginerie)
    {
        Inginerie->setWindowTitle(QApplication::translate("Inginerie", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Inginerie: public Ui_Inginerie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGINERIE_H
