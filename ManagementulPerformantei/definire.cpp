#include "definire.h"
#include "ui_definire.h"

#include <QMessageBox>
#include <QtSql>
#include <QSqlTableModel>
#include <QFile>
#include <QTextStream>

Definire::Definire(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Definire)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QODBC3");
    db.setHostName("ANDREI_PC");
    db.setDatabaseName("DSN_POOproject");
    db.open();

    QFile file("./logs.txt");

    file.open(QFile::WriteOnly | QFile::Append);
    QTextStream out(&file);
    if(file.pos() == 0){

        out <<"It seems it is the first time we meet, glad to meet you!";
        ui->definitedeja->hide();
        ui->tableView->hide();
        ui->inchide->hide();
    }
    else{
        QSqlQuery *qry = new QSqlQuery;
        qry->prepare("SELECT * FROM [dbo].[Strategy]");
        if(qry->exec()){
            model = new QSqlTableModel();
            model->setQuery(*qry);
            ui->tableView->setModel(model);

            ui->tableView->setModel(model);

            ui->trebuiedef->hide();
            ui->defmisiune->hide();
            ui->defviziune->hide();
            ui->defvalori->hide();
            ui->defstr->hide();

            ui->misiuneEdit->hide();
            ui->viziuneEdit->hide();
            ui->valoriEdit->hide();
            ui->strEdit->hide();

            ui->ghid->hide();
            ui->ghid2->hide();
            ui->ghid3->hide();

            ui->salveaza->hide();
            ui->anuleaza->hide();
        }
    }
}

Definire::~Definire()
{
    delete ui;
}

void Definire::on_salveaza_clicked()
{
    QString misiune,viziune,valori,str;
    QSqlQuery *qry = new QSqlQuery;
    misiune = ui->misiuneEdit->text();
    viziune = ui->viziuneEdit->text();
    valori = ui->valoriEdit->text();
    str = ui->strEdit->text();

    qry->prepare("USE [PerformanceManagement] INSERT INTO [dbo].[Strategy] ([Mision],[Vision],[Value],[Strategy]) VALUES (:misiune,:viziune,:valori,:str)");
    qry->bindValue(":misiune",misiune);
    qry->bindValue(":viziune",viziune);
    qry->bindValue(":valori",valori);
    qry->bindValue(":str",str);
    if(qry->exec()){
        //Afisarea elementelor de interfata de interes
        ui->definitedeja->show();
        ui->tableView->show();
        ui->inchide->show();
        //Ascunderea elementelor de interfata ce nu mai sunt de folos
        ui->trebuiedef->hide();
        ui->defmisiune->hide();
        ui->defviziune->hide();
        ui->defvalori->hide();
        ui->defstr->hide();

        ui->misiuneEdit->hide();
        ui->viziuneEdit->hide();
        ui->valoriEdit->hide();
        ui->strEdit->hide();

        ui->ghid->hide();
        ui->ghid2->hide();
        ui->ghid3->hide();

        ui->salveaza->hide();
        ui->anuleaza->hide();

        qry->prepare("SELECT * FROM [dbo].[Strategy]");
        if(qry->exec())
        {}
        else{
            qDebug()<<qry->lastError().text();
        }
        model = new QSqlTableModel();
        model->setQuery(*qry);
        ui->tableView->setModel(model);

        ui->tableView->setModel(model);
    }
}

void Definire::on_anuleaza_clicked()
{
    this->hide();
}

void Definire::on_inchide_clicked()
{
    QMessageBox::information(this,"Succes","Definirea stategiei a fost actualizata cu succes!");
    this->hide();
}

void Definire::on_misiuneEdit_textEdited(const QString &arg1)
{
    ui->ghid2->setText("Prin misiune se intelege scopul curent al companiei si trebuie sa cuprinda urmatoarele:");
    ui->ghid3->setText("Ce face compania, pentru cine face ceea ce face si cum reuseste sa faca acest lucru.");
}

void Definire::on_misiuneEdit_cursorPositionChanged(int arg1, int arg2)
{
    ui->ghid2->setText("Prin misiune se intelege scopul curent al companiei si trebuie sa cuprinda urmatoarele:");
    ui->ghid3->setText("Ce face compania, pentru cine face ceea ce face si cum reuseste sa faca acest lucru.");
}

void Definire::on_viziuneEdit_textEdited(const QString &arg1)
{
    ui->ghid2->setText("Prin viziune se defineste ce anume vrea compania sa realizeze pe viitor.");
    ui->ghid3->setText("Aceasta are drept scop ghidarea companiei pentru atingerea obiectivului propus.");
}

void Definire::on_viziuneEdit_cursorPositionChanged(int arg1, int arg2)
{
    ui->ghid2->setText("Prin viziune se defineste ce anume vrea compania sa realizeze pe viitor.");
    ui->ghid3->setText("Aceasta are drept scop ghidarea companiei pentru atingerea obiectivului propus.");
}

void Definire::on_valoriEdit_textEdited(const QString &arg1)
{
    ui->ghid2->setText("Prin valori se defineste identitatea companiei, sub forma unor principii sau crezuri.");
    ui->ghid3->setText("Acestea au rolul de a sprijinii viziunea companiei, ajutand la indeplinirea acesteia.");
}

void Definire::on_valoriEdit_cursorPositionChanged(int arg1, int arg2)
{
    ui->ghid2->setText("Prin valori se defineste identitatea companiei, sub forma unor principii sau crezuri.");
    ui->ghid3->setText("Acestea au rolul de a sprijinii viziunea companiei, ajutand la indeplinirea acesteia.");
}

void Definire::on_strEdit_textEdited(const QString &arg1)
{
    ui->ghid2->setText("Prin strategia de dezvoltare se defineste modul in care compania doreste sa isi atinga obiectivele.");
    ui->ghid3->setText("Are rolul de a ghida angajatii in scopul dezvoltarii companiei.");
}

void Definire::on_strEdit_cursorPositionChanged(int arg1, int arg2)
{
    ui->ghid2->setText("Prin strategia de dezvoltare se defineste modul in care compania doreste sa isi atinga obiectivele.");
    ui->ghid3->setText("Are rolul de a ghida angajatii in scopul dezvoltarii companiei.");
}
