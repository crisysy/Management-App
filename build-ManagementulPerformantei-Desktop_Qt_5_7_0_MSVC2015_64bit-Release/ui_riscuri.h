/********************************************************************************
** Form generated from reading UI file 'riscuri.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RISCURI_H
#define UI_RISCURI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Riscuri
{
public:
    QTableView *tableView;
    QPushButton *addrisc;
    QPushButton *aclient;
    QPushButton *iesire;
    QPushButton *rfin;
    QLabel *label;
    QLabel *descriere;
    QLineEdit *descriereEdit;
    QLabel *gravitate;
    QComboBox *gravitateBox;
    QLabel *prob;
    QComboBox *probBox;
    QComboBox *gradBox;
    QLabel *grad;
    QLabel *label2;
    QComboBox *evaluareBox_5;
    QLabel *evaluare;
    QLabel *client;
    QComboBox *clientBox;
    QLabel *risc;
    QComboBox *riscBox;
    QPushButton *salveaza2;
    QPushButton *anuleaza2;
    QPushButton *anuleaza1;
    QPushButton *salveaza1;
    QLabel *actiune;
    QLineEdit *actiuneEdit;

    void setupUi(QDialog *Riscuri)
    {
        if (Riscuri->objectName().isEmpty())
            Riscuri->setObjectName(QStringLiteral("Riscuri"));
        Riscuri->resize(800, 600);
        tableView = new QTableView(Riscuri);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 781, 331));
        addrisc = new QPushButton(Riscuri);
        addrisc->setObjectName(QStringLiteral("addrisc"));
        addrisc->setGeometry(QRect(600, 430, 190, 40));
        aclient = new QPushButton(Riscuri);
        aclient->setObjectName(QStringLiteral("aclient"));
        aclient->setGeometry(QRect(600, 470, 190, 40));
        iesire = new QPushButton(Riscuri);
        iesire->setObjectName(QStringLiteral("iesire"));
        iesire->setGeometry(QRect(600, 550, 190, 40));
        rfin = new QPushButton(Riscuri);
        rfin->setObjectName(QStringLiteral("rfin"));
        rfin->setGeometry(QRect(600, 510, 190, 40));
        label = new QLabel(Riscuri);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 781, 31));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        descriere = new QLabel(Riscuri);
        descriere->setObjectName(QStringLiteral("descriere"));
        descriere->setGeometry(QRect(10, 40, 781, 31));
        descriere->setFont(font);
        descriereEdit = new QLineEdit(Riscuri);
        descriereEdit->setObjectName(QStringLiteral("descriereEdit"));
        descriereEdit->setGeometry(QRect(10, 70, 781, 31));
        QFont font1;
        font1.setPointSize(9);
        descriereEdit->setFont(font1);
        gravitate = new QLabel(Riscuri);
        gravitate->setObjectName(QStringLiteral("gravitate"));
        gravitate->setGeometry(QRect(10, 100, 111, 31));
        gravitate->setFont(font);
        gravitateBox = new QComboBox(Riscuri);
        gravitateBox->setObjectName(QStringLiteral("gravitateBox"));
        gravitateBox->setGeometry(QRect(10, 130, 111, 31));
        gravitateBox->setFont(font);
        prob = new QLabel(Riscuri);
        prob->setObjectName(QStringLiteral("prob"));
        prob->setGeometry(QRect(160, 100, 181, 31));
        prob->setFont(font);
        probBox = new QComboBox(Riscuri);
        probBox->setObjectName(QStringLiteral("probBox"));
        probBox->setGeometry(QRect(160, 130, 111, 31));
        probBox->setFont(font);
        gradBox = new QComboBox(Riscuri);
        gradBox->setObjectName(QStringLiteral("gradBox"));
        gradBox->setGeometry(QRect(390, 130, 111, 31));
        gradBox->setFont(font);
        grad = new QLabel(Riscuri);
        grad->setObjectName(QStringLiteral("grad"));
        grad->setGeometry(QRect(390, 100, 181, 31));
        grad->setFont(font);
        label2 = new QLabel(Riscuri);
        label2->setObjectName(QStringLiteral("label2"));
        label2->setGeometry(QRect(10, 170, 781, 31));
        label2->setFont(font);
        evaluareBox_5 = new QComboBox(Riscuri);
        evaluareBox_5->setObjectName(QStringLiteral("evaluareBox_5"));
        evaluareBox_5->setGeometry(QRect(10, 300, 261, 31));
        evaluareBox_5->setFont(font);
        evaluare = new QLabel(Riscuri);
        evaluare->setObjectName(QStringLiteral("evaluare"));
        evaluare->setGeometry(QRect(10, 270, 281, 31));
        evaluare->setFont(font);
        client = new QLabel(Riscuri);
        client->setObjectName(QStringLiteral("client"));
        client->setGeometry(QRect(10, 200, 151, 31));
        client->setFont(font);
        clientBox = new QComboBox(Riscuri);
        clientBox->setObjectName(QStringLiteral("clientBox"));
        clientBox->setGeometry(QRect(10, 230, 261, 31));
        clientBox->setFont(font);
        risc = new QLabel(Riscuri);
        risc->setObjectName(QStringLiteral("risc"));
        risc->setGeometry(QRect(310, 200, 331, 31));
        risc->setFont(font);
        riscBox = new QComboBox(Riscuri);
        riscBox->setObjectName(QStringLiteral("riscBox"));
        riscBox->setGeometry(QRect(310, 230, 261, 31));
        riscBox->setFont(font);
        salveaza2 = new QPushButton(Riscuri);
        salveaza2->setObjectName(QStringLiteral("salveaza2"));
        salveaza2->setGeometry(QRect(600, 340, 190, 40));
        anuleaza2 = new QPushButton(Riscuri);
        anuleaza2->setObjectName(QStringLiteral("anuleaza2"));
        anuleaza2->setGeometry(QRect(600, 380, 190, 40));
        anuleaza1 = new QPushButton(Riscuri);
        anuleaza1->setObjectName(QStringLiteral("anuleaza1"));
        anuleaza1->setGeometry(QRect(600, 200, 190, 40));
        salveaza1 = new QPushButton(Riscuri);
        salveaza1->setObjectName(QStringLiteral("salveaza1"));
        salveaza1->setGeometry(QRect(600, 160, 190, 40));
        actiune = new QLabel(Riscuri);
        actiune->setObjectName(QStringLiteral("actiune"));
        actiune->setGeometry(QRect(310, 270, 331, 31));
        actiune->setFont(font);
        actiuneEdit = new QLineEdit(Riscuri);
        actiuneEdit->setObjectName(QStringLiteral("actiuneEdit"));
        actiuneEdit->setGeometry(QRect(310, 300, 331, 31));
        actiuneEdit->setFont(font1);

        retranslateUi(Riscuri);

        QMetaObject::connectSlotsByName(Riscuri);
    } // setupUi

    void retranslateUi(QDialog *Riscuri)
    {
        Riscuri->setWindowTitle(QApplication::translate("Riscuri", "Dialog", 0));
        addrisc->setText(QApplication::translate("Riscuri", "Adauga un nou risc", 0));
        aclient->setText(QApplication::translate("Riscuri", "Analiza clienti", 0));
        iesire->setText(QApplication::translate("Riscuri", "Iesire", 0));
        rfin->setText(QApplication::translate("Riscuri", "Riscuri financiare", 0));
        label->setText(QApplication::translate("Riscuri", "Indtroduceti informatiile cerute:", 0));
        descriere->setText(QApplication::translate("Riscuri", "Descrierea riscului:", 0));
        gravitate->setText(QApplication::translate("Riscuri", "Gravitatea:", 0));
        gravitateBox->clear();
        gravitateBox->insertItems(0, QStringList()
         << QApplication::translate("Riscuri", "Scazuta", 0)
         << QApplication::translate("Riscuri", "Moderat", 0)
         << QApplication::translate("Riscuri", "Crescut", 0)
         << QApplication::translate("Riscuri", "Iminent", 0)
        );
        prob->setText(QApplication::translate("Riscuri", "Probabilitate de aparitie:", 0));
        probBox->clear();
        probBox->insertItems(0, QStringList()
         << QApplication::translate("Riscuri", "Scazuta", 0)
         << QApplication::translate("Riscuri", "Moderat", 0)
         << QApplication::translate("Riscuri", "Crescut", 0)
         << QApplication::translate("Riscuri", "Iminent", 0)
        );
        gradBox->clear();
        gradBox->insertItems(0, QStringList()
         << QApplication::translate("Riscuri", "Scazut", 0)
         << QApplication::translate("Riscuri", "Moderat", 0)
         << QApplication::translate("Riscuri", "Crescut", 0)
         << QApplication::translate("Riscuri", "Iminent", 0)
        );
        grad->setText(QApplication::translate("Riscuri", "Grad de detctabilitate:", 0));
        label2->setText(QApplication::translate("Riscuri", "Indtroduceti informatiile cerute:", 0));
        evaluareBox_5->clear();
        evaluareBox_5->insertItems(0, QStringList()
         << QApplication::translate("Riscuri", "Scazuta", 0)
         << QApplication::translate("Riscuri", "Moderat", 0)
         << QApplication::translate("Riscuri", "Crescut", 0)
         << QApplication::translate("Riscuri", "Iminent", 0)
        );
        evaluare->setText(QApplication::translate("Riscuri", "Evaluare riscului pentru acest client:", 0));
        client->setText(QApplication::translate("Riscuri", "Alegeti clientul:", 0));
        risc->setText(QApplication::translate("Riscuri", "Alegeti riscul asociat:", 0));
        salveaza2->setText(QApplication::translate("Riscuri", "Salveaza", 0));
        anuleaza2->setText(QApplication::translate("Riscuri", "Anuleaza", 0));
        anuleaza1->setText(QApplication::translate("Riscuri", "Anuleaza", 0));
        salveaza1->setText(QApplication::translate("Riscuri", "Salveaza", 0));
        actiune->setText(QApplication::translate("Riscuri", "Actiune corectiva pentru diminuarea riscului:", 0));
    } // retranslateUi

};

namespace Ui {
    class Riscuri: public Ui_Riscuri {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RISCURI_H
