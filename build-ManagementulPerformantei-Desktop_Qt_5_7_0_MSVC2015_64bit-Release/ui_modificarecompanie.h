/********************************************************************************
** Form generated from reading UI file 'modificarecompanie.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICARECOMPANIE_H
#define UI_MODIFICARECOMPANIE_H

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

class Ui_ModificareCompanie
{
public:
    QLabel *label_2;
    QLineEdit *compEdit;
    QLineEdit *prenEdit;
    QPushButton *saveButton;
    QPushButton *cancelButton;
    QLabel *fiscalPrint;
    QPushButton *adIstoric;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *numeEdit;
    QPushButton *adFiscal;
    QLabel *istoricPrint;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *passEdit;

    void setupUi(QDialog *ModificareCompanie)
    {
        if (ModificareCompanie->objectName().isEmpty())
            ModificareCompanie->setObjectName(QStringLiteral("ModificareCompanie"));
        ModificareCompanie->resize(800, 600);
        label_2 = new QLabel(ModificareCompanie);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 231, 21));
        compEdit = new QLineEdit(ModificareCompanie);
        compEdit->setObjectName(QStringLiteral("compEdit"));
        compEdit->setGeometry(QRect(270, 70, 321, 25));
        prenEdit = new QLineEdit(ModificareCompanie);
        prenEdit->setObjectName(QStringLiteral("prenEdit"));
        prenEdit->setGeometry(QRect(270, 130, 321, 25));
        saveButton = new QPushButton(ModificareCompanie);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setGeometry(QRect(460, 450, 300, 40));
        cancelButton = new QPushButton(ModificareCompanie);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(460, 500, 300, 40));
        fiscalPrint = new QLabel(ModificareCompanie);
        fiscalPrint->setObjectName(QStringLiteral("fiscalPrint"));
        fiscalPrint->setGeometry(QRect(30, 310, 421, 21));
        adIstoric = new QPushButton(ModificareCompanie);
        adIstoric->setObjectName(QStringLiteral("adIstoric"));
        adIstoric->setGeometry(QRect(510, 250, 250, 30));
        QFont font;
        font.setPointSize(8);
        adIstoric->setFont(font);
        label_3 = new QLabel(ModificareCompanie);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 231, 21));
        label_6 = new QLabel(ModificareCompanie);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 160, 231, 21));
        numeEdit = new QLineEdit(ModificareCompanie);
        numeEdit->setObjectName(QStringLiteral("numeEdit"));
        numeEdit->setGeometry(QRect(270, 100, 321, 25));
        adFiscal = new QPushButton(ModificareCompanie);
        adFiscal->setObjectName(QStringLiteral("adFiscal"));
        adFiscal->setGeometry(QRect(510, 300, 250, 30));
        adFiscal->setFont(font);
        istoricPrint = new QLabel(ModificareCompanie);
        istoricPrint->setObjectName(QStringLiteral("istoricPrint"));
        istoricPrint->setGeometry(QRect(30, 260, 411, 21));
        label_5 = new QLabel(ModificareCompanie);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 200, 711, 41));
        QFont font1;
        font1.setPointSize(9);
        label_5->setFont(font1);
        label_4 = new QLabel(ModificareCompanie);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 130, 231, 21));
        passEdit = new QLineEdit(ModificareCompanie);
        passEdit->setObjectName(QStringLiteral("passEdit"));
        passEdit->setGeometry(QRect(270, 160, 321, 25));
        passEdit->setEchoMode(QLineEdit::Password);

        retranslateUi(ModificareCompanie);

        QMetaObject::connectSlotsByName(ModificareCompanie);
    } // setupUi

    void retranslateUi(QDialog *ModificareCompanie)
    {
        ModificareCompanie->setWindowTitle(QApplication::translate("ModificareCompanie", "Dialog", 0));
        label_2->setText(QApplication::translate("ModificareCompanie", "Numele companiei:", 0));
        saveButton->setText(QApplication::translate("ModificareCompanie", "Salveaza", 0));
        cancelButton->setText(QApplication::translate("ModificareCompanie", "Anuleaza", 0));
        fiscalPrint->setText(QApplication::translate("ModificareCompanie", "Niciun fisier legat de elemente fiscale nu a fost adaugat", 0));
        adIstoric->setText(QApplication::translate("ModificareCompanie", "Selecteaza istoric companie", 0));
        label_3->setText(QApplication::translate("ModificareCompanie", "Nume persoana de contact:", 0));
        label_6->setText(QApplication::translate("ModificareCompanie", "Parola de acces:", 0));
        adFiscal->setText(QApplication::translate("ModificareCompanie", "Selecteaza elemente fiscale", 0));
        istoricPrint->setText(QApplication::translate("ModificareCompanie", "Niciun fisier legat de istoric nu a fost adaugat", 0));
        label_5->setText(QApplication::translate("ModificareCompanie", "Selectati fisierele PDF legate de istoricul companiei si de elementele fiscale ale acesteia:", 0));
        label_4->setText(QApplication::translate("ModificareCompanie", "Prenume persoana de contact:", 0));
    } // retranslateUi

};

namespace Ui {
    class ModificareCompanie: public Ui_ModificareCompanie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICARECOMPANIE_H
