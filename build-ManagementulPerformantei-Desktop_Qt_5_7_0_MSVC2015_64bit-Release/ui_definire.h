/********************************************************************************
** Form generated from reading UI file 'definire.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEFINIRE_H
#define UI_DEFINIRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Definire
{
public:
    QLabel *definitedeja;
    QPushButton *inchide;
    QLabel *trebuiedef;
    QLabel *defmisiune;
    QLabel *defviziune;
    QLabel *defvalori;
    QLabel *defstr;
    QLineEdit *misiuneEdit;
    QLineEdit *viziuneEdit;
    QLineEdit *valoriEdit;
    QLineEdit *strEdit;
    QPushButton *salveaza;
    QPushButton *anuleaza;
    QLabel *ghid;
    QLabel *ghid2;
    QLabel *ghid3;
    QTableView *tableView;

    void setupUi(QDialog *Definire)
    {
        if (Definire->objectName().isEmpty())
            Definire->setObjectName(QStringLiteral("Definire"));
        Definire->resize(800, 600);
        definitedeja = new QLabel(Definire);
        definitedeja->setObjectName(QStringLiteral("definitedeja"));
        definitedeja->setGeometry(QRect(20, 20, 761, 31));
        QFont font;
        font.setPointSize(10);
        definitedeja->setFont(font);
        inchide = new QPushButton(Definire);
        inchide->setObjectName(QStringLiteral("inchide"));
        inchide->setGeometry(QRect(600, 550, 190, 40));
        inchide->setFont(font);
        trebuiedef = new QLabel(Definire);
        trebuiedef->setObjectName(QStringLiteral("trebuiedef"));
        trebuiedef->setGeometry(QRect(20, 20, 281, 31));
        trebuiedef->setFont(font);
        defmisiune = new QLabel(Definire);
        defmisiune->setObjectName(QStringLiteral("defmisiune"));
        defmisiune->setGeometry(QRect(10, 60, 141, 31));
        defmisiune->setFont(font);
        defviziune = new QLabel(Definire);
        defviziune->setObjectName(QStringLiteral("defviziune"));
        defviziune->setGeometry(QRect(10, 90, 141, 31));
        defviziune->setFont(font);
        defvalori = new QLabel(Definire);
        defvalori->setObjectName(QStringLiteral("defvalori"));
        defvalori->setGeometry(QRect(10, 120, 141, 31));
        defvalori->setFont(font);
        defstr = new QLabel(Definire);
        defstr->setObjectName(QStringLiteral("defstr"));
        defstr->setGeometry(QRect(10, 150, 361, 31));
        defstr->setFont(font);
        misiuneEdit = new QLineEdit(Definire);
        misiuneEdit->setObjectName(QStringLiteral("misiuneEdit"));
        misiuneEdit->setGeometry(QRect(380, 61, 411, 31));
        misiuneEdit->setFont(font);
        viziuneEdit = new QLineEdit(Definire);
        viziuneEdit->setObjectName(QStringLiteral("viziuneEdit"));
        viziuneEdit->setGeometry(QRect(380, 90, 411, 31));
        viziuneEdit->setFont(font);
        valoriEdit = new QLineEdit(Definire);
        valoriEdit->setObjectName(QStringLiteral("valoriEdit"));
        valoriEdit->setGeometry(QRect(380, 120, 411, 31));
        valoriEdit->setFont(font);
        strEdit = new QLineEdit(Definire);
        strEdit->setObjectName(QStringLiteral("strEdit"));
        strEdit->setGeometry(QRect(380, 150, 411, 31));
        strEdit->setFont(font);
        salveaza = new QPushButton(Definire);
        salveaza->setObjectName(QStringLiteral("salveaza"));
        salveaza->setGeometry(QRect(600, 500, 190, 40));
        salveaza->setFont(font);
        anuleaza = new QPushButton(Definire);
        anuleaza->setObjectName(QStringLiteral("anuleaza"));
        anuleaza->setGeometry(QRect(600, 550, 190, 40));
        anuleaza->setFont(font);
        ghid = new QLabel(Definire);
        ghid->setObjectName(QStringLiteral("ghid"));
        ghid->setGeometry(QRect(10, 240, 361, 31));
        ghid->setFont(font);
        ghid2 = new QLabel(Definire);
        ghid2->setObjectName(QStringLiteral("ghid2"));
        ghid2->setGeometry(QRect(10, 270, 791, 31));
        QFont font1;
        font1.setPointSize(9);
        ghid2->setFont(font1);
        ghid3 = new QLabel(Definire);
        ghid3->setObjectName(QStringLiteral("ghid3"));
        ghid3->setGeometry(QRect(10, 300, 791, 31));
        ghid3->setFont(font1);
        tableView = new QTableView(Definire);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 50, 781, 311));
        tableView->raise();
        definitedeja->raise();
        inchide->raise();
        trebuiedef->raise();
        defmisiune->raise();
        defviziune->raise();
        defvalori->raise();
        defstr->raise();
        misiuneEdit->raise();
        viziuneEdit->raise();
        valoriEdit->raise();
        strEdit->raise();
        salveaza->raise();
        anuleaza->raise();
        ghid->raise();
        ghid2->raise();
        ghid3->raise();

        retranslateUi(Definire);

        QMetaObject::connectSlotsByName(Definire);
    } // setupUi

    void retranslateUi(QDialog *Definire)
    {
        Definire->setWindowTitle(QApplication::translate("Definire", "Dialog", 0));
        definitedeja->setText(QApplication::translate("Definire", "Strategia companiei a fost definita, se pot aduce modificari asupra acesteia in tabelul de mai jos", 0));
        inchide->setText(QApplication::translate("Definire", "Salveaza si inchide", 0));
        trebuiedef->setText(QApplication::translate("Definire", "Strategia companiei trebuie definita ", 0));
        defmisiune->setText(QApplication::translate("Definire", "Definirea misiunii:", 0));
        defviziune->setText(QApplication::translate("Definire", "Definirea viziunii:", 0));
        defvalori->setText(QApplication::translate("Definire", "Definirea valorilor:", 0));
        defstr->setText(QApplication::translate("Definire", "Definirea strategiei pentru o dezvoltare durabila:", 0));
        salveaza->setText(QApplication::translate("Definire", "Salveaza", 0));
        anuleaza->setText(QApplication::translate("Definire", "Anulare", 0));
        ghid->setText(QApplication::translate("Definire", "Ghid pentru completarea campurilor de mai sus:", 0));
        ghid2->setText(QApplication::translate("Definire", ".", 0));
        ghid3->setText(QApplication::translate("Definire", ".", 0));
    } // retranslateUi

};

namespace Ui {
    class Definire: public Ui_Definire {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEFINIRE_H
