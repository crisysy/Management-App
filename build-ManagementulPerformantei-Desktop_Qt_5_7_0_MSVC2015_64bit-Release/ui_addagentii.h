/********************************************************************************
** Form generated from reading UI file 'addagentii.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDAGENTII_H
#define UI_ADDAGENTII_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddAgentii
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *salveaza;
    QPushButton *anuleaza;

    void setupUi(QDialog *AddAgentii)
    {
        if (AddAgentii->objectName().isEmpty())
            AddAgentii->setObjectName(QStringLiteral("AddAgentii"));
        AddAgentii->resize(800, 600);
        label = new QLabel(AddAgentii);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 331, 41));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label_2 = new QLabel(AddAgentii);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 0, 591, 41));
        label_2->setFont(font);
        lineEdit = new QLineEdit(AddAgentii);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 80, 411, 31));
        salveaza = new QPushButton(AddAgentii);
        salveaza->setObjectName(QStringLiteral("salveaza"));
        salveaza->setGeometry(QRect(600, 400, 190, 40));
        anuleaza = new QPushButton(AddAgentii);
        anuleaza->setObjectName(QStringLiteral("anuleaza"));
        anuleaza->setGeometry(QRect(600, 440, 190, 40));

        retranslateUi(AddAgentii);

        QMetaObject::connectSlotsByName(AddAgentii);
    } // setupUi

    void retranslateUi(QDialog *AddAgentii)
    {
        AddAgentii->setWindowTitle(QApplication::translate("AddAgentii", "Dialog", 0));
        label->setText(QApplication::translate("AddAgentii", "Denumirea agentiei:", 0));
        label_2->setText(QApplication::translate("AddAgentii", "Completati urmatoarele campuri pentru a adauga o noua agentie in sistem:", 0));
        salveaza->setText(QApplication::translate("AddAgentii", "Salveaza", 0));
        anuleaza->setText(QApplication::translate("AddAgentii", "Anuleaza", 0));
    } // retranslateUi

};

namespace Ui {
    class AddAgentii: public Ui_AddAgentii {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDAGENTII_H
