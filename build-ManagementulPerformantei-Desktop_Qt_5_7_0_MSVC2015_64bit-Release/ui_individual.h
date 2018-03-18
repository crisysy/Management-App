/********************************************************************************
** Form generated from reading UI file 'individual.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INDIVIDUAL_H
#define UI_INDIVIDUAL_H

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

class Ui_Individual
{
public:
    QTableView *tableView;
    QPushButton *salveaza;
    QLabel *label1;
    QLabel *label2;
    QLabel *mob1;
    QLabel *sh;
    QLabel *ob2;
    QLabel *ob1;
    QLabel *ob3;
    QLabel *add;
    QLineEdit *ob1Edit;
    QLabel *mob2;
    QLabel *mob3;
    QLineEdit *ob2Edit;
    QLineEdit *ob3Edit;
    QLabel *asob1;
    QComboBox *asob1Box;
    QLabel *asob2;
    QComboBox *asob2Box;
    QLabel *asob3;
    QComboBox *asob3Box;
    QPushButton *salveaza_2;
    QPushButton *anuleaza;

    void setupUi(QDialog *Individual)
    {
        if (Individual->objectName().isEmpty())
            Individual->setObjectName(QStringLiteral("Individual"));
        Individual->resize(800, 600);
        tableView = new QTableView(Individual);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 781, 461));
        salveaza = new QPushButton(Individual);
        salveaza->setObjectName(QStringLiteral("salveaza"));
        salveaza->setGeometry(QRect(600, 550, 190, 40));
        QFont font;
        font.setPointSize(10);
        salveaza->setFont(font);
        label1 = new QLabel(Individual);
        label1->setObjectName(QStringLiteral("label1"));
        label1->setGeometry(QRect(10, 480, 771, 31));
        label1->setFont(font);
        label2 = new QLabel(Individual);
        label2->setObjectName(QStringLiteral("label2"));
        label2->setGeometry(QRect(10, 510, 771, 31));
        label2->setFont(font);
        mob1 = new QLabel(Individual);
        mob1->setObjectName(QStringLiteral("mob1"));
        mob1->setGeometry(QRect(10, 170, 121, 31));
        mob1->setFont(font);
        sh = new QLabel(Individual);
        sh->setObjectName(QStringLiteral("sh"));
        sh->setGeometry(QRect(10, 10, 771, 31));
        sh->setFont(font);
        ob2 = new QLabel(Individual);
        ob2->setObjectName(QStringLiteral("ob2"));
        ob2->setGeometry(QRect(10, 70, 771, 31));
        ob2->setFont(font);
        ob1 = new QLabel(Individual);
        ob1->setObjectName(QStringLiteral("ob1"));
        ob1->setGeometry(QRect(10, 40, 771, 31));
        ob1->setFont(font);
        ob3 = new QLabel(Individual);
        ob3->setObjectName(QStringLiteral("ob3"));
        ob3->setGeometry(QRect(10, 100, 771, 31));
        ob3->setFont(font);
        add = new QLabel(Individual);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(10, 140, 771, 31));
        add->setFont(font);
        ob1Edit = new QLineEdit(Individual);
        ob1Edit->setObjectName(QStringLiteral("ob1Edit"));
        ob1Edit->setGeometry(QRect(10, 200, 721, 31));
        ob1Edit->setFont(font);
        mob2 = new QLabel(Individual);
        mob2->setObjectName(QStringLiteral("mob2"));
        mob2->setGeometry(QRect(10, 270, 151, 31));
        mob2->setFont(font);
        mob3 = new QLabel(Individual);
        mob3->setObjectName(QStringLiteral("mob3"));
        mob3->setGeometry(QRect(10, 370, 151, 31));
        mob3->setFont(font);
        ob2Edit = new QLineEdit(Individual);
        ob2Edit->setObjectName(QStringLiteral("ob2Edit"));
        ob2Edit->setGeometry(QRect(10, 300, 721, 31));
        ob2Edit->setFont(font);
        ob3Edit = new QLineEdit(Individual);
        ob3Edit->setObjectName(QStringLiteral("ob3Edit"));
        ob3Edit->setGeometry(QRect(10, 400, 721, 31));
        ob3Edit->setFont(font);
        asob1 = new QLabel(Individual);
        asob1->setObjectName(QStringLiteral("asob1"));
        asob1->setGeometry(QRect(10, 230, 221, 31));
        asob1->setFont(font);
        asob1Box = new QComboBox(Individual);
        asob1Box->setObjectName(QStringLiteral("asob1Box"));
        asob1Box->setGeometry(QRect(230, 230, 501, 31));
        asob2 = new QLabel(Individual);
        asob2->setObjectName(QStringLiteral("asob2"));
        asob2->setGeometry(QRect(10, 330, 221, 31));
        asob2->setFont(font);
        asob2Box = new QComboBox(Individual);
        asob2Box->setObjectName(QStringLiteral("asob2Box"));
        asob2Box->setGeometry(QRect(230, 330, 501, 31));
        asob3 = new QLabel(Individual);
        asob3->setObjectName(QStringLiteral("asob3"));
        asob3->setGeometry(QRect(10, 430, 221, 31));
        asob3->setFont(font);
        asob3Box = new QComboBox(Individual);
        asob3Box->setObjectName(QStringLiteral("asob3Box"));
        asob3Box->setGeometry(QRect(230, 430, 501, 31));
        salveaza_2 = new QPushButton(Individual);
        salveaza_2->setObjectName(QStringLiteral("salveaza_2"));
        salveaza_2->setGeometry(QRect(600, 470, 190, 40));
        salveaza_2->setFont(font);
        anuleaza = new QPushButton(Individual);
        anuleaza->setObjectName(QStringLiteral("anuleaza"));
        anuleaza->setGeometry(QRect(600, 510, 190, 40));
        anuleaza->setFont(font);

        retranslateUi(Individual);

        QMetaObject::connectSlotsByName(Individual);
    } // setupUi

    void retranslateUi(QDialog *Individual)
    {
        Individual->setWindowTitle(QApplication::translate("Individual", "Dialog", 0));
        salveaza->setText(QApplication::translate("Individual", "Salveaza si inchide", 0));
        label1->setText(QApplication::translate("Individual", "Selectati din lista de mai sus angajatul caruia doriti sa ii atribuiti obiective.", 0));
        label2->setText(QApplication::translate("Individual", "Daca acesta are deja obiectivele definite, prin selectare se pot vizualiza si modifica.", 0));
        mob1->setText(QApplication::translate("Individual", "Primul obiectiv:", 0));
        sh->setText(QApplication::translate("Individual", "Cele trei obiective ale acestui angajat sunt:", 0));
        ob2->setText(QApplication::translate("Individual", "Al doilea obiectiv nu este stabilit", 0));
        ob1->setText(QApplication::translate("Individual", "Primul obiectiv nu este stabilit", 0));
        ob3->setText(QApplication::translate("Individual", "Al treilea obiectiv nu este stabilit", 0));
        add->setText(QApplication::translate("Individual", "Adaugarea/modificarea obiectivelor angajatului:", 0));
        mob2->setText(QApplication::translate("Individual", "Al doilea obiectiv:", 0));
        mob3->setText(QApplication::translate("Individual", "Al treilea obiectiv:", 0));
        asob1->setText(QApplication::translate("Individual", "Obiectiv operational asociat:", 0));
        asob2->setText(QApplication::translate("Individual", "Obiectiv operational asociat:", 0));
        asob3->setText(QApplication::translate("Individual", "Obiectiv operational asociat:", 0));
        salveaza_2->setText(QApplication::translate("Individual", "Salveaza", 0));
        anuleaza->setText(QApplication::translate("Individual", "Anuleaza", 0));
    } // retranslateUi

};

namespace Ui {
    class Individual: public Ui_Individual {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INDIVIDUAL_H
