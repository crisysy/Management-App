/********************************************************************************
** Form generated from reading UI file 'bugetare.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUGETARE_H
#define UI_BUGETARE_H

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

class Ui_Bugetare
{
public:
    QTableView *tableView;
    QLabel *modificare;
    QPushButton *addbuget;
    QPushButton *addproiect;
    QPushButton *iesire;
    QLabel *l;
    QLabel *financiar;
    QLabel *cifraafaceri;
    QLabel *costcumparare;
    QLabel *resurseumane;
    QLabel *salariiprime;
    QLabel *formari;
    QLabel *alte1;
    QLabel *tehnologia;
    QLabel *achizitii;
    QLabel *telefonie;
    QLabel *alte2;
    QLabel *infrastructura;
    QLabel *masini;
    QLabel *chirie;
    QLabel *alte3;
    QLabel *investitii;
    QLabel *cuantum;
    QLineEdit *cifraafaceriEdit;
    QLineEdit *costcumparareEdit;
    QLineEdit *salariiprimeEdit;
    QLineEdit *alte1Edit;
    QLineEdit *formariEdit;
    QLineEdit *telefonieEdit;
    QLineEdit *achizitiiEdit;
    QLineEdit *alte2Edit;
    QLineEdit *chirieEdit;
    QLineEdit *masiniEdit;
    QLineEdit *alte3Edit;
    QLineEdit *cuantumEdit;
    QPushButton *salveaza;
    QLabel *luna;
    QComboBox *luniBox;
    QLabel *an;
    QLineEdit *anEdit;
    QPushButton *anuleaza;

    void setupUi(QDialog *Bugetare)
    {
        if (Bugetare->objectName().isEmpty())
            Bugetare->setObjectName(QStringLiteral("Bugetare"));
        Bugetare->resize(800, 600);
        tableView = new QTableView(Bugetare);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 781, 331));
        modificare = new QLabel(Bugetare);
        modificare->setObjectName(QStringLiteral("modificare"));
        modificare->setGeometry(QRect(10, 560, 761, 31));
        QFont font;
        font.setPointSize(10);
        modificare->setFont(font);
        addbuget = new QPushButton(Bugetare);
        addbuget->setObjectName(QStringLiteral("addbuget"));
        addbuget->setGeometry(QRect(590, 450, 190, 40));
        addbuget->setFont(font);
        addproiect = new QPushButton(Bugetare);
        addproiect->setObjectName(QStringLiteral("addproiect"));
        addproiect->setGeometry(QRect(590, 490, 190, 40));
        addproiect->setFont(font);
        iesire = new QPushButton(Bugetare);
        iesire->setObjectName(QStringLiteral("iesire"));
        iesire->setGeometry(QRect(590, 530, 190, 40));
        iesire->setFont(font);
        l = new QLabel(Bugetare);
        l->setObjectName(QStringLiteral("l"));
        l->setGeometry(QRect(10, 10, 351, 31));
        l->setFont(font);
        financiar = new QLabel(Bugetare);
        financiar->setObjectName(QStringLiteral("financiar"));
        financiar->setGeometry(QRect(10, 40, 81, 31));
        financiar->setFont(font);
        cifraafaceri = new QLabel(Bugetare);
        cifraafaceri->setObjectName(QStringLiteral("cifraafaceri"));
        cifraafaceri->setGeometry(QRect(110, 40, 121, 31));
        cifraafaceri->setFont(font);
        costcumparare = new QLabel(Bugetare);
        costcumparare->setObjectName(QStringLiteral("costcumparare"));
        costcumparare->setGeometry(QRect(110, 70, 161, 31));
        costcumparare->setFont(font);
        resurseumane = new QLabel(Bugetare);
        resurseumane->setObjectName(QStringLiteral("resurseumane"));
        resurseumane->setGeometry(QRect(10, 100, 121, 31));
        resurseumane->setFont(font);
        salariiprime = new QLabel(Bugetare);
        salariiprime->setObjectName(QStringLiteral("salariiprime"));
        salariiprime->setGeometry(QRect(110, 130, 171, 31));
        salariiprime->setFont(font);
        formari = new QLabel(Bugetare);
        formari->setObjectName(QStringLiteral("formari"));
        formari->setGeometry(QRect(110, 160, 181, 31));
        formari->setFont(font);
        alte1 = new QLabel(Bugetare);
        alte1->setObjectName(QStringLiteral("alte1"));
        alte1->setGeometry(QRect(110, 190, 171, 31));
        alte1->setFont(font);
        tehnologia = new QLabel(Bugetare);
        tehnologia->setObjectName(QStringLiteral("tehnologia"));
        tehnologia->setGeometry(QRect(10, 220, 181, 31));
        tehnologia->setFont(font);
        achizitii = new QLabel(Bugetare);
        achizitii->setObjectName(QStringLiteral("achizitii"));
        achizitii->setGeometry(QRect(110, 250, 171, 31));
        achizitii->setFont(font);
        telefonie = new QLabel(Bugetare);
        telefonie->setObjectName(QStringLiteral("telefonie"));
        telefonie->setGeometry(QRect(110, 280, 171, 31));
        telefonie->setFont(font);
        alte2 = new QLabel(Bugetare);
        alte2->setObjectName(QStringLiteral("alte2"));
        alte2->setGeometry(QRect(110, 310, 171, 31));
        alte2->setFont(font);
        infrastructura = new QLabel(Bugetare);
        infrastructura->setObjectName(QStringLiteral("infrastructura"));
        infrastructura->setGeometry(QRect(10, 340, 181, 31));
        infrastructura->setFont(font);
        masini = new QLabel(Bugetare);
        masini->setObjectName(QStringLiteral("masini"));
        masini->setGeometry(QRect(100, 370, 241, 31));
        masini->setFont(font);
        chirie = new QLabel(Bugetare);
        chirie->setObjectName(QStringLiteral("chirie"));
        chirie->setGeometry(QRect(100, 400, 161, 31));
        chirie->setFont(font);
        alte3 = new QLabel(Bugetare);
        alte3->setObjectName(QStringLiteral("alte3"));
        alte3->setGeometry(QRect(100, 430, 171, 31));
        alte3->setFont(font);
        investitii = new QLabel(Bugetare);
        investitii->setObjectName(QStringLiteral("investitii"));
        investitii->setGeometry(QRect(20, 460, 171, 31));
        investitii->setFont(font);
        cuantum = new QLabel(Bugetare);
        cuantum->setObjectName(QStringLiteral("cuantum"));
        cuantum->setGeometry(QRect(100, 480, 171, 31));
        cuantum->setFont(font);
        cifraafaceriEdit = new QLineEdit(Bugetare);
        cifraafaceriEdit->setObjectName(QStringLiteral("cifraafaceriEdit"));
        cifraafaceriEdit->setGeometry(QRect(380, 50, 113, 22));
        costcumparareEdit = new QLineEdit(Bugetare);
        costcumparareEdit->setObjectName(QStringLiteral("costcumparareEdit"));
        costcumparareEdit->setGeometry(QRect(380, 70, 113, 22));
        salariiprimeEdit = new QLineEdit(Bugetare);
        salariiprimeEdit->setObjectName(QStringLiteral("salariiprimeEdit"));
        salariiprimeEdit->setGeometry(QRect(380, 140, 113, 22));
        alte1Edit = new QLineEdit(Bugetare);
        alte1Edit->setObjectName(QStringLiteral("alte1Edit"));
        alte1Edit->setGeometry(QRect(380, 180, 113, 22));
        formariEdit = new QLineEdit(Bugetare);
        formariEdit->setObjectName(QStringLiteral("formariEdit"));
        formariEdit->setGeometry(QRect(380, 160, 113, 22));
        telefonieEdit = new QLineEdit(Bugetare);
        telefonieEdit->setObjectName(QStringLiteral("telefonieEdit"));
        telefonieEdit->setGeometry(QRect(380, 280, 113, 22));
        achizitiiEdit = new QLineEdit(Bugetare);
        achizitiiEdit->setObjectName(QStringLiteral("achizitiiEdit"));
        achizitiiEdit->setGeometry(QRect(380, 260, 113, 22));
        alte2Edit = new QLineEdit(Bugetare);
        alte2Edit->setObjectName(QStringLiteral("alte2Edit"));
        alte2Edit->setGeometry(QRect(380, 300, 113, 22));
        chirieEdit = new QLineEdit(Bugetare);
        chirieEdit->setObjectName(QStringLiteral("chirieEdit"));
        chirieEdit->setGeometry(QRect(380, 400, 113, 22));
        masiniEdit = new QLineEdit(Bugetare);
        masiniEdit->setObjectName(QStringLiteral("masiniEdit"));
        masiniEdit->setGeometry(QRect(380, 380, 113, 22));
        alte3Edit = new QLineEdit(Bugetare);
        alte3Edit->setObjectName(QStringLiteral("alte3Edit"));
        alte3Edit->setGeometry(QRect(380, 420, 113, 22));
        cuantumEdit = new QLineEdit(Bugetare);
        cuantumEdit->setObjectName(QStringLiteral("cuantumEdit"));
        cuantumEdit->setGeometry(QRect(380, 480, 113, 22));
        salveaza = new QPushButton(Bugetare);
        salveaza->setObjectName(QStringLiteral("salveaza"));
        salveaza->setGeometry(QRect(590, 410, 190, 40));
        salveaza->setFont(font);
        luna = new QLabel(Bugetare);
        luna->setObjectName(QStringLiteral("luna"));
        luna->setGeometry(QRect(570, 50, 171, 31));
        luna->setFont(font);
        luniBox = new QComboBox(Bugetare);
        luniBox->setObjectName(QStringLiteral("luniBox"));
        luniBox->setGeometry(QRect(570, 80, 171, 31));
        QFont font1;
        font1.setPointSize(9);
        luniBox->setFont(font1);
        an = new QLabel(Bugetare);
        an->setObjectName(QStringLiteral("an"));
        an->setGeometry(QRect(570, 130, 171, 31));
        an->setFont(font);
        anEdit = new QLineEdit(Bugetare);
        anEdit->setObjectName(QStringLiteral("anEdit"));
        anEdit->setGeometry(QRect(570, 160, 113, 22));
        anuleaza = new QPushButton(Bugetare);
        anuleaza->setObjectName(QStringLiteral("anuleaza"));
        anuleaza->setGeometry(QRect(590, 450, 190, 40));
        anuleaza->setFont(font);

        retranslateUi(Bugetare);

        QMetaObject::connectSlotsByName(Bugetare);
    } // setupUi

    void retranslateUi(QDialog *Bugetare)
    {
        Bugetare->setWindowTitle(QApplication::translate("Bugetare", "Dialog", 0));
        modificare->setText(QApplication::translate("Bugetare", "Datele despre buget se pot modifica direct in tabela de mai sus", 0));
        addbuget->setText(QApplication::translate("Bugetare", "Adauga buget lunar", 0));
        addproiect->setText(QApplication::translate("Bugetare", "Adauga proiect", 0));
        iesire->setText(QApplication::translate("Bugetare", "Iesire", 0));
        l->setText(QApplication::translate("Bugetare", "Introduceti date necesare calcularii bugetului.", 0));
        financiar->setText(QApplication::translate("Bugetare", "Financiar:", 0));
        cifraafaceri->setText(QApplication::translate("Bugetare", "Cifra de afaceri", 0));
        costcumparare->setText(QApplication::translate("Bugetare", "Costul de cumparare", 0));
        resurseumane->setText(QApplication::translate("Bugetare", "Resurse umane:", 0));
        salariiprime->setText(QApplication::translate("Bugetare", "Costuri salarii si prime", 0));
        formari->setText(QApplication::translate("Bugetare", "Costuri formari personal", 0));
        alte1->setText(QApplication::translate("Bugetare", "Alte costuri", 0));
        tehnologia->setText(QApplication::translate("Bugetare", "Tehnologia informatiei:", 0));
        achizitii->setText(QApplication::translate("Bugetare", "Costuri achizitii", 0));
        telefonie->setText(QApplication::translate("Bugetare", "Costuri telefonice", 0));
        alte2->setText(QApplication::translate("Bugetare", "Alte costuri", 0));
        infrastructura->setText(QApplication::translate("Bugetare", "Infrastructura:", 0));
        masini->setText(QApplication::translate("Bugetare", "Costuri cu masinile de companie", 0));
        chirie->setText(QApplication::translate("Bugetare", "Costuri cu chiriile", 0));
        alte3->setText(QApplication::translate("Bugetare", "Alte costuri", 0));
        investitii->setText(QApplication::translate("Bugetare", "Investitii", 0));
        cuantum->setText(QApplication::translate("Bugetare", "Cuantumul investitiilor", 0));
        salveaza->setText(QApplication::translate("Bugetare", "Salveaza", 0));
        luna->setText(QApplication::translate("Bugetare", "Luna corespunzatoare:", 0));
        luniBox->clear();
        luniBox->insertItems(0, QStringList()
         << QApplication::translate("Bugetare", "Ianuarie", 0)
         << QApplication::translate("Bugetare", "Februarie", 0)
         << QApplication::translate("Bugetare", "Martie", 0)
         << QApplication::translate("Bugetare", "Aprilie", 0)
         << QApplication::translate("Bugetare", "Mai", 0)
         << QApplication::translate("Bugetare", "Iunie", 0)
         << QApplication::translate("Bugetare", "Iulie", 0)
         << QApplication::translate("Bugetare", "August", 0)
         << QApplication::translate("Bugetare", "Septembrie", 0)
         << QApplication::translate("Bugetare", "Octombrie", 0)
         << QApplication::translate("Bugetare", "Noiembrie", 0)
         << QApplication::translate("Bugetare", "Decembrie", 0)
        );
        an->setText(QApplication::translate("Bugetare", "Anul corespunzator:", 0));
        anuleaza->setText(QApplication::translate("Bugetare", "Anuleaza", 0));
    } // retranslateUi

};

namespace Ui {
    class Bugetare: public Ui_Bugetare {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUGETARE_H
