/********************************************************************************
** Form generated from reading UI file 'management.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEMENT_H
#define UI_MANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Management
{
public:
    QWidget *centralwidget;
    QPushButton *inapoi;
    QPushButton *riscuri;
    QPushButton *cunoastere;
    QPushButton *co2;
    QPushButton *inginerie;
    QPushButton *it;

    void setupUi(QMainWindow *Management)
    {
        if (Management->objectName().isEmpty())
            Management->setObjectName(QStringLiteral("Management"));
        Management->resize(1024, 768);
        centralwidget = new QWidget(Management);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        inapoi = new QPushButton(centralwidget);
        inapoi->setObjectName(QStringLiteral("inapoi"));
        inapoi->setGeometry(QRect(830, 720, 190, 40));
        QFont font;
        font.setPointSize(10);
        inapoi->setFont(font);
        riscuri = new QPushButton(centralwidget);
        riscuri->setObjectName(QStringLiteral("riscuri"));
        riscuri->setGeometry(QRect(110, 20, 830, 70));
        QFont font1;
        font1.setPointSize(15);
        riscuri->setFont(font1);
        cunoastere = new QPushButton(centralwidget);
        cunoastere->setObjectName(QStringLiteral("cunoastere"));
        cunoastere->setGeometry(QRect(110, 90, 830, 70));
        cunoastere->setFont(font1);
        co2 = new QPushButton(centralwidget);
        co2->setObjectName(QStringLiteral("co2"));
        co2->setGeometry(QRect(110, 160, 830, 70));
        co2->setFont(font1);
        inginerie = new QPushButton(centralwidget);
        inginerie->setObjectName(QStringLiteral("inginerie"));
        inginerie->setGeometry(QRect(110, 230, 830, 70));
        inginerie->setFont(font1);
        it = new QPushButton(centralwidget);
        it->setObjectName(QStringLiteral("it"));
        it->setGeometry(QRect(110, 300, 830, 70));
        it->setFont(font1);
        Management->setCentralWidget(centralwidget);

        retranslateUi(Management);

        QMetaObject::connectSlotsByName(Management);
    } // setupUi

    void retranslateUi(QMainWindow *Management)
    {
        Management->setWindowTitle(QApplication::translate("Management", "MainWindow", 0));
        inapoi->setText(QApplication::translate("Management", "Inapoi", 0));
        riscuri->setText(QApplication::translate("Management", "Procesul de management al riscurilor", 0));
        cunoastere->setText(QApplication::translate("Management", "Procesul de management al cunoasterii", 0));
        co2->setText(QApplication::translate("Management", "Initiative pentru reducerea CO2", 0));
        inginerie->setText(QApplication::translate("Management", "Departamentul de inginerie si invoatie", 0));
        it->setText(QApplication::translate("Management", "Sistemul IT", 0));
    } // retranslateUi

};

namespace Ui {
    class Management: public Ui_Management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEMENT_H
