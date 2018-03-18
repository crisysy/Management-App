#ifndef SHOWAGENTII_H
#define SHOWAGENTII_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class ShowAgentii;
}

class ShowAgentii : public QDialog
{
    Q_OBJECT

public:
    explicit ShowAgentii(QWidget *parent = 0);
    ~ShowAgentii();

private:
    Ui::ShowAgentii *ui;
    QSqlDatabase db;
    QSqlQueryModel *model;
};

#endif // SHOWAGENTII_H
