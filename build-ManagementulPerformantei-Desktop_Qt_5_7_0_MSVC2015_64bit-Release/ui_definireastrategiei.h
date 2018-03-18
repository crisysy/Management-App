/********************************************************************************
** Form generated from reading UI file 'definireastrategiei.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEFINIREASTRATEGIEI_H
#define UI_DEFINIREASTRATEGIEI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DefinireaStrategiei
{
public:
    QWidget *centralwidget;
    QPushButton *definire;
    QPushButton *performanta;
    QPushButton *cultura;
    QPushButton *responsabil;
    QPushButton *bugetare;
    QPushButton *inapoi;

    void setupUi(QMainWindow *DefinireaStrategiei)
    {
        if (DefinireaStrategiei->objectName().isEmpty())
            DefinireaStrategiei->setObjectName(QStringLiteral("DefinireaStrategiei"));
        DefinireaStrategiei->resize(1024, 768);
        centralwidget = new QWidget(DefinireaStrategiei);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        definire = new QPushButton(centralwidget);
        definire->setObjectName(QStringLiteral("definire"));
        definire->setGeometry(QRect(100, 30, 830, 70));
        QFont font;
        font.setPointSize(15);
        definire->setFont(font);
        performanta = new QPushButton(centralwidget);
        performanta->setObjectName(QStringLiteral("performanta"));
        performanta->setGeometry(QRect(100, 100, 830, 70));
        performanta->setFont(font);
        cultura = new QPushButton(centralwidget);
        cultura->setObjectName(QStringLiteral("cultura"));
        cultura->setGeometry(QRect(100, 170, 830, 70));
        cultura->setFont(font);
        responsabil = new QPushButton(centralwidget);
        responsabil->setObjectName(QStringLiteral("responsabil"));
        responsabil->setGeometry(QRect(100, 240, 830, 70));
        responsabil->setFont(font);
        bugetare = new QPushButton(centralwidget);
        bugetare->setObjectName(QStringLiteral("bugetare"));
        bugetare->setGeometry(QRect(100, 310, 830, 70));
        bugetare->setFont(font);
        inapoi = new QPushButton(centralwidget);
        inapoi->setObjectName(QStringLiteral("inapoi"));
        inapoi->setGeometry(QRect(830, 720, 190, 40));
        QFont font1;
        font1.setPointSize(10);
        inapoi->setFont(font1);
        DefinireaStrategiei->setCentralWidget(centralwidget);

        retranslateUi(DefinireaStrategiei);

        QMetaObject::connectSlotsByName(DefinireaStrategiei);
    } // setupUi

    void retranslateUi(QMainWindow *DefinireaStrategiei)
    {
        DefinireaStrategiei->setWindowTitle(QApplication::translate("DefinireaStrategiei", "MainWindow", 0));
        definire->setText(QApplication::translate("DefinireaStrategiei", "Definirea strategiei", 0));
        performanta->setText(QApplication::translate("DefinireaStrategiei", "Sistemul de management al performantei", 0));
        cultura->setText(QApplication::translate("DefinireaStrategiei", "Promovarea culturii performantei prin liderii organizatiei", 0));
        responsabil->setText(QApplication::translate("DefinireaStrategiei", "Responsabili cu managementul performantei", 0));
        bugetare->setText(QApplication::translate("DefinireaStrategiei", "Procesul de bugetare", 0));
        inapoi->setText(QApplication::translate("DefinireaStrategiei", "Inapoi", 0));
    } // retranslateUi

};

namespace Ui {
    class DefinireaStrategiei: public Ui_DefinireaStrategiei {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEFINIREASTRATEGIEI_H
