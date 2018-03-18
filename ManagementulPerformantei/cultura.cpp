#include "cultura.h"
#include "ui_cultura.h"

#include <QRegExp>
#include <QMessageBox>
#include <QtSql>

Cultura::Cultura(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cultura)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QODBC3");
    db.setHostName("ANDREI_PC");
    db.setDatabaseName("DSN_POOproject");
    db.open();

    QSqlQuery *qry = new QSqlQuery;
    qry->prepare("select LastName,FirstName from Employee");
    qry->exec();
    ui->comboBox->addItem(" ");
    while(qry->next()){
        aux = qry->value("LastName").toString();
        aux2 = qry->value("FirstName").toString();
        ui->comboBox->addItem(aux+aux2);
    }


    ui->l1->hide();
    ui->l2->hide();
    ui->lineEdit->hide();
    ui->lineEdit2->hide();
    ui->instintare->hide();
    ui->salveaza2->hide();
    ui->decizie2->hide();
}

Cultura::~Cultura()
{
    delete ui;
}

void Cultura::on_instintare_clicked()
{
    QString InitiativeQueryString = QString("USE [PerformanceManagement] INSERT INTO [dbo].[Initiatives] (EmployeeId,FirstInitiative) VALUES(%1,%2)").arg(this->SelectedEmployeeID).arg("gogaie");
    QSqlQuery *InitiativeQuery = new QSqlQuery();
    InitiativeQuery->exec(InitiativeQueryString);

    QMessageBox::warning(this,"Instintare","Liderul a fost instintat cu privire la necesitatea inroducerii initiativelor.");

    ui->l1->hide();
    ui->l2->hide();
    ui->lineEdit->hide();
    ui->lineEdit2->hide();
    ui->instintare->hide();
    ui->salveaza2->hide();
    ui->decizie2->hide();
    ui->decizie->setText("");
    ui->l1->clear();
    ui->l2->clear();
}

void Cultura::on_salveaza_clicked()
{
    this->hide();
}

void Cultura::on_salveaza2_clicked()
{
    QRegExp rx("^\s*$");
    bool flag = true;

    if(flag == true){
        if(!rx.exactMatch(ui->lineEdit->text())){
            flag = false;
        }
    }
    if(flag == true){
        if(!rx.exactMatch(ui->lineEdit2->text())){
            flag = false;
        }
    }

    if(flag == true){
        ui->l1->hide();
        ui->l2->hide();
        ui->lineEdit->hide();
        ui->lineEdit2->hide();
        ui->instintare->hide();
        ui->salveaza2->hide();
        ui->decizie2->hide();
        ui->decizie->setText("");
        ui->l1->clear();
        ui->l2->clear();
    }
    else{
        QMessageBox::warning(this,"Eroare","Campurile nu pot fi lasate goale!");
    }
}

void Cultura::on_comboBox_currentIndexChanged(const QString &arg1)
{
    QSqlQuery *qry = new QSqlQuery;

    qry->prepare("USE [PerformanceManagement] select Id from Employee where LastName=:b and FirstName=:a");
    qry->bindValue(":b",aux);
    qry->bindValue(":a",aux2);
    qry->exec();
    qry->next();
    SelectedEmployeeID = qry->value(0).toInt();


    qry->prepare("select * from Initiatives where EmployeeId=:c");
    qry->bindValue(":c",this->SelectedEmployeeID);
    qry->exec();
    int count = 0;

    // aici caut sa vad daca pentru angajatul de mai sus, exista date in tabela, daca nu afisez ediutile de la else, da da, e imediat dupa if acolo cu count
    while(qry->next()){
        count++;
    }
    if(count >= 1){
        qry->prepare("select FirstInitiative,SecondInitiative from Initiatives where EmployeeId=:c ");
        qry->bindValue(":c",this->SelectedEmployeeID);
        qry->exec();
        l1 = qry->value("FirstInitiative").toString();
        l2 = qry->value("SecondInitiative").toString();
        ui->decizie->setText("Se pare ca liderul are initativele introduse. Acestea sunt:");
        ui->i1->setText(l1);
        ui->i2->setText(l2);
    }
    else{
        ui->l1->show();
        ui->l2->show();
        ui->lineEdit->show();
        ui->lineEdit2->show();
        ui->instintare->show();
        ui->salveaza2->show();
        ui->decizie2->show();

        ui->decizie->setText("Se pare ca liderul nu are initiativele introduse.");


        //dar nu imi merg nici query urile astea

    }

}
