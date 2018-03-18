#include "addagentii.h"
#include "ui_addagentii.h"

#include <QMessageBox>
#include <QtSql>

AddAgentii::AddAgentii(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddAgentii)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QODBC3");
    db.setHostName("ANDREI_PC");
    db.setDatabaseName("DSN_POOproject");
    db.open();
}

AddAgentii::~AddAgentii()
{
    delete ui;
}

void AddAgentii::on_salveaza_clicked()
{
    QString nume;
    nume = ui->lineEdit->text();
    QSqlQuery qry;

    qry.prepare("insert into Agency (Name,CompanyId) values (:nume,1)");
    qry.bindValue(":nume",nume);
    if(qry.exec()){
        QMessageBox::warning(this,"Succes","Compania a fost adaugata cu succes");
    }
}

void AddAgentii::on_anuleaza_clicked()
{
    this->hide();
}
