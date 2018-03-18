/********************************************************************************
** Form generated from reading UI file 'fereastraprincipala.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEREASTRAPRINCIPALA_H
#define UI_FEREASTRAPRINCIPALA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FereastraPrincipala
{
public:
    QWidget *centralwidget;
    QPushButton *gestionare;
    QPushButton *evaluare;
    QPushButton *schimbauser;
    QPushButton *iesire;
    QPushButton *componente;
    QPushButton *strategie;
    QPushButton *obiective;
    QPushButton *management;
    QPushButton *indicatori;
    QPushButton *imbunatatire;
    QPushButton *raportare;
    QPushButton *setari;
    QPushButton *inapoi2;
    QPushButton *inapoi1;

    void setupUi(QMainWindow *FereastraPrincipala)
    {
        if (FereastraPrincipala->objectName().isEmpty())
            FereastraPrincipala->setObjectName(QStringLiteral("FereastraPrincipala"));
        FereastraPrincipala->resize(1024, 768);
        centralwidget = new QWidget(FereastraPrincipala);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gestionare = new QPushButton(centralwidget);
        gestionare->setObjectName(QStringLiteral("gestionare"));
        gestionare->setGeometry(QRect(110, 290, 830, 70));
        QFont font;
        font.setPointSize(15);
        gestionare->setFont(font);
        evaluare = new QPushButton(centralwidget);
        evaluare->setObjectName(QStringLiteral("evaluare"));
        evaluare->setGeometry(QRect(110, 360, 830, 70));
        evaluare->setFont(font);
        schimbauser = new QPushButton(centralwidget);
        schimbauser->setObjectName(QStringLiteral("schimbauser"));
        schimbauser->setGeometry(QRect(830, 50, 190, 40));
        QFont font1;
        font1.setPointSize(10);
        schimbauser->setFont(font1);
        iesire = new QPushButton(centralwidget);
        iesire->setObjectName(QStringLiteral("iesire"));
        iesire->setGeometry(QRect(830, 90, 190, 40));
        iesire->setFont(font1);
        componente = new QPushButton(centralwidget);
        componente->setObjectName(QStringLiteral("componente"));
        componente->setGeometry(QRect(110, 150, 830, 70));
        componente->setFont(font);
        strategie = new QPushButton(centralwidget);
        strategie->setObjectName(QStringLiteral("strategie"));
        strategie->setGeometry(QRect(110, 220, 830, 70));
        strategie->setFont(font);
        obiective = new QPushButton(centralwidget);
        obiective->setObjectName(QStringLiteral("obiective"));
        obiective->setGeometry(QRect(110, 290, 830, 70));
        obiective->setFont(font);
        management = new QPushButton(centralwidget);
        management->setObjectName(QStringLiteral("management"));
        management->setGeometry(QRect(110, 360, 830, 70));
        management->setFont(font);
        indicatori = new QPushButton(centralwidget);
        indicatori->setObjectName(QStringLiteral("indicatori"));
        indicatori->setGeometry(QRect(110, 150, 830, 70));
        indicatori->setFont(font);
        imbunatatire = new QPushButton(centralwidget);
        imbunatatire->setObjectName(QStringLiteral("imbunatatire"));
        imbunatatire->setGeometry(QRect(110, 220, 830, 70));
        imbunatatire->setFont(font);
        raportare = new QPushButton(centralwidget);
        raportare->setObjectName(QStringLiteral("raportare"));
        raportare->setGeometry(QRect(110, 290, 830, 70));
        raportare->setFont(font);
        setari = new QPushButton(centralwidget);
        setari->setObjectName(QStringLiteral("setari"));
        setari->setGeometry(QRect(830, 10, 190, 40));
        setari->setFont(font1);
        inapoi2 = new QPushButton(centralwidget);
        inapoi2->setObjectName(QStringLiteral("inapoi2"));
        inapoi2->setGeometry(QRect(830, 710, 190, 40));
        inapoi2->setFont(font1);
        inapoi1 = new QPushButton(centralwidget);
        inapoi1->setObjectName(QStringLiteral("inapoi1"));
        inapoi1->setGeometry(QRect(830, 710, 190, 40));
        inapoi1->setFont(font1);
        FereastraPrincipala->setCentralWidget(centralwidget);

        retranslateUi(FereastraPrincipala);

        QMetaObject::connectSlotsByName(FereastraPrincipala);
    } // setupUi

    void retranslateUi(QMainWindow *FereastraPrincipala)
    {
        FereastraPrincipala->setWindowTitle(QApplication::translate("FereastraPrincipala", "MainWindow", 0));
        gestionare->setText(QApplication::translate("FereastraPrincipala", "Gestionarea cotidiana a performantei", 0));
        evaluare->setText(QApplication::translate("FereastraPrincipala", "Evaluarea sistemului", 0));
        schimbauser->setText(QApplication::translate("FereastraPrincipala", "Schimba utilizatorul", 0));
        iesire->setText(QApplication::translate("FereastraPrincipala", "Iesire", 0));
        componente->setText(QApplication::translate("FereastraPrincipala", "Gestionarea componente companie", 0));
        strategie->setText(QApplication::translate("FereastraPrincipala", "Strategia companiei", 0));
        obiective->setText(QApplication::translate("FereastraPrincipala", "Obiective si managementul proceselor", 0));
        management->setText(QApplication::translate("FereastraPrincipala", "Managementul riscului, managementul cunoasterii si inovatiei", 0));
        indicatori->setText(QApplication::translate("FereastraPrincipala", "Indicatori de performanta", 0));
        imbunatatire->setText(QApplication::translate("FereastraPrincipala", "Imbunatatirea performantei", 0));
        raportare->setText(QApplication::translate("FereastraPrincipala", "Raportare", 0));
        setari->setText(QApplication::translate("FereastraPrincipala", "Setari", 0));
        inapoi2->setText(QApplication::translate("FereastraPrincipala", "Inapoi", 0));
        inapoi1->setText(QApplication::translate("FereastraPrincipala", "Inapoi", 0));
    } // retranslateUi

};

namespace Ui {
    class FereastraPrincipala: public Ui_FereastraPrincipala {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEREASTRAPRINCIPALA_H
