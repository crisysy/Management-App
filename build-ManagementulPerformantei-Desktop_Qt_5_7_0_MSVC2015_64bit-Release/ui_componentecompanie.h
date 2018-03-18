/********************************************************************************
** Form generated from reading UI file 'componentecompanie.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPONENTECOMPANIE_H
#define UI_COMPONENTECOMPANIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ComponenteCompanie
{
public:
    QWidget *centralwidget;
    QPushButton *inapoi;
    QPushButton *showagentii;
    QPushButton *addagentie;
    QPushButton *modifica;

    void setupUi(QMainWindow *ComponenteCompanie)
    {
        if (ComponenteCompanie->objectName().isEmpty())
            ComponenteCompanie->setObjectName(QStringLiteral("ComponenteCompanie"));
        ComponenteCompanie->resize(1024, 768);
        centralwidget = new QWidget(ComponenteCompanie);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        inapoi = new QPushButton(centralwidget);
        inapoi->setObjectName(QStringLiteral("inapoi"));
        inapoi->setGeometry(QRect(830, 720, 190, 40));
        QFont font;
        font.setPointSize(10);
        inapoi->setFont(font);
        showagentii = new QPushButton(centralwidget);
        showagentii->setObjectName(QStringLiteral("showagentii"));
        showagentii->setGeometry(QRect(90, 20, 830, 70));
        QFont font1;
        font1.setPointSize(15);
        showagentii->setFont(font1);
        addagentie = new QPushButton(centralwidget);
        addagentie->setObjectName(QStringLiteral("addagentie"));
        addagentie->setGeometry(QRect(90, 90, 830, 70));
        addagentie->setFont(font1);
        modifica = new QPushButton(centralwidget);
        modifica->setObjectName(QStringLiteral("modifica"));
        modifica->setGeometry(QRect(90, 160, 830, 70));
        modifica->setFont(font1);
        ComponenteCompanie->setCentralWidget(centralwidget);

        retranslateUi(ComponenteCompanie);

        QMetaObject::connectSlotsByName(ComponenteCompanie);
    } // setupUi

    void retranslateUi(QMainWindow *ComponenteCompanie)
    {
        ComponenteCompanie->setWindowTitle(QApplication::translate("ComponenteCompanie", "MainWindow", 0));
        inapoi->setText(QApplication::translate("ComponenteCompanie", "Inapoi", 0));
        showagentii->setText(QApplication::translate("ComponenteCompanie", "Vizualizeaza agentiile companiei", 0));
        addagentie->setText(QApplication::translate("ComponenteCompanie", "Adauga o noua agentie", 0));
        modifica->setText(QApplication::translate("ComponenteCompanie", "Modifica datele companiei", 0));
    } // retranslateUi

};

namespace Ui {
    class ComponenteCompanie: public Ui_ComponenteCompanie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPONENTECOMPANIE_H
