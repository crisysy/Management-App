/********************************************************************************
** Form generated from reading UI file 'managementulperformantei.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEMENTULPERFORMANTEI_H
#define UI_MANAGEMENTULPERFORMANTEI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManagementulPerformantei
{
public:
    QWidget *centralWidget;
    QPushButton *startButton;
    QPushButton *despreButton;
    QPushButton *exitButton;
    QPushButton *logButton;
    QLineEdit *userEdit;
    QLineEdit *passEdit;
    QLabel *userlabel;
    QLabel *passlabel;
    QLabel *about1;
    QLabel *about2;
    QLabel *about3;
    QLabel *about4;
    QLabel *about5;
    QLabel *about6;
    QLabel *about7;
    QLabel *about8;
    QPushButton *inapoiButton;
    QPushButton *newButton;

    void setupUi(QMainWindow *ManagementulPerformantei)
    {
        if (ManagementulPerformantei->objectName().isEmpty())
            ManagementulPerformantei->setObjectName(QStringLiteral("ManagementulPerformantei"));
        ManagementulPerformantei->resize(1024, 768);
        centralWidget = new QWidget(ManagementulPerformantei);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(100, 150, 300, 60));
        despreButton = new QPushButton(centralWidget);
        despreButton->setObjectName(QStringLiteral("despreButton"));
        despreButton->setGeometry(QRect(100, 230, 300, 60));
        exitButton = new QPushButton(centralWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(100, 310, 300, 60));
        logButton = new QPushButton(centralWidget);
        logButton->setObjectName(QStringLiteral("logButton"));
        logButton->setGeometry(QRect(780, 240, 160, 30));
        userEdit = new QLineEdit(centralWidget);
        userEdit->setObjectName(QStringLiteral("userEdit"));
        userEdit->setGeometry(QRect(760, 150, 200, 30));
        QFont font;
        font.setPointSize(10);
        userEdit->setFont(font);
        passEdit = new QLineEdit(centralWidget);
        passEdit->setObjectName(QStringLiteral("passEdit"));
        passEdit->setGeometry(QRect(760, 190, 200, 30));
        passEdit->setFont(font);
        passEdit->setEchoMode(QLineEdit::Password);
        userlabel = new QLabel(centralWidget);
        userlabel->setObjectName(QStringLiteral("userlabel"));
        userlabel->setGeometry(QRect(560, 150, 200, 30));
        userlabel->setFont(font);
        passlabel = new QLabel(centralWidget);
        passlabel->setObjectName(QStringLiteral("passlabel"));
        passlabel->setGeometry(QRect(560, 190, 200, 30));
        passlabel->setFont(font);
        about1 = new QLabel(centralWidget);
        about1->setObjectName(QStringLiteral("about1"));
        about1->setGeometry(QRect(50, 400, 941, 41));
        QFont font1;
        font1.setPointSize(9);
        about1->setFont(font1);
        about2 = new QLabel(centralWidget);
        about2->setObjectName(QStringLiteral("about2"));
        about2->setGeometry(QRect(50, 440, 941, 41));
        about2->setFont(font1);
        about3 = new QLabel(centralWidget);
        about3->setObjectName(QStringLiteral("about3"));
        about3->setGeometry(QRect(50, 480, 101, 41));
        about3->setFont(font1);
        about4 = new QLabel(centralWidget);
        about4->setObjectName(QStringLiteral("about4"));
        about4->setGeometry(QRect(180, 480, 191, 41));
        about4->setFont(font1);
        about5 = new QLabel(centralWidget);
        about5->setObjectName(QStringLiteral("about5"));
        about5->setGeometry(QRect(180, 520, 191, 41));
        about5->setFont(font1);
        about6 = new QLabel(centralWidget);
        about6->setObjectName(QStringLiteral("about6"));
        about6->setGeometry(QRect(180, 560, 191, 41));
        about6->setFont(font1);
        about7 = new QLabel(centralWidget);
        about7->setObjectName(QStringLiteral("about7"));
        about7->setGeometry(QRect(180, 600, 191, 41));
        about7->setFont(font1);
        about8 = new QLabel(centralWidget);
        about8->setObjectName(QStringLiteral("about8"));
        about8->setGeometry(QRect(180, 640, 191, 41));
        about8->setFont(font1);
        inapoiButton = new QPushButton(centralWidget);
        inapoiButton->setObjectName(QStringLiteral("inapoiButton"));
        inapoiButton->setGeometry(QRect(780, 320, 160, 30));
        newButton = new QPushButton(centralWidget);
        newButton->setObjectName(QStringLiteral("newButton"));
        newButton->setGeometry(QRect(780, 280, 160, 30));
        ManagementulPerformantei->setCentralWidget(centralWidget);

        retranslateUi(ManagementulPerformantei);

        QMetaObject::connectSlotsByName(ManagementulPerformantei);
    } // setupUi

    void retranslateUi(QMainWindow *ManagementulPerformantei)
    {
        ManagementulPerformantei->setWindowTitle(QApplication::translate("ManagementulPerformantei", "ManagementulPerformantei", 0));
        startButton->setText(QApplication::translate("ManagementulPerformantei", "Autentificare", 0));
        despreButton->setText(QApplication::translate("ManagementulPerformantei", "Despre", 0));
        exitButton->setText(QApplication::translate("ManagementulPerformantei", "Iesire", 0));
        logButton->setText(QApplication::translate("ManagementulPerformantei", "Autentificare", 0));
        userlabel->setText(QApplication::translate("ManagementulPerformantei", "Nume utilizator:", 0));
        passlabel->setText(QApplication::translate("ManagementulPerformantei", "Parola:", 0));
        about1->setText(QApplication::translate("ManagementulPerformantei", "Aplicatia are rolul de a gestiona performanta unei companii si implicit a tutror agentiilor acesteia.", 0));
        about2->setText(QApplication::translate("ManagementulPerformantei", "Aceasta are atat rolul de a gestiona performanta cotidiana (obiective,procese etc.), cat si evaluarea companiei prin intermediul unor indicatori.", 0));
        about3->setText(QApplication::translate("ManagementulPerformantei", "Dezvoltatori:", 0));
        about4->setText(QApplication::translate("ManagementulPerformantei", "Oprin Andrei Daniel", 0));
        about5->setText(QApplication::translate("ManagementulPerformantei", "Dragomir Iulian Valentin", 0));
        about6->setText(QApplication::translate("ManagementulPerformantei", "Pavel Cristina ", 0));
        about7->setText(QApplication::translate("ManagementulPerformantei", "Chiriac Ecaterina", 0));
        about8->setText(QApplication::translate("ManagementulPerformantei", "Mihalcea Alexandra", 0));
        inapoiButton->setText(QApplication::translate("ManagementulPerformantei", "Inapoi", 0));
        newButton->setText(QApplication::translate("ManagementulPerformantei", "Inregistreaza companie", 0));
    } // retranslateUi

};

namespace Ui {
    class ManagementulPerformantei: public Ui_ManagementulPerformantei {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEMENTULPERFORMANTEI_H
