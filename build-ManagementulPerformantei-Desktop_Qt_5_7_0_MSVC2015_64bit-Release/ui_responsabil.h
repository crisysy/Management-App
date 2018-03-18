/********************************************************************************
** Form generated from reading UI file 'responsabil.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESPONSABIL_H
#define UI_RESPONSABIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Responsabil
{
public:
    QLabel *decizie2;
    QLabel *decizie2_2;
    QLabel *decizie2_3;
    QComboBox *comboBox;
    QLabel *decizie2_4;
    QLabel *decizie2_5;
    QLabel *decizie2_6;
    QLabel *decizie2_7;
    QLabel *decizie2_8;
    QPushButton *salveaza2;
    QPushButton *salveaza2_2;
    QLabel *decizie2_9;
    QLabel *decizie2_10;
    QComboBox *comboBox_2;
    QLabel *decizie2_11;
    QComboBox *comboBox_3;

    void setupUi(QDialog *Responsabil)
    {
        if (Responsabil->objectName().isEmpty())
            Responsabil->setObjectName(QStringLiteral("Responsabil"));
        Responsabil->resize(800, 600);
        decizie2 = new QLabel(Responsabil);
        decizie2->setObjectName(QStringLiteral("decizie2"));
        decizie2->setGeometry(QRect(20, 20, 641, 31));
        QFont font;
        font.setPointSize(10);
        decizie2->setFont(font);
        decizie2_2 = new QLabel(Responsabil);
        decizie2_2->setObjectName(QStringLiteral("decizie2_2"));
        decizie2_2->setGeometry(QRect(20, 50, 211, 31));
        decizie2_2->setFont(font);
        decizie2_3 = new QLabel(Responsabil);
        decizie2_3->setObjectName(QStringLiteral("decizie2_3"));
        decizie2_3->setGeometry(QRect(250, 50, 411, 31));
        decizie2_3->setFont(font);
        comboBox = new QComboBox(Responsabil);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(20, 90, 221, 31));
        comboBox->setFont(font);
        decizie2_4 = new QLabel(Responsabil);
        decizie2_4->setObjectName(QStringLiteral("decizie2_4"));
        decizie2_4->setGeometry(QRect(280, 90, 391, 31));
        decizie2_4->setFont(font);
        decizie2_5 = new QLabel(Responsabil);
        decizie2_5->setObjectName(QStringLiteral("decizie2_5"));
        decizie2_5->setGeometry(QRect(280, 120, 391, 31));
        decizie2_5->setFont(font);
        decizie2_6 = new QLabel(Responsabil);
        decizie2_6->setObjectName(QStringLiteral("decizie2_6"));
        decizie2_6->setGeometry(QRect(280, 150, 391, 31));
        decizie2_6->setFont(font);
        decizie2_7 = new QLabel(Responsabil);
        decizie2_7->setObjectName(QStringLiteral("decizie2_7"));
        decizie2_7->setGeometry(QRect(280, 180, 391, 31));
        decizie2_7->setFont(font);
        decizie2_8 = new QLabel(Responsabil);
        decizie2_8->setObjectName(QStringLiteral("decizie2_8"));
        decizie2_8->setGeometry(QRect(280, 210, 391, 31));
        decizie2_8->setFont(font);
        salveaza2 = new QPushButton(Responsabil);
        salveaza2->setObjectName(QStringLiteral("salveaza2"));
        salveaza2->setGeometry(QRect(540, 500, 241, 40));
        salveaza2->setFont(font);
        salveaza2_2 = new QPushButton(Responsabil);
        salveaza2_2->setObjectName(QStringLiteral("salveaza2_2"));
        salveaza2_2->setGeometry(QRect(540, 540, 241, 40));
        salveaza2_2->setFont(font);
        decizie2_9 = new QLabel(Responsabil);
        decizie2_9->setObjectName(QStringLiteral("decizie2_9"));
        decizie2_9->setGeometry(QRect(20, 260, 641, 31));
        decizie2_9->setFont(font);
        decizie2_10 = new QLabel(Responsabil);
        decizie2_10->setObjectName(QStringLiteral("decizie2_10"));
        decizie2_10->setGeometry(QRect(20, 290, 641, 31));
        decizie2_10->setFont(font);
        comboBox_2 = new QComboBox(Responsabil);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(20, 320, 221, 31));
        comboBox_2->setFont(font);
        decizie2_11 = new QLabel(Responsabil);
        decizie2_11->setObjectName(QStringLiteral("decizie2_11"));
        decizie2_11->setGeometry(QRect(20, 370, 641, 31));
        decizie2_11->setFont(font);
        comboBox_3 = new QComboBox(Responsabil);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(20, 400, 221, 31));
        comboBox_3->setFont(font);

        retranslateUi(Responsabil);

        QMetaObject::connectSlotsByName(Responsabil);
    } // setupUi

    void retranslateUi(QDialog *Responsabil)
    {
        Responsabil->setWindowTitle(QApplication::translate("Responsabil", "Dialog", 0));
        decizie2->setText(QApplication::translate("Responsabil", "Selectati din urmatoare lista persoana responsabila cu managamentul performantei:", 0));
        decizie2_2->setText(QApplication::translate("Responsabil", "Responsabilul curent este:", 0));
        decizie2_3->setText(QApplication::translate("Responsabil", "-- niciun responsabil curent, va rugam selectati unul --", 0));
        decizie2_4->setText(QApplication::translate("Responsabil", "-- informatii legate de studiile persoanei alese --", 0));
        decizie2_5->setText(QApplication::translate("Responsabil", "Competente detiune:", 0));
        decizie2_6->setText(QApplication::translate("Responsabil", "-- managementul proiectelor --", 0));
        decizie2_7->setText(QApplication::translate("Responsabil", "-- Lean SIX SIGMA --", 0));
        decizie2_8->setText(QApplication::translate("Responsabil", "-- managementul calitatii --", 0));
        salveaza2->setText(QApplication::translate("Responsabil", "Salveaza responsabilul curent", 0));
        salveaza2_2->setText(QApplication::translate("Responsabil", "Inchide", 0));
        decizie2_9->setText(QApplication::translate("Responsabil", "Desemnare coordonatori locali pentru fiecare agentie:", 0));
        decizie2_10->setText(QApplication::translate("Responsabil", "Selectati din urmatoare lista agentia dorita.", 0));
        decizie2_11->setText(QApplication::translate("Responsabil", "Dupa ce o agentie a fost selectata, alegeti angajatul ce urmeaza sa fie desemnat.", 0));
    } // retranslateUi

};

namespace Ui {
    class Responsabil: public Ui_Responsabil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESPONSABIL_H
