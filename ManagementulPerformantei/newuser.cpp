#include "newuser.h"
#include "ui_newuser.h"

#include <QRegExp>
#include <QMessageBox>
#include <QFileDialog>
#include <QtSql>
#include <QSqlQuery>

NewUser::NewUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewUser)
{
    ui->setupUi(this);

    filePath1 = "Fisierul nu a fost incarcat";
    filePath2 = "Fisierul nu a fost incarcat";

    db = QSqlDatabase::addDatabase("QODBC3");
    db.setHostName("ANDREI_PC");
    db.setDatabaseName("DSN_POOproject");
    db.open();
}

NewUser::~NewUser()
{
    delete ui;
}

bool NewUser::isEmpt(QString ch)
{
    QRegExp rx("^\s*$");
    if(rx.exactMatch(ch)){
        return true;
    }
    else{
        return false;
    }

}

bool NewUser::isGood(QString ch)
{
    QRegExp rx("[a-z A-Z]*");
    if(rx.exactMatch(ch)){
        return true;
    }
    else{
        return false;
    }
}

bool NewUser::isGood2(QString ch)
{
    QRegExp rx("^[a-zA-Z0-9]*$");
    if(rx.exactMatch(ch)){
        return true;
    }
    else{
        return false;
    }
}

void NewUser::on_adIstoric_clicked()
{
    filePath1 = QFileDialog::getOpenFileName(this,tr("Selectati fisierul corespunzator istoricului"),"./",tr("*.pdf"));
    if(filePath1 != NULL){
        ui->istoricPrint->setText("Fisierul cu istoricul companiei a fost incarcat cu succes.");
        QMessageBox::information(this,"Succes","Fisierul a fost adaugat cu succes");
    }
}

void NewUser::on_adFiscal_clicked()
{
    filePath2 = QFileDialog::getOpenFileName(this,tr("Selectati fisierul corespunzator elementelor fiscale"),"./",tr("*.pdf"));
    if(filePath2 != NULL){
        ui->fiscalPrint->setText("Fisierul cu elementele fiscale a fost incarcat cu succes.");
        QMessageBox::information(this,"Succes","Fisierul a fost adaugat cu succes");
    }
}

void NewUser::on_saveButton_clicked()
{
    QString companie,nume,prenume,password,user;
    companie = ui->compEdit->text();
    nume = ui->numeEdit->text();
    prenume = ui->prenEdit->text();
    password = ui->passEdit->text();
    user = nume + "." + prenume;
    ui->label->setText(user);

    bool flag = true,flag2;

    if(flag == true){
        if(isEmpt(companie)){
            flag = false;
            ui->er1->setText("Camp gol nepermis");
        }
        else{
            ui->er1->setText("Sintaxa valida");
        }
        if(isEmpt(nume)){
            flag = false;
            ui->er2->setText("Camp gol nepermis");
        }
        else{
            ui->er2->setText("Sintaxa valida");
        }
        if(isEmpt(prenume)){
            flag = false;
            ui->er3->setText("Camp gol nepermis");
        }
        else{
            ui->er3->setText("Sintaxa valida");
        }
        if(isEmpt(password)){
            flag = false;
            ui->er4->setText("Camp gol nepermis");
        }
        else{
            ui->er4->setText("Sintaxa valida");
        }
    }
    if(flag == true){
        if(!isGood(nume)){
            flag = false;
            ui->er2->setText("Sintaxa nevalita");
        }
        else{
            ui->er2->setText("Sintaxa valida");
        }
        if(!isGood(prenume)){
            flag = false;
            ui->er3->setText("Sintaxa nevalita");
        }
        else{
            ui->er3->setText("Sintaxa valida");
        }
        if(!isGood(companie)){
            flag = false;
            ui->er1->setText("Sintaxa nevalita");
        }
        else{
            ui->er1->setText("Sintaxa valida");
        }
    }
    if(flag == true){
        if(!isGood2(password)){
            flag = false;
            ui->er4->setText("Sintaxa nevalita");
        }
        else{
            ui->er4->setText("Sintaxa valida");
        }
    }

    if(ui->checkBox->isChecked()){
        flag2 = true;
    }
    else{
        flag2 = false;
    }

    if(flag == true){
        if(flag2 == true){
            //Memorarea elementelelor validate in baza de date
            QSqlQuery qry;
            qry.prepare("USE [PerformanceManagement] INSERT INTO [dbo].[Company] ([Name],[ContactName],[ContactSurname],[Password],[History],[Payments]) VALUES (:nume,:numeContact,:prenumeContact,:pass,:linkH,:linkP)");
            qry.bindValue(":nume",companie);
            qry.bindValue(":numeContact",nume);
            qry.bindValue(":prenumeContact",prenume);
            qry.bindValue(":pass",password);
            qry.bindValue(":linkH",filePath1);
            qry.bindValue(":linkP",filePath2);
            if(qry.exec()){
                user = nume + "." + prenume;
                qry.prepare("USE [PerformanceManagement] INSERT INTO [dbo].[Users] ([UserName],[Password],[Email]) VALUES (:username,:password,'-')");
                qry.bindValue(":username",user);
                qry.bindValue(":password",password);
                if(qry.exec()){
                    this->hide();
                }
                else{
                    qDebug()<<"Eroare la bagare user";
                }
            }
            else{
                qDebug()<<"Eroare";
            }
        }
        else{
            QMessageBox::warning(this,"Eroare","Fisierele cerute nu au fost incarcate");
        }
    }
    else{
        QMessageBox::warning(this,"Eroare","Sunt probleme la completarea campurilor");
    }

}

void NewUser::on_cancelButton_clicked()
{
    this->hide();
}
