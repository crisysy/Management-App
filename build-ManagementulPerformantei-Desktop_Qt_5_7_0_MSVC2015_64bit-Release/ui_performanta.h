/********************************************************************************
** Form generated from reading UI file 'performanta.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERFORMANTA_H
#define UI_PERFORMANTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Performanta
{
public:
    QTableView *tableView;
    QLabel *labelmodificare;
    QPushButton *salveaza;
    QPushButton *adauga;
    QPushButton *salveaza2;
    QLabel *info;
    QLabel *labelnume;
    QLabel *labelprenume;
    QLineEdit *numeEdit;
    QLineEdit *prenumeEdit;
    QCheckBox *studii;
    QLabel *hard;
    QCheckBox *hard1;
    QCheckBox *hard2;
    QCheckBox *hard3;
    QCheckBox *hard4;
    QCheckBox *hard5;
    QCheckBox *hard6;
    QCheckBox *hard7;
    QCheckBox *hard8;
    QCheckBox *hard9;
    QLabel *soft;
    QCheckBox *soft1;
    QCheckBox *soft2;
    QCheckBox *soft3;
    QCheckBox *soft4;
    QCheckBox *soft5;
    QCheckBox *soft6;
    QCheckBox *soft7;
    QCheckBox *soft8;
    QCheckBox *soft9;
    QLabel *ap;
    QCheckBox *ap1;
    QCheckBox *ap2;
    QCheckBox *ap3;
    QCheckBox *ap4;
    QCheckBox *ap5;
    QCheckBox *ap6;
    QCheckBox *ap7;
    QCheckBox *ap8;
    QCheckBox *ap9;
    QLabel *mhard;
    QLabel *msoft;
    QLineEdit *hardEdit;
    QLineEdit *softEdit;
    QCheckBox *manager;
    QLabel *functie;
    QLineEdit *functieEdit;
    QLabel *agentie;
    QComboBox *comboBox;

    void setupUi(QDialog *Performanta)
    {
        if (Performanta->objectName().isEmpty())
            Performanta->setObjectName(QStringLiteral("Performanta"));
        Performanta->resize(800, 600);
        tableView = new QTableView(Performanta);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 781, 401));
        labelmodificare = new QLabel(Performanta);
        labelmodificare->setObjectName(QStringLiteral("labelmodificare"));
        labelmodificare->setGeometry(QRect(20, 420, 761, 31));
        QFont font;
        font.setPointSize(10);
        labelmodificare->setFont(font);
        salveaza = new QPushButton(Performanta);
        salveaza->setObjectName(QStringLiteral("salveaza"));
        salveaza->setGeometry(QRect(600, 530, 190, 40));
        salveaza->setFont(font);
        adauga = new QPushButton(Performanta);
        adauga->setObjectName(QStringLiteral("adauga"));
        adauga->setGeometry(QRect(600, 490, 190, 40));
        adauga->setFont(font);
        salveaza2 = new QPushButton(Performanta);
        salveaza2->setObjectName(QStringLiteral("salveaza2"));
        salveaza2->setGeometry(QRect(600, 490, 190, 40));
        salveaza2->setFont(font);
        info = new QLabel(Performanta);
        info->setObjectName(QStringLiteral("info"));
        info->setGeometry(QRect(20, 10, 441, 31));
        info->setFont(font);
        labelnume = new QLabel(Performanta);
        labelnume->setObjectName(QStringLiteral("labelnume"));
        labelnume->setGeometry(QRect(20, 40, 81, 31));
        labelnume->setFont(font);
        labelprenume = new QLabel(Performanta);
        labelprenume->setObjectName(QStringLiteral("labelprenume"));
        labelprenume->setGeometry(QRect(20, 70, 81, 31));
        labelprenume->setFont(font);
        numeEdit = new QLineEdit(Performanta);
        numeEdit->setObjectName(QStringLiteral("numeEdit"));
        numeEdit->setGeometry(QRect(110, 40, 311, 31));
        prenumeEdit = new QLineEdit(Performanta);
        prenumeEdit->setObjectName(QStringLiteral("prenumeEdit"));
        prenumeEdit->setGeometry(QRect(110, 70, 311, 31));
        studii = new QCheckBox(Performanta);
        studii->setObjectName(QStringLiteral("studii"));
        studii->setGeometry(QRect(20, 110, 381, 20));
        studii->setFont(font);
        hard = new QLabel(Performanta);
        hard->setObjectName(QStringLiteral("hard"));
        hard->setGeometry(QRect(20, 130, 451, 31));
        hard->setFont(font);
        hard1 = new QCheckBox(Performanta);
        hard1->setObjectName(QStringLiteral("hard1"));
        hard1->setGeometry(QRect(20, 160, 151, 20));
        hard1->setFont(font);
        hard2 = new QCheckBox(Performanta);
        hard2->setObjectName(QStringLiteral("hard2"));
        hard2->setGeometry(QRect(20, 190, 161, 20));
        hard2->setFont(font);
        hard3 = new QCheckBox(Performanta);
        hard3->setObjectName(QStringLiteral("hard3"));
        hard3->setGeometry(QRect(20, 220, 151, 20));
        hard3->setFont(font);
        hard4 = new QCheckBox(Performanta);
        hard4->setObjectName(QStringLiteral("hard4"));
        hard4->setGeometry(QRect(220, 160, 161, 20));
        hard4->setFont(font);
        hard5 = new QCheckBox(Performanta);
        hard5->setObjectName(QStringLiteral("hard5"));
        hard5->setGeometry(QRect(220, 190, 201, 20));
        hard5->setFont(font);
        hard6 = new QCheckBox(Performanta);
        hard6->setObjectName(QStringLiteral("hard6"));
        hard6->setGeometry(QRect(220, 220, 181, 20));
        hard6->setFont(font);
        hard7 = new QCheckBox(Performanta);
        hard7->setObjectName(QStringLiteral("hard7"));
        hard7->setGeometry(QRect(450, 160, 151, 20));
        hard7->setFont(font);
        hard8 = new QCheckBox(Performanta);
        hard8->setObjectName(QStringLiteral("hard8"));
        hard8->setGeometry(QRect(450, 190, 151, 20));
        hard8->setFont(font);
        hard9 = new QCheckBox(Performanta);
        hard9->setObjectName(QStringLiteral("hard9"));
        hard9->setGeometry(QRect(450, 220, 151, 20));
        hard9->setFont(font);
        soft = new QLabel(Performanta);
        soft->setObjectName(QStringLiteral("soft"));
        soft->setGeometry(QRect(20, 250, 451, 31));
        soft->setFont(font);
        soft1 = new QCheckBox(Performanta);
        soft1->setObjectName(QStringLiteral("soft1"));
        soft1->setGeometry(QRect(20, 280, 201, 20));
        soft1->setFont(font);
        soft2 = new QCheckBox(Performanta);
        soft2->setObjectName(QStringLiteral("soft2"));
        soft2->setGeometry(QRect(20, 310, 201, 20));
        soft2->setFont(font);
        soft3 = new QCheckBox(Performanta);
        soft3->setObjectName(QStringLiteral("soft3"));
        soft3->setGeometry(QRect(20, 340, 201, 20));
        soft3->setFont(font);
        soft4 = new QCheckBox(Performanta);
        soft4->setObjectName(QStringLiteral("soft4"));
        soft4->setGeometry(QRect(280, 280, 201, 20));
        soft4->setFont(font);
        soft5 = new QCheckBox(Performanta);
        soft5->setObjectName(QStringLiteral("soft5"));
        soft5->setGeometry(QRect(280, 310, 201, 20));
        soft5->setFont(font);
        soft6 = new QCheckBox(Performanta);
        soft6->setObjectName(QStringLiteral("soft6"));
        soft6->setGeometry(QRect(280, 340, 221, 20));
        soft6->setFont(font);
        soft7 = new QCheckBox(Performanta);
        soft7->setObjectName(QStringLiteral("soft7"));
        soft7->setGeometry(QRect(540, 280, 201, 20));
        soft7->setFont(font);
        soft8 = new QCheckBox(Performanta);
        soft8->setObjectName(QStringLiteral("soft8"));
        soft8->setGeometry(QRect(540, 310, 201, 20));
        soft8->setFont(font);
        soft9 = new QCheckBox(Performanta);
        soft9->setObjectName(QStringLiteral("soft9"));
        soft9->setGeometry(QRect(540, 340, 211, 20));
        soft9->setFont(font);
        ap = new QLabel(Performanta);
        ap->setObjectName(QStringLiteral("ap"));
        ap->setGeometry(QRect(20, 360, 451, 31));
        ap->setFont(font);
        ap1 = new QCheckBox(Performanta);
        ap1->setObjectName(QStringLiteral("ap1"));
        ap1->setGeometry(QRect(20, 390, 221, 20));
        ap1->setFont(font);
        ap2 = new QCheckBox(Performanta);
        ap2->setObjectName(QStringLiteral("ap2"));
        ap2->setGeometry(QRect(20, 420, 221, 20));
        ap2->setFont(font);
        ap3 = new QCheckBox(Performanta);
        ap3->setObjectName(QStringLiteral("ap3"));
        ap3->setGeometry(QRect(20, 450, 221, 20));
        ap3->setFont(font);
        ap4 = new QCheckBox(Performanta);
        ap4->setObjectName(QStringLiteral("ap4"));
        ap4->setGeometry(QRect(300, 390, 221, 20));
        ap4->setFont(font);
        ap5 = new QCheckBox(Performanta);
        ap5->setObjectName(QStringLiteral("ap5"));
        ap5->setGeometry(QRect(300, 420, 221, 20));
        ap5->setFont(font);
        ap6 = new QCheckBox(Performanta);
        ap6->setObjectName(QStringLiteral("ap6"));
        ap6->setGeometry(QRect(300, 450, 221, 20));
        ap6->setFont(font);
        ap7 = new QCheckBox(Performanta);
        ap7->setObjectName(QStringLiteral("ap7"));
        ap7->setGeometry(QRect(550, 390, 221, 20));
        ap7->setFont(font);
        ap8 = new QCheckBox(Performanta);
        ap8->setObjectName(QStringLiteral("ap8"));
        ap8->setGeometry(QRect(550, 420, 221, 20));
        ap8->setFont(font);
        ap9 = new QCheckBox(Performanta);
        ap9->setObjectName(QStringLiteral("ap9"));
        ap9->setGeometry(QRect(550, 450, 221, 20));
        ap9->setFont(font);
        mhard = new QLabel(Performanta);
        mhard->setObjectName(QStringLiteral("mhard"));
        mhard->setGeometry(QRect(430, 40, 281, 31));
        mhard->setFont(font);
        msoft = new QLabel(Performanta);
        msoft->setObjectName(QStringLiteral("msoft"));
        msoft->setGeometry(QRect(430, 70, 281, 31));
        msoft->setFont(font);
        hardEdit = new QLineEdit(Performanta);
        hardEdit->setObjectName(QStringLiteral("hardEdit"));
        hardEdit->setGeometry(QRect(710, 40, 81, 31));
        softEdit = new QLineEdit(Performanta);
        softEdit->setObjectName(QStringLiteral("softEdit"));
        softEdit->setGeometry(QRect(710, 70, 81, 31));
        manager = new QCheckBox(Performanta);
        manager->setObjectName(QStringLiteral("manager"));
        manager->setGeometry(QRect(400, 110, 381, 20));
        manager->setFont(font);
        functie = new QLabel(Performanta);
        functie->setObjectName(QStringLiteral("functie"));
        functie->setGeometry(QRect(20, 470, 281, 31));
        functie->setFont(font);
        functieEdit = new QLineEdit(Performanta);
        functieEdit->setObjectName(QStringLiteral("functieEdit"));
        functieEdit->setGeometry(QRect(20, 500, 281, 31));
        agentie = new QLabel(Performanta);
        agentie->setObjectName(QStringLiteral("agentie"));
        agentie->setGeometry(QRect(320, 470, 281, 31));
        agentie->setFont(font);
        comboBox = new QComboBox(Performanta);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(320, 500, 261, 31));

        retranslateUi(Performanta);

        QMetaObject::connectSlotsByName(Performanta);
    } // setupUi

    void retranslateUi(QDialog *Performanta)
    {
        Performanta->setWindowTitle(QApplication::translate("Performanta", "Dialog", 0));
        labelmodificare->setText(QApplication::translate("Performanta", "Pentru modificarea datelor unui angajat, selectati cu dublu click persoana dorita din lista de mai sus.", 0));
        salveaza->setText(QApplication::translate("Performanta", "Salveaza si inchide", 0));
        adauga->setText(QApplication::translate("Performanta", "Adauga un nou angajat", 0));
        salveaza2->setText(QApplication::translate("Performanta", "Salveaza", 0));
        info->setText(QApplication::translate("Performanta", "Informatiile noului angajat, fiecare camp este obligatoriu:", 0));
        labelnume->setText(QApplication::translate("Performanta", "Nume:", 0));
        labelprenume->setText(QApplication::translate("Performanta", "Prenume:", 0));
        studii->setText(QApplication::translate("Performanta", "Se bifeaza daca angajatul are studii superioare", 0));
        hard->setText(QApplication::translate("Performanta", "Se bifeaza aptitudinile hardware pe care angajatul le detine.", 0));
        hard1->setText(QApplication::translate("Performanta", "Transport rutier", 0));
        hard2->setText(QApplication::translate("Performanta", "Transport maritim", 0));
        hard3->setText(QApplication::translate("Performanta", "Transport aerian", 0));
        hard4->setText(QApplication::translate("Performanta", "Transport feroviar", 0));
        hard5->setText(QApplication::translate("Performanta", "Transport international", 0));
        hard6->setText(QApplication::translate("Performanta", "Transport domestic", 0));
        hard7->setText(QApplication::translate("Performanta", "Depozitare", 0));
        hard8->setText(QApplication::translate("Performanta", "Comercial", 0));
        hard9->setText(QApplication::translate("Performanta", "Achizitii", 0));
        soft->setText(QApplication::translate("Performanta", "Se bifeaza aptitudinile software pe care angajatul le detine.", 0));
        soft1->setText(QApplication::translate("Performanta", "Management de echipa", 0));
        soft2->setText(QApplication::translate("Performanta", "Analiza date", 0));
        soft3->setText(QApplication::translate("Performanta", "Luare de decizii", 0));
        soft4->setText(QApplication::translate("Performanta", "Comunicare", 0));
        soft5->setText(QApplication::translate("Performanta", "Lucru in echipa", 0));
        soft6->setText(QApplication::translate("Performanta", "Prezentare a rezultatelor", 0));
        soft7->setText(QApplication::translate("Performanta", "Initiative", 0));
        soft8->setText(QApplication::translate("Performanta", "Angajament", 0));
        soft9->setText(QApplication::translate("Performanta", "Rezolvare a problemelor", 0));
        ap->setText(QApplication::translate("Performanta", "Se bifeaza aptitudinile formarile pe care angajatul le detine.", 0));
        ap1->setText(QApplication::translate("Performanta", "Managementul clientilor", 0));
        ap2->setText(QApplication::translate("Performanta", "Managementul proiectelor", 0));
        ap3->setText(QApplication::translate("Performanta", "Managementul timpului", 0));
        ap4->setText(QApplication::translate("Performanta", "LEAN Management", 0));
        ap5->setText(QApplication::translate("Performanta", "Centura SIX SIGMA", 0));
        ap6->setText(QApplication::translate("Performanta", "Transport ADR", 0));
        ap7->setText(QApplication::translate("Performanta", "Transport IATA", 0));
        ap8->setText(QApplication::translate("Performanta", "Sistem informatic", 0));
        ap9->setText(QApplication::translate("Performanta", "Standarde de lucru", 0));
        mhard->setText(QApplication::translate("Performanta", "Nivel maturitate aptitudini hardware:", 0));
        msoft->setText(QApplication::translate("Performanta", "Nivel maturitate aptitudini software:", 0));
        manager->setText(QApplication::translate("Performanta", "Se bifeaza daca angajatul este manager", 0));
        functie->setText(QApplication::translate("Performanta", "Functia anagajatului in cadrul agentiei:", 0));
        agentie->setText(QApplication::translate("Performanta", "Agentia din care face parte:", 0));
    } // retranslateUi

};

namespace Ui {
    class Performanta: public Ui_Performanta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERFORMANTA_H
