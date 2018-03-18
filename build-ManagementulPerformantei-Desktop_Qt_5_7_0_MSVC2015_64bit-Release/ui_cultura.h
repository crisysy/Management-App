/********************************************************************************
** Form generated from reading UI file 'cultura.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CULTURA_H
#define UI_CULTURA_H

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

QT_BEGIN_NAMESPACE

class Ui_Cultura
{
public:
    QLabel *label;
    QLabel *decizie;
    QLabel *l1;
    QLineEdit *lineEdit;
    QLabel *l2;
    QLineEdit *lineEdit2;
    QLabel *decizie2;
    QPushButton *salveaza;
    QPushButton *instintare;
    QPushButton *salveaza2;
    QLabel *i1;
    QLabel *i2;
    QComboBox *comboBox;

    void setupUi(QDialog *Cultura)
    {
        if (Cultura->objectName().isEmpty())
            Cultura->setObjectName(QStringLiteral("Cultura"));
        Cultura->resize(800, 600);
        label = new QLabel(Cultura);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 10, 271, 31));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        decizie = new QLabel(Cultura);
        decizie->setObjectName(QStringLiteral("decizie"));
        decizie->setGeometry(QRect(50, 80, 481, 31));
        decizie->setFont(font);
        l1 = new QLabel(Cultura);
        l1->setObjectName(QStringLiteral("l1"));
        l1->setGeometry(QRect(40, 190, 271, 31));
        l1->setFont(font);
        lineEdit = new QLineEdit(Cultura);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 230, 691, 31));
        lineEdit->setFont(font);
        l2 = new QLabel(Cultura);
        l2->setObjectName(QStringLiteral("l2"));
        l2->setGeometry(QRect(40, 270, 271, 31));
        l2->setFont(font);
        lineEdit2 = new QLineEdit(Cultura);
        lineEdit2->setObjectName(QStringLiteral("lineEdit2"));
        lineEdit2->setGeometry(QRect(40, 300, 691, 31));
        lineEdit2->setFont(font);
        decizie2 = new QLabel(Cultura);
        decizie2->setObjectName(QStringLiteral("decizie2"));
        decizie2->setGeometry(QRect(40, 160, 551, 31));
        decizie2->setFont(font);
        salveaza = new QPushButton(Cultura);
        salveaza->setObjectName(QStringLiteral("salveaza"));
        salveaza->setGeometry(QRect(590, 410, 190, 40));
        salveaza->setFont(font);
        instintare = new QPushButton(Cultura);
        instintare->setObjectName(QStringLiteral("instintare"));
        instintare->setGeometry(QRect(590, 410, 190, 40));
        instintare->setFont(font);
        salveaza2 = new QPushButton(Cultura);
        salveaza2->setObjectName(QStringLiteral("salveaza2"));
        salveaza2->setGeometry(QRect(590, 450, 190, 40));
        salveaza2->setFont(font);
        i1 = new QLabel(Cultura);
        i1->setObjectName(QStringLiteral("i1"));
        i1->setGeometry(QRect(10, 110, 761, 31));
        QFont font1;
        font1.setPointSize(8);
        i1->setFont(font1);
        i2 = new QLabel(Cultura);
        i2->setObjectName(QStringLiteral("i2"));
        i2->setGeometry(QRect(10, 130, 761, 31));
        i2->setFont(font1);
        comboBox = new QComboBox(Cultura);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(370, 10, 281, 31));

        retranslateUi(Cultura);

        QMetaObject::connectSlotsByName(Cultura);
    } // setupUi

    void retranslateUi(QDialog *Cultura)
    {
        Cultura->setWindowTitle(QApplication::translate("Cultura", "Dialog", 0));
        label->setText(QApplication::translate("Cultura", "Se alege din lista urmatoare liderul:", 0));
        decizie->setText(QString());
        l1->setText(QApplication::translate("Cultura", "Prima initiativa:", 0));
        l2->setText(QApplication::translate("Cultura", "A doua initiativa:", 0));
        decizie2->setText(QApplication::translate("Cultura", "Daca doriti modificarea acestora, completati campurile de mai jos.", 0));
        salveaza->setText(QApplication::translate("Cultura", "Salveaza si inchide", 0));
        instintare->setText(QApplication::translate("Cultura", "Instinteaza liderul ", 0));
        salveaza2->setText(QApplication::translate("Cultura", "Salveaza", 0));
        i1->setText(QString());
        i2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Cultura: public Ui_Cultura {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CULTURA_H
