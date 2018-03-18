#include "showagentii.h"
#include "ui_showagentii.h"

#include <QtSql>

ShowAgentii::ShowAgentii(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowAgentii)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QODBC3");
    db.setHostName("ANDREI_PC");
    db.setDatabaseName("DSN_POOproject");
    db.open();

    QSqlQuery *qry = new QSqlQuery;
    qry->prepare("SELECT * FROM [dbo].[Agency] join Company on [Agency].CompanyId = [Company].Id");
    if(qry->exec()){
        model = new QSqlTableModel();
        model->setQuery(*qry);
        ui->tableView->setModel(model);

        ui->tableView->setModel(model);
    }
}

ShowAgentii::~ShowAgentii()
{
    delete ui;
}
