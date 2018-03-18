/********************************************************************************
** Form generated from reading UI file 'showagentii.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWAGENTII_H
#define UI_SHOWAGENTII_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ShowAgentii
{
public:
    QTableView *tableView;

    void setupUi(QDialog *ShowAgentii)
    {
        if (ShowAgentii->objectName().isEmpty())
            ShowAgentii->setObjectName(QStringLiteral("ShowAgentii"));
        ShowAgentii->resize(800, 600);
        tableView = new QTableView(ShowAgentii);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 1, 800, 600));

        retranslateUi(ShowAgentii);

        QMetaObject::connectSlotsByName(ShowAgentii);
    } // setupUi

    void retranslateUi(QDialog *ShowAgentii)
    {
        ShowAgentii->setWindowTitle(QApplication::translate("ShowAgentii", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class ShowAgentii: public Ui_ShowAgentii {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWAGENTII_H
