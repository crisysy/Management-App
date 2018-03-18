/********************************************************************************
** Form generated from reading UI file 'obiective.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBIECTIVE_H
#define UI_OBIECTIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Obiective
{
public:
    QWidget *centralwidget;
    QPushButton *inapoi;
    QPushButton *procese;
    QPushButton *ob;
    QPushButton *cf;
    QPushButton *individ;
    QPushButton *cotidian;

    void setupUi(QMainWindow *Obiective)
    {
        if (Obiective->objectName().isEmpty())
            Obiective->setObjectName(QStringLiteral("Obiective"));
        Obiective->resize(1024, 768);
        centralwidget = new QWidget(Obiective);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        inapoi = new QPushButton(centralwidget);
        inapoi->setObjectName(QStringLiteral("inapoi"));
        inapoi->setGeometry(QRect(820, 720, 190, 40));
        QFont font;
        font.setPointSize(10);
        inapoi->setFont(font);
        procese = new QPushButton(centralwidget);
        procese->setObjectName(QStringLiteral("procese"));
        procese->setGeometry(QRect(100, 30, 830, 70));
        QFont font1;
        font1.setPointSize(15);
        procese->setFont(font1);
        ob = new QPushButton(centralwidget);
        ob->setObjectName(QStringLiteral("ob"));
        ob->setGeometry(QRect(100, 100, 830, 70));
        ob->setFont(font1);
        cf = new QPushButton(centralwidget);
        cf->setObjectName(QStringLiteral("cf"));
        cf->setGeometry(QRect(100, 170, 830, 70));
        cf->setFont(font1);
        individ = new QPushButton(centralwidget);
        individ->setObjectName(QStringLiteral("individ"));
        individ->setGeometry(QRect(100, 240, 830, 70));
        individ->setFont(font1);
        cotidian = new QPushButton(centralwidget);
        cotidian->setObjectName(QStringLiteral("cotidian"));
        cotidian->setGeometry(QRect(100, 310, 830, 70));
        cotidian->setFont(font1);
        Obiective->setCentralWidget(centralwidget);

        retranslateUi(Obiective);

        QMetaObject::connectSlotsByName(Obiective);
    } // setupUi

    void retranslateUi(QMainWindow *Obiective)
    {
        Obiective->setWindowTitle(QApplication::translate("Obiective", "MainWindow", 0));
        inapoi->setText(QApplication::translate("Obiective", "Inapoi", 0));
        procese->setText(QApplication::translate("Obiective", "Procese operationale", 0));
        ob->setText(QApplication::translate("Obiective", "Obiective stategice si obiective operationale", 0));
        cf->setText(QApplication::translate("Obiective", "Procese legate de clienti si furnizori", 0));
        individ->setText(QApplication::translate("Obiective", "Obiective individuale", 0));
        cotidian->setText(QApplication::translate("Obiective", "Managementul cotidian", 0));
    } // retranslateUi

};

namespace Ui {
    class Obiective: public Ui_Obiective {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBIECTIVE_H
