/********************************************************************************
** Form generated from reading UI file 'cotidiat.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COTIDIAT_H
#define UI_COTIDIAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Cotidiat
{
public:
    QPushButton *salveaza;
    QPushButton *salveaza_2;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QCalendarWidget *calendarWidget;
    QLabel *label_3;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Cotidiat)
    {
        if (Cotidiat->objectName().isEmpty())
            Cotidiat->setObjectName(QStringLiteral("Cotidiat"));
        Cotidiat->resize(800, 600);
        salveaza = new QPushButton(Cotidiat);
        salveaza->setObjectName(QStringLiteral("salveaza"));
        salveaza->setGeometry(QRect(600, 500, 190, 40));
        QFont font;
        font.setPointSize(10);
        salveaza->setFont(font);
        salveaza_2 = new QPushButton(Cotidiat);
        salveaza_2->setObjectName(QStringLiteral("salveaza_2"));
        salveaza_2->setGeometry(QRect(600, 540, 190, 40));
        salveaza_2->setFont(font);
        label = new QLabel(Cotidiat);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 461, 31));
        label->setFont(font);
        comboBox = new QComboBox(Cotidiat);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(20, 50, 361, 31));
        comboBox->setFont(font);
        label_2 = new QLabel(Cotidiat);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 100, 461, 31));
        label_2->setFont(font);
        calendarWidget = new QCalendarWidget(Cotidiat);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(30, 140, 368, 236));
        label_3 = new QLabel(Cotidiat);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 390, 461, 31));
        label_3->setFont(font);
        lineEdit = new QLineEdit(Cotidiat);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 430, 721, 31));
        lineEdit->setFont(font);

        retranslateUi(Cotidiat);

        QMetaObject::connectSlotsByName(Cotidiat);
    } // setupUi

    void retranslateUi(QDialog *Cotidiat)
    {
        Cotidiat->setWindowTitle(QApplication::translate("Cotidiat", "Dialog", 0));
        salveaza->setText(QApplication::translate("Cotidiat", "Salveaza sedinta", 0));
        salveaza_2->setText(QApplication::translate("Cotidiat", "Anuleaza", 0));
        label->setText(QApplication::translate("Cotidiat", "Alegeti procesul pentru care se doreste planificarea sedintei:", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Cotidiat", "Procesul de transport rutier", 0)
         << QApplication::translate("Cotidiat", "Procesul de transport aerian", 0)
         << QApplication::translate("Cotidiat", "Procesul de transport maritim", 0)
         << QApplication::translate("Cotidiat", "Procesul de transport feroviar", 0)
         << QApplication::translate("Cotidiat", "Procesul de transport special", 0)
         << QApplication::translate("Cotidiat", "Procesul de de depozitare", 0)
        );
        label_2->setText(QApplication::translate("Cotidiat", "Selectati din calendar data dorita pentru planificarea sedintei:", 0));
        label_3->setText(QApplication::translate("Cotidiat", "Stabiliti prioritatile pentru sedinta:", 0));
    } // retranslateUi

};

namespace Ui {
    class Cotidiat: public Ui_Cotidiat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COTIDIAT_H
