/********************************************************************************
** Form generated from reading UI file 'procese.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESE_H
#define UI_PROCESE_H

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

class Ui_Procese
{
public:
    QTableView *tableView;
    QPushButton *addproces;
    QPushButton *iesire;
    QLabel *label;
    QLabel *label2;
    QComboBox *comboBox;
    QLabel *newp;
    QLabel *tip;
    QComboBox *tipBox;
    QLabel *nume;
    QLabel *prenume;
    QLineEdit *numeEdit;
    QLineEdit *prenumeEdit;
    QLabel *agentie;
    QComboBox *agentieBox;
    QPushButton *salveaza;
    QPushButton *anuleaza;

    void setupUi(QDialog *Procese)
    {
        if (Procese->objectName().isEmpty())
            Procese->setObjectName(QStringLiteral("Procese"));
        Procese->resize(800, 600);
        tableView = new QTableView(Procese);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 781, 341));
        addproces = new QPushButton(Procese);
        addproces->setObjectName(QStringLiteral("addproces"));
        addproces->setGeometry(QRect(600, 450, 190, 40));
        QFont font;
        font.setPointSize(10);
        addproces->setFont(font);
        iesire = new QPushButton(Procese);
        iesire->setObjectName(QStringLiteral("iesire"));
        iesire->setGeometry(QRect(600, 500, 190, 40));
        iesire->setFont(font);
        label = new QLabel(Procese);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 360, 781, 31));
        label->setFont(font);
        label2 = new QLabel(Procese);
        label2->setObjectName(QStringLiteral("label2"));
        label2->setGeometry(QRect(10, 390, 781, 31));
        label2->setFont(font);
        comboBox = new QComboBox(Procese);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 420, 241, 31));
        comboBox->setFont(font);
        newp = new QLabel(Procese);
        newp->setObjectName(QStringLiteral("newp"));
        newp->setGeometry(QRect(10, 10, 781, 31));
        newp->setFont(font);
        tip = new QLabel(Procese);
        tip->setObjectName(QStringLiteral("tip"));
        tip->setGeometry(QRect(30, 40, 138, 31));
        tip->setFont(font);
        tipBox = new QComboBox(Procese);
        tipBox->setObjectName(QStringLiteral("tipBox"));
        tipBox->setGeometry(QRect(210, 40, 241, 31));
        tipBox->setFont(font);
        nume = new QLabel(Procese);
        nume->setObjectName(QStringLiteral("nume"));
        nume->setGeometry(QRect(30, 80, 141, 31));
        nume->setFont(font);
        prenume = new QLabel(Procese);
        prenume->setObjectName(QStringLiteral("prenume"));
        prenume->setGeometry(QRect(20, 110, 161, 31));
        prenume->setFont(font);
        numeEdit = new QLineEdit(Procese);
        numeEdit->setObjectName(QStringLiteral("numeEdit"));
        numeEdit->setGeometry(QRect(210, 80, 241, 31));
        prenumeEdit = new QLineEdit(Procese);
        prenumeEdit->setObjectName(QStringLiteral("prenumeEdit"));
        prenumeEdit->setGeometry(QRect(210, 110, 241, 31));
        agentie = new QLabel(Procese);
        agentie->setObjectName(QStringLiteral("agentie"));
        agentie->setGeometry(QRect(10, 160, 201, 31));
        agentie->setFont(font);
        agentieBox = new QComboBox(Procese);
        agentieBox->setObjectName(QStringLiteral("agentieBox"));
        agentieBox->setGeometry(QRect(210, 160, 241, 31));
        agentieBox->setFont(font);
        salveaza = new QPushButton(Procese);
        salveaza->setObjectName(QStringLiteral("salveaza"));
        salveaza->setGeometry(QRect(590, 240, 190, 40));
        salveaza->setFont(font);
        anuleaza = new QPushButton(Procese);
        anuleaza->setObjectName(QStringLiteral("anuleaza"));
        anuleaza->setGeometry(QRect(590, 290, 190, 40));
        anuleaza->setFont(font);

        retranslateUi(Procese);

        QMetaObject::connectSlotsByName(Procese);
    } // setupUi

    void retranslateUi(QDialog *Procese)
    {
        Procese->setWindowTitle(QApplication::translate("Procese", "Dialog", 0));
        addproces->setText(QApplication::translate("Procese", "Adauga un nou proces", 0));
        iesire->setText(QApplication::translate("Procese", "Iesire", 0));
        label->setText(QApplication::translate("Procese", "Predefinit sunt afisate toate procesele pentru toate agentiile.", 0));
        label2->setText(QApplication::translate("Procese", "Daca se doreste afisarea doar pentru una singura, selectati din lista de mai jos agentia dorita", 0));
        newp->setText(QApplication::translate("Procese", "Pentru adaugarea unui noi proces, completati campurile urmatoare:", 0));
        tip->setText(QApplication::translate("Procese", "Tipul procesului:", 0));
        tipBox->clear();
        tipBox->insertItems(0, QStringList()
         << QApplication::translate("Procese", "Transport rutier", 0)
         << QApplication::translate("Procese", "Transport aerian", 0)
         << QApplication::translate("Procese", "Transport maritim", 0)
         << QApplication::translate("Procese", "Transport feroviar", 0)
         << QApplication::translate("Procese", "Transport special", 0)
         << QApplication::translate("Procese", "Depozitare", 0)
        );
        nume->setText(QApplication::translate("Procese", "Nume responsabil:", 0));
        prenume->setText(QApplication::translate("Procese", "Prenume responsabil:", 0));
        agentie->setText(QApplication::translate("Procese", "Agentia corespunzatoare:", 0));
        salveaza->setText(QApplication::translate("Procese", "Salveaza", 0));
        anuleaza->setText(QApplication::translate("Procese", "Anuleaza", 0));
    } // retranslateUi

};

namespace Ui {
    class Procese: public Ui_Procese {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESE_H
