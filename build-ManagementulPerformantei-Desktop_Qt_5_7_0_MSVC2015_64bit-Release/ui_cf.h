/********************************************************************************
** Form generated from reading UI file 'cf.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CF_H
#define UI_CF_H

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

class Ui_Cf
{
public:
    QTableView *tableView;
    QLabel *select;
    QComboBox *agentieBox;
    QPushButton *showc;
    QPushButton *showf;
    QPushButton *inchide;
    QLabel *newcf;
    QLabel *cf;
    QLineEdit *cfEdit;
    QLabel *aferent;
    QComboBox *aferentBox;
    QPushButton *salveaza;
    QPushButton *anuleaza;
    QPushButton *sc;
    QPushButton *sf;

    void setupUi(QDialog *Cf)
    {
        if (Cf->objectName().isEmpty())
            Cf->setObjectName(QStringLiteral("Cf"));
        Cf->resize(800, 600);
        tableView = new QTableView(Cf);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 781, 321));
        select = new QLabel(Cf);
        select->setObjectName(QStringLiteral("select"));
        select->setGeometry(QRect(20, 340, 521, 41));
        QFont font;
        font.setPointSize(9);
        select->setFont(font);
        agentieBox = new QComboBox(Cf);
        agentieBox->setObjectName(QStringLiteral("agentieBox"));
        agentieBox->setGeometry(QRect(550, 341, 241, 31));
        QFont font1;
        font1.setPointSize(8);
        agentieBox->setFont(font1);
        showc = new QPushButton(Cf);
        showc->setObjectName(QStringLiteral("showc"));
        showc->setGeometry(QRect(20, 380, 190, 40));
        QFont font2;
        font2.setPointSize(10);
        showc->setFont(font2);
        showf = new QPushButton(Cf);
        showf->setObjectName(QStringLiteral("showf"));
        showf->setGeometry(QRect(20, 420, 190, 40));
        showf->setFont(font2);
        inchide = new QPushButton(Cf);
        inchide->setObjectName(QStringLiteral("inchide"));
        inchide->setGeometry(QRect(600, 550, 190, 40));
        inchide->setFont(font2);
        newcf = new QLabel(Cf);
        newcf->setObjectName(QStringLiteral("newcf"));
        newcf->setGeometry(QRect(10, 10, 521, 41));
        newcf->setFont(font);
        cf = new QLabel(Cf);
        cf->setObjectName(QStringLiteral("cf"));
        cf->setGeometry(QRect(10, 50, 141, 41));
        cf->setFont(font);
        cfEdit = new QLineEdit(Cf);
        cfEdit->setObjectName(QStringLiteral("cfEdit"));
        cfEdit->setGeometry(QRect(10, 91, 391, 31));
        aferent = new QLabel(Cf);
        aferent->setObjectName(QStringLiteral("aferent"));
        aferent->setGeometry(QRect(10, 130, 141, 41));
        aferent->setFont(font);
        aferentBox = new QComboBox(Cf);
        aferentBox->setObjectName(QStringLiteral("aferentBox"));
        aferentBox->setGeometry(QRect(10, 170, 391, 31));
        salveaza = new QPushButton(Cf);
        salveaza->setObjectName(QStringLiteral("salveaza"));
        salveaza->setGeometry(QRect(600, 400, 190, 40));
        salveaza->setFont(font2);
        anuleaza = new QPushButton(Cf);
        anuleaza->setObjectName(QStringLiteral("anuleaza"));
        anuleaza->setGeometry(QRect(600, 440, 190, 40));
        anuleaza->setFont(font2);
        sc = new QPushButton(Cf);
        sc->setObjectName(QStringLiteral("sc"));
        sc->setGeometry(QRect(250, 380, 190, 40));
        sc->setFont(font2);
        sf = new QPushButton(Cf);
        sf->setObjectName(QStringLiteral("sf"));
        sf->setGeometry(QRect(250, 420, 190, 40));
        sf->setFont(font2);

        retranslateUi(Cf);

        QMetaObject::connectSlotsByName(Cf);
    } // setupUi

    void retranslateUi(QDialog *Cf)
    {
        Cf->setWindowTitle(QApplication::translate("Cf", "Dialog", 0));
        select->setText(QApplication::translate("Cf", "Selectati din lista agentia pentru care doriti sa se afiseze lista de clienti/furnizori:", 0));
        showc->setText(QApplication::translate("Cf", "Adauga client nou", 0));
        showf->setText(QApplication::translate("Cf", "Adauga furnizor nou", 0));
        inchide->setText(QApplication::translate("Cf", "Inchide", 0));
        newcf->setText(QApplication::translate("Cf", "Selectati din lista agentia pentru care doriti sa se afiseze lista de clienti/furnizori:", 0));
        cf->setText(QApplication::translate("Cf", "Nume client/furnizor:", 0));
        aferent->setText(QApplication::translate("Cf", "Agentia aferenta:", 0));
        salveaza->setText(QApplication::translate("Cf", "Salveaza", 0));
        anuleaza->setText(QApplication::translate("Cf", "Anuleaza", 0));
        sc->setText(QApplication::translate("Cf", "Afiseaza clienti", 0));
        sf->setText(QApplication::translate("Cf", "Afiseaza furnizori", 0));
    } // retranslateUi

};

namespace Ui {
    class Cf: public Ui_Cf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CF_H
