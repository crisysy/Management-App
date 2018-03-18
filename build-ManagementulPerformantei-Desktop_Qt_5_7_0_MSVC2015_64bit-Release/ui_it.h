/********************************************************************************
** Form generated from reading UI file 'it.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IT_H
#define UI_IT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_It
{
public:

    void setupUi(QDialog *It)
    {
        if (It->objectName().isEmpty())
            It->setObjectName(QStringLiteral("It"));
        It->resize(800, 600);

        retranslateUi(It);

        QMetaObject::connectSlotsByName(It);
    } // setupUi

    void retranslateUi(QDialog *It)
    {
        It->setWindowTitle(QApplication::translate("It", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class It: public Ui_It {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IT_H
