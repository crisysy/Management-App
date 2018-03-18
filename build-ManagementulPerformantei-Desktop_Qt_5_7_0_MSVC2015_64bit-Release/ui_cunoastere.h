/********************************************************************************
** Form generated from reading UI file 'cunoastere.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUNOASTERE_H
#define UI_CUNOASTERE_H

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

class Ui_Cunoastere
{
public:
    QPushButton *add;
    QPushButton *iesire;
    QTableView *tableView;
    QLabel *label;
    QLabel *label2;
    QLineEdit *lineEdit;
    QLabel *label3;
    QLineEdit *lineEdit2;
    QPushButton *document;
    QPushButton *salveaza;
    QPushButton *anuleaza;

    void setupUi(QDialog *Cunoastere)
    {
        if (Cunoastere->objectName().isEmpty())
            Cunoastere->setObjectName(QStringLiteral("Cunoastere"));
        Cunoastere->resize(800, 600);
        add = new QPushButton(Cunoastere);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(600, 470, 190, 40));
        iesire = new QPushButton(Cunoastere);
        iesire->setObjectName(QStringLiteral("iesire"));
        iesire->setGeometry(QRect(600, 510, 190, 40));
        tableView = new QTableView(Cunoastere);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 10, 781, 401));
        label = new QLabel(Cunoastere);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 631, 31));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label2 = new QLabel(Cunoastere);
        label2->setObjectName(QStringLiteral("label2"));
        label2->setGeometry(QRect(20, 60, 631, 31));
        label2->setFont(font);
        lineEdit = new QLineEdit(Cunoastere);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 90, 731, 31));
        QFont font1;
        font1.setPointSize(9);
        lineEdit->setFont(font1);
        label3 = new QLabel(Cunoastere);
        label3->setObjectName(QStringLiteral("label3"));
        label3->setGeometry(QRect(20, 130, 631, 31));
        label3->setFont(font);
        lineEdit2 = new QLineEdit(Cunoastere);
        lineEdit2->setObjectName(QStringLiteral("lineEdit2"));
        lineEdit2->setGeometry(QRect(20, 160, 731, 31));
        lineEdit2->setFont(font1);
        document = new QPushButton(Cunoastere);
        document->setObjectName(QStringLiteral("document"));
        document->setGeometry(QRect(20, 220, 190, 40));
        salveaza = new QPushButton(Cunoastere);
        salveaza->setObjectName(QStringLiteral("salveaza"));
        salveaza->setGeometry(QRect(600, 300, 190, 40));
        anuleaza = new QPushButton(Cunoastere);
        anuleaza->setObjectName(QStringLiteral("anuleaza"));
        anuleaza->setGeometry(QRect(600, 340, 190, 40));

        retranslateUi(Cunoastere);

        QMetaObject::connectSlotsByName(Cunoastere);
    } // setupUi

    void retranslateUi(QDialog *Cunoastere)
    {
        Cunoastere->setWindowTitle(QApplication::translate("Cunoastere", "Dialog", 0));
        add->setText(QApplication::translate("Cunoastere", "Adauga buna practica", 0));
        iesire->setText(QApplication::translate("Cunoastere", "Iesire", 0));
        label->setText(QApplication::translate("Cunoastere", "Completati campurile urmatoare pentru a adauga o buna practica pentru companie:", 0));
        label2->setText(QApplication::translate("Cunoastere", "Descriere pe scurt:", 0));
        label3->setText(QApplication::translate("Cunoastere", "Impactul asupra companiei:", 0));
        document->setText(QApplication::translate("Cunoastere", "Alegeti documentul suport", 0));
        salveaza->setText(QApplication::translate("Cunoastere", "Salveaza", 0));
        anuleaza->setText(QApplication::translate("Cunoastere", "Anuleaza", 0));
    } // retranslateUi

};

namespace Ui {
    class Cunoastere: public Ui_Cunoastere {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUNOASTERE_H
