#ifndef ADDAGENTII_H
#define ADDAGENTII_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class AddAgentii;
}

class AddAgentii : public QDialog
{
    Q_OBJECT

public:
    explicit AddAgentii(QWidget *parent = 0);
    ~AddAgentii();

private slots:
    void on_salveaza_clicked();

    void on_anuleaza_clicked();

private:
    Ui::AddAgentii *ui;
    QSqlDatabase db;
};

#endif // ADDAGENTII_H
