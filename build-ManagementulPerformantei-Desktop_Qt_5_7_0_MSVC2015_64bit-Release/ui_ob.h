/********************************************************************************
** Form generated from reading UI file 'ob.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OB_H
#define UI_OB_H

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

class Ui_Ob
{
public:
    QPushButton *iesire;
    QTableView *tableView;
    QPushButton *showobstr;
    QPushButton *showobproces;
    QPushButton *showobagentie;
    QPushButton *addobstr;
    QPushButton *addobproces;
    QPushButton *addobagentie;
    QLabel *newob;
    QLabel *def;
    QLineEdit *defEdit;
    QComboBox *tipBox;
    QLabel *tip;
    QLabel *indicator;
    QLabel *tinta;
    QLineEdit *indicatorEdit;
    QLineEdit *tintaEdit;
    QLabel *aferent;
    QComboBox *aferentBox;
    QPushButton *salveaza;
    QPushButton *anuleaza;
    QComboBox *aferentBox2;

    void setupUi(QDialog *Ob)
    {
        if (Ob->objectName().isEmpty())
            Ob->setObjectName(QStringLiteral("Ob"));
        Ob->resize(800, 600);
        iesire = new QPushButton(Ob);
        iesire->setObjectName(QStringLiteral("iesire"));
        iesire->setGeometry(QRect(600, 550, 190, 40));
        QFont font;
        font.setPointSize(10);
        iesire->setFont(font);
        tableView = new QTableView(Ob);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 20, 781, 321));
        showobstr = new QPushButton(Ob);
        showobstr->setObjectName(QStringLiteral("showobstr"));
        showobstr->setGeometry(QRect(10, 340, 430, 40));
        showobstr->setFont(font);
        showobproces = new QPushButton(Ob);
        showobproces->setObjectName(QStringLiteral("showobproces"));
        showobproces->setGeometry(QRect(10, 380, 430, 40));
        showobproces->setFont(font);
        showobagentie = new QPushButton(Ob);
        showobagentie->setObjectName(QStringLiteral("showobagentie"));
        showobagentie->setGeometry(QRect(10, 420, 430, 40));
        showobagentie->setFont(font);
        addobstr = new QPushButton(Ob);
        addobstr->setObjectName(QStringLiteral("addobstr"));
        addobstr->setGeometry(QRect(450, 340, 341, 40));
        addobstr->setFont(font);
        addobproces = new QPushButton(Ob);
        addobproces->setObjectName(QStringLiteral("addobproces"));
        addobproces->setGeometry(QRect(450, 380, 341, 40));
        addobproces->setFont(font);
        addobagentie = new QPushButton(Ob);
        addobagentie->setObjectName(QStringLiteral("addobagentie"));
        addobagentie->setGeometry(QRect(450, 420, 341, 40));
        addobagentie->setFont(font);
        newob = new QLabel(Ob);
        newob->setObjectName(QStringLiteral("newob"));
        newob->setGeometry(QRect(20, 20, 531, 21));
        newob->setFont(font);
        def = new QLabel(Ob);
        def->setObjectName(QStringLiteral("def"));
        def->setGeometry(QRect(20, 50, 141, 21));
        def->setFont(font);
        defEdit = new QLineEdit(Ob);
        defEdit->setObjectName(QStringLiteral("defEdit"));
        defEdit->setGeometry(QRect(20, 80, 771, 31));
        QFont font1;
        font1.setPointSize(8);
        defEdit->setFont(font1);
        tipBox = new QComboBox(Ob);
        tipBox->setObjectName(QStringLiteral("tipBox"));
        tipBox->setGeometry(QRect(20, 150, 771, 31));
        tipBox->setFont(font);
        tip = new QLabel(Ob);
        tip->setObjectName(QStringLiteral("tip"));
        tip->setGeometry(QRect(20, 120, 421, 21));
        tip->setFont(font);
        indicator = new QLabel(Ob);
        indicator->setObjectName(QStringLiteral("indicator"));
        indicator->setGeometry(QRect(20, 200, 141, 21));
        indicator->setFont(font);
        tinta = new QLabel(Ob);
        tinta->setObjectName(QStringLiteral("tinta"));
        tinta->setGeometry(QRect(20, 230, 141, 21));
        tinta->setFont(font);
        indicatorEdit = new QLineEdit(Ob);
        indicatorEdit->setObjectName(QStringLiteral("indicatorEdit"));
        indicatorEdit->setGeometry(QRect(130, 190, 261, 31));
        indicatorEdit->setFont(font1);
        tintaEdit = new QLineEdit(Ob);
        tintaEdit->setObjectName(QStringLiteral("tintaEdit"));
        tintaEdit->setGeometry(QRect(130, 220, 261, 31));
        tintaEdit->setFont(font1);
        aferent = new QLabel(Ob);
        aferent->setObjectName(QStringLiteral("aferent"));
        aferent->setGeometry(QRect(20, 270, 231, 21));
        aferent->setFont(font);
        aferentBox = new QComboBox(Ob);
        aferentBox->setObjectName(QStringLiteral("aferentBox"));
        aferentBox->setGeometry(QRect(260, 260, 531, 31));
        aferentBox->setFont(font);
        salveaza = new QPushButton(Ob);
        salveaza->setObjectName(QStringLiteral("salveaza"));
        salveaza->setGeometry(QRect(600, 480, 190, 40));
        salveaza->setFont(font);
        anuleaza = new QPushButton(Ob);
        anuleaza->setObjectName(QStringLiteral("anuleaza"));
        anuleaza->setGeometry(QRect(600, 520, 190, 40));
        anuleaza->setFont(font);
        aferentBox2 = new QComboBox(Ob);
        aferentBox2->setObjectName(QStringLiteral("aferentBox2"));
        aferentBox2->setGeometry(QRect(260, 260, 531, 31));
        aferentBox2->setFont(font);

        retranslateUi(Ob);

        QMetaObject::connectSlotsByName(Ob);
    } // setupUi

    void retranslateUi(QDialog *Ob)
    {
        Ob->setWindowTitle(QApplication::translate("Ob", "Dialog", 0));
        iesire->setText(QApplication::translate("Ob", "Iesire", 0));
        showobstr->setText(QApplication::translate("Ob", "Afiseaza obiectivele strategice la nivel de companie", 0));
        showobproces->setText(QApplication::translate("Ob", "Afiseaza obiectivele operationle la nivel de proces", 0));
        showobagentie->setText(QApplication::translate("Ob", "Afiseaza obiectivele operationale la nivel de agentie", 0));
        addobstr->setText(QApplication::translate("Ob", "Adauga obiectiv strategic", 0));
        addobproces->setText(QApplication::translate("Ob", "Adauga obiectiv operational pentru procese", 0));
        addobagentie->setText(QApplication::translate("Ob", "Adauga obiectiv operational pentru agentii", 0));
        newob->setText(QApplication::translate("Ob", "Pentru adaugarea unui nou obiectiv, completati campurile urmatoare:", 0));
        def->setText(QApplication::translate("Ob", "Definire obiectiv:", 0));
        tip->setText(QApplication::translate("Ob", "-- text care se schimba -- vine tip obectivului asociat --", 0));
        indicator->setText(QApplication::translate("Ob", "Indicator:", 0));
        tinta->setText(QApplication::translate("Ob", "Tinta:", 0));
        aferent->setText(QApplication::translate("Ob", "-- agentie/proces aferenta --", 0));
        salveaza->setText(QApplication::translate("Ob", "Salveaza", 0));
        anuleaza->setText(QApplication::translate("Ob", "Anuleaza", 0));
    } // retranslateUi

};

namespace Ui {
    class Ob: public Ui_Ob {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OB_H
