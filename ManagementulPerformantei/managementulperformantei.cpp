#include "managementulperformantei.h"
#include "ui_managementulperformantei.h"

#include "newuser.h"
#include "fereastraprincipala.h"

#include <QtSql>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>
#include <globalvars.h>


ManagementulPerformantei::ManagementulPerformantei(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ManagementulPerformantei)
{
    ui->setupUi(this);

    connect(ui->exitButton,SIGNAL(clicked(bool)),SLOT(close()));

    db = QSqlDatabase::addDatabase("QODBC3");
    db.setHostName("ANDREI_PC");
    db.setDatabaseName("DSN_POOproject");
    db.open();

    ui->logButton->hide();
    ui->inapoiButton->hide();
    ui->newButton->hide();
    ui->passEdit->hide();
    ui->userEdit->hide();
    ui->passlabel->hide();
    ui->userlabel->hide();
    ui->about1->hide();
    ui->about2->hide();
    ui->about3->hide();
    ui->about4->hide();
    ui->about5->hide();
    ui->about6->hide();
    ui->about7->hide();
    ui->about8->hide();
}

ManagementulPerformantei::~ManagementulPerformantei()
{
    delete ui;
}

void ManagementulPerformantei::on_startButton_clicked()
{
    ui->startButton->hide();
    ui->despreButton->hide();
    ui->exitButton->hide();

    ui->about1->hide();
    ui->about2->hide();
    ui->about3->hide();
    ui->about4->hide();
    ui->about5->hide();
    ui->about6->hide();
    ui->about7->hide();
    ui->about8->hide();

    ui->logButton->show();
    ui->inapoiButton->show();
    ui->newButton->show();
    ui->passEdit->show();
    ui->userEdit->show();
    ui->passlabel->show();
    ui->userlabel->show();
}

void ManagementulPerformantei::on_despreButton_clicked()
{
    ui->about1->show();
    ui->about2->show();
    ui->about3->show();
    ui->about4->show();
    ui->about5->show();
    ui->about6->show();
    ui->about7->show();
    ui->about8->show();
}

void ManagementulPerformantei::on_inapoiButton_clicked()
{
    ui->startButton->show();
    ui->despreButton->show();
    ui->exitButton->show();

    ui->logButton->hide();
    ui->inapoiButton->hide();
    ui->newButton->hide();
    ui->passEdit->hide();
    ui->userEdit->hide();
    ui->passlabel->hide();
    ui->userlabel->hide();
}

void ManagementulPerformantei::on_logButton_clicked()
{
    QString user,pass;
    user = ui->userEdit->text();
    pass = ui->passEdit->text();
    int count = 0;

    QSqlQuery qry;
    qry.prepare("USE [PerformanceManagement] SELECT * FROM [dbo].[Users] WHERE [UserName]=:userid and [Password]=:passid");
    qry.bindValue(":userid",user);
    qry.bindValue(":passid",pass);
    qry.exec();
    if(user == NULL || pass == NULL){
        QMessageBox::warning(this,"Eroare","Unul dintre campuri este gol");
    }
    else{
        while(qry.next()){
            count++;
            //ia-l aici
            GlobalVars::CurrentUserId = qry.value(0).toInt();
            //QMessageBox::warning(this,"Eroare",qry.value(0).toString());
        }

        if(count >= 1){
            FereastraPrincipala *ui2 = new FereastraPrincipala;
            ui2->show();
            this->hide();




        }
        else{
            QMessageBox::warning(this,"Eroare","Username sau parola incorecta");
        }
    }

}

void ManagementulPerformantei::on_newButton_clicked()
{
    NewUser *ui2 = new NewUser;
    ui2->show();
}
