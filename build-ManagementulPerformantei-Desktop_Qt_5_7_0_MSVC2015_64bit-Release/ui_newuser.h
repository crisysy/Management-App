/********************************************************************************
** Form generated from reading UI file 'newuser.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWUSER_H
#define UI_NEWUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NewUser
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *compEdit;
    QLineEdit *numeEdit;
    QLineEdit *prenEdit;
    QLabel *label_5;
    QLabel *istoricPrint;
    QLabel *fiscalPrint;
    QPushButton *adIstoric;
    QPushButton *adFiscal;
    QPushButton *saveButton;
    QPushButton *cancelButton;
    QLabel *label_6;
    QLineEdit *passEdit;
    QLabel *er4;
    QLabel *er3;
    QLabel *er2;
    QLabel *er1;
    QCheckBox *checkBox;

    void setupUi(QDialog *NewUser)
    {
        if (NewUser->objectName().isEmpty())
            NewUser->setObjectName(QStringLiteral("NewUser"));
        NewUser->resize(800, 600);
        QFont font;
        font.setPointSize(10);
        NewUser->setFont(font);
        label = new QLabel(NewUser);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 10, 711, 41));
        QFont font1;
        font1.setPointSize(9);
        label->setFont(font1);
        label_2 = new QLabel(NewUser);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 231, 21));
        label_3 = new QLabel(NewUser);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 231, 21));
        label_4 = new QLabel(NewUser);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 130, 231, 21));
        compEdit = new QLineEdit(NewUser);
        compEdit->setObjectName(QStringLiteral("compEdit"));
        compEdit->setGeometry(QRect(270, 70, 321, 25));
        numeEdit = new QLineEdit(NewUser);
        numeEdit->setObjectName(QStringLiteral("numeEdit"));
        numeEdit->setGeometry(QRect(270, 100, 321, 25));
        prenEdit = new QLineEdit(NewUser);
        prenEdit->setObjectName(QStringLiteral("prenEdit"));
        prenEdit->setGeometry(QRect(270, 130, 321, 25));
        label_5 = new QLabel(NewUser);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 200, 711, 41));
        label_5->setFont(font1);
        istoricPrint = new QLabel(NewUser);
        istoricPrint->setObjectName(QStringLiteral("istoricPrint"));
        istoricPrint->setGeometry(QRect(30, 260, 411, 21));
        fiscalPrint = new QLabel(NewUser);
        fiscalPrint->setObjectName(QStringLiteral("fiscalPrint"));
        fiscalPrint->setGeometry(QRect(30, 310, 421, 21));
        adIstoric = new QPushButton(NewUser);
        adIstoric->setObjectName(QStringLiteral("adIstoric"));
        adIstoric->setGeometry(QRect(510, 250, 250, 30));
        QFont font2;
        font2.setPointSize(8);
        adIstoric->setFont(font2);
        adFiscal = new QPushButton(NewUser);
        adFiscal->setObjectName(QStringLiteral("adFiscal"));
        adFiscal->setGeometry(QRect(510, 300, 250, 30));
        adFiscal->setFont(font2);
        saveButton = new QPushButton(NewUser);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setGeometry(QRect(460, 450, 300, 40));
        cancelButton = new QPushButton(NewUser);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(460, 500, 300, 40));
        label_6 = new QLabel(NewUser);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 160, 231, 21));
        passEdit = new QLineEdit(NewUser);
        passEdit->setObjectName(QStringLiteral("passEdit"));
        passEdit->setGeometry(QRect(270, 160, 321, 25));
        passEdit->setEchoMode(QLineEdit::Password);
        er4 = new QLabel(NewUser);
        er4->setObjectName(QStringLiteral("er4"));
        er4->setGeometry(QRect(610, 160, 171, 21));
        er4->setFont(font2);
        er3 = new QLabel(NewUser);
        er3->setObjectName(QStringLiteral("er3"));
        er3->setGeometry(QRect(610, 130, 171, 21));
        er3->setFont(font2);
        er2 = new QLabel(NewUser);
        er2->setObjectName(QStringLiteral("er2"));
        er2->setGeometry(QRect(610, 100, 171, 21));
        er2->setFont(font2);
        er1 = new QLabel(NewUser);
        er1->setObjectName(QStringLiteral("er1"));
        er1->setGeometry(QRect(610, 70, 171, 21));
        er1->setFont(font2);
        checkBox = new QCheckBox(NewUser);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(30, 350, 421, 20));

        retranslateUi(NewUser);

        QMetaObject::connectSlotsByName(NewUser);
    } // setupUi

    void retranslateUi(QDialog *NewUser)
    {
        NewUser->setWindowTitle(QApplication::translate("NewUser", "Dialog", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("NewUser", "Numele companiei:", 0));
        label_3->setText(QApplication::translate("NewUser", "Nume persoana de contact:", 0));
        label_4->setText(QApplication::translate("NewUser", "Prenume persoana de contact:", 0));
        label_5->setText(QApplication::translate("NewUser", "Selectati fisierele PDF legate de istoricul companiei si de elementele fiscale ale acesteia:", 0));
        istoricPrint->setText(QApplication::translate("NewUser", "Niciun fisier legat de istoric nu a fost adaugat", 0));
        fiscalPrint->setText(QApplication::translate("NewUser", "Niciun fisier legat de elemente fiscale nu a fost adaugat", 0));
        adIstoric->setText(QApplication::translate("NewUser", "Selecteaza istoric companie", 0));
        adFiscal->setText(QApplication::translate("NewUser", "Selecteaza elemente fiscale", 0));
        saveButton->setText(QApplication::translate("NewUser", "Salveaza", 0));
        cancelButton->setText(QApplication::translate("NewUser", "Anuleaza", 0));
        label_6->setText(QApplication::translate("NewUser", "Parola de acces:", 0));
        er4->setText(QApplication::translate("NewUser", ".", 0));
        er3->setText(QApplication::translate("NewUser", ".", 0));
        er2->setText(QApplication::translate("NewUser", ".", 0));
        er1->setText(QApplication::translate("NewUser", ".", 0));
        checkBox->setText(QApplication::translate("NewUser", "Doresc sa adaug aceste fisiere ulterior", 0));
    } // retranslateUi

};

namespace Ui {
    class NewUser: public Ui_NewUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWUSER_H
