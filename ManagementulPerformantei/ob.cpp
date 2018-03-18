#include "ob.h"
#include "ui_ob.h"

#include <QRegExp>
#include <QMessageBox>
#include <QtSql>

Ob::Ob(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ob)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QODBC3");
    db.setHostName("ANDREI_PC");
    db.setDatabaseName("DSN_POOproject");
    db.open();

    //Ascundere
    ui->newob->hide();
    ui->def->hide();
    ui->defEdit->hide();
    ui->tip->hide();
    ui->tipBox->hide();
    ui->indicator->hide();
    ui->indicatorEdit->hide();
    ui->tinta->hide();
    ui->tintaEdit->hide();
    ui->aferent->hide();
    ui->aferentBox->hide();
    ui->aferentBox2->hide();
    ui->salveaza->hide();
}

Ob::~Ob()
{
    delete ui;
}

void Ob::on_addobstr_clicked()
{
    //Afisare
    ui->newob->show();
    ui->def->show();
    ui->defEdit->show();
    ui->indicator->show();
    ui->indicatorEdit->show();
    ui->tinta->show();
    ui->tintaEdit->show();
    ui->salveaza->show();

    //Ascundere
    ui->tableView->hide();
    ui->showobstr->hide();
    ui->showobproces->hide();
    ui->showobagentie->hide();
    ui->addobstr->hide();
    ui->addobproces->hide();
    ui->addobagentie->hide();
    ui->iesire->hide();

    //Clears
    ui->defEdit->clear();
    ui->indicatorEdit->clear();
    ui->tintaEdit->clear();

}

void Ob::on_addobproces_clicked()
{
    //Afisare
    ui->newob->show();
    ui->def->show();
    ui->defEdit->show();
    ui->tip->show();
    ui->tipBox->show();
    ui->indicator->show();
    ui->indicatorEdit->show();
    ui->tinta->show();
    ui->tintaEdit->show();
    ui->aferent->show();
    ui->aferentBox->show();
    ui->salveaza->show();

    //Ascundere
    ui->tableView->hide();
    ui->showobstr->hide();
    ui->showobproces->hide();
    ui->showobagentie->hide();
    ui->addobstr->hide();
    ui->addobproces->hide();
    ui->addobagentie->hide();
    ui->iesire->hide();

    //Clears
    ui->defEdit->clear();
    ui->indicatorEdit->clear();
    ui->tintaEdit->clear();

    ui->tip->setText("Obiectivul strategic asociat.");
    //Atribuire tipBox valori din tabela pentru obiective strategice
    ui->aferent->setText("Selectati tipul de proces aferent.");
    ui->aferentBox->insertItem(0,"Proces de transport rutier");
    ui->aferentBox->insertItem(1,"Proces de transport aerian");
    ui->aferentBox->insertItem(2,"Proces de transport maritim");
    ui->aferentBox->insertItem(3,"Proces de transport feroviar");
    ui->aferentBox->insertItem(4,"Proces de transport special");
    ui->aferentBox->insertItem(5,"Proces de depozitare");

}

void Ob::on_addobagentie_clicked()
{
    //Afisare
    ui->newob->show();
    ui->def->show();
    ui->defEdit->show();
    ui->tip->show();
    ui->tipBox->show();
    ui->indicator->show();
    ui->indicatorEdit->show();
    ui->tinta->show();
    ui->tintaEdit->show();
    ui->aferent->show();
    ui->aferentBox2->show();
    ui->salveaza->show();

    //Ascundere
    ui->tableView->hide();
    ui->showobstr->hide();
    ui->showobproces->hide();
    ui->showobagentie->hide();
    ui->addobstr->hide();
    ui->addobproces->hide();
    ui->addobagentie->hide();
    ui->iesire->hide();

    //Clears
    ui->defEdit->clear();
    ui->indicatorEdit->clear();
    ui->tintaEdit->clear();

    ui->tip->setText("Obiectivul de proces asociat.");
    //Atribuire tipBox valori din tabela pentru obiective de proces
    ui->aferent->setText("Selectati agentia aferenta.");
    //Atribuire aferentBox2 valori
}

void Ob::on_iesire_clicked()
{
    this->hide();
}

void Ob::on_salveaza_clicked()
{
    //Verificare daca campurile sunt goale
    bool flag = true;
    QRegExp rx("^\s*$");
    if(flag == true){
        if(rx.exactMatch(ui->defEdit->text())){
            flag = false;
        }
    }
    if(flag == true){
        if(rx.exactMatch(ui->indicatorEdit->text())){
            flag = false;
        }
    }
    if(flag == true){
        if(rx.exactMatch(ui->tintaEdit->text())){
            flag = false;
        }
    }

    if(flag == true){
        //Actiuni de memorare in baza de date
        QString def,indicator,tinta;
        def = ui->defEdit->text();
        indicator = ui->indicatorEdit->text();
        tinta = ui->tintaEdit->text();
        int k = 1;
        bool l1 = true,l2 = false;

        QString execute = QString("USE [PerformanceManagement] INSERT INTO [dbo].[Objectives] ([ObjectiveName],[EmployeeId],[AgencyId],[Indicator],[Target],[IsStrategic],[IsOperational]) VALUES (%1,%2,%3,%4,%5,%6,%7)").arg(ui->defEdit->text()).arg(k).arg(k).arg(ui->indicatorEdit->text()).arg(ui->tintaEdit->text()).arg(l1).arg(l2);

        QSqlQuery *EmployeeQuery = new QSqlQuery;
        if(EmployeeQuery->exec(execute)){

        }
        else{
            qDebug()<<EmployeeQuery->lastError().text();
        }

        //Afisare
        ui->tableView->show();
        ui->showobstr->show();
        ui->showobproces->show();
        ui->showobagentie->show();
        ui->addobstr->show();
        ui->addobproces->show();
        ui->addobagentie->show();
        ui->iesire->show();

        //Ascundere
        ui->newob->hide();
        ui->def->hide();
        ui->defEdit->hide();
        ui->tip->hide();
        ui->tipBox->hide();
        ui->indicator->hide();
        ui->indicatorEdit->hide();
        ui->tinta->hide();
        ui->tintaEdit->hide();
        ui->aferent->hide();
        ui->aferentBox->hide();
        ui->aferentBox2->hide();
        ui->salveaza->hide();
    }
    else{
        QMessageBox::warning(this,"Eroare","Campurile nu pot fi lasate goale");
    }
}

void Ob::on_anuleaza_clicked()
{
    //Afisare
    ui->tableView->show();
    ui->showobstr->show();
    ui->showobproces->show();
    ui->showobagentie->show();
    ui->addobstr->show();
    ui->addobproces->show();
    ui->addobagentie->show();
    ui->iesire->show();

    //Ascundere
    ui->newob->hide();
    ui->def->hide();
    ui->defEdit->hide();
    ui->tip->hide();
    ui->tipBox->hide();
    ui->indicator->hide();
    ui->indicatorEdit->hide();
    ui->tinta->hide();
    ui->tintaEdit->hide();
    ui->aferent->hide();
    ui->aferentBox->hide();
    ui->aferentBox2->hide();
    ui->salveaza->hide();

}
