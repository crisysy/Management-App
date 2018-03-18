#include "procese.h"
#include "ui_procese.h"

#include <QMessageBox>

Procese::Procese(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Procese)
{
    ui->setupUi(this);

    ui->newp->hide();
    ui->tip->hide();
    ui->tipBox->hide();
    ui->nume->hide();
    ui->numeEdit->hide();
    ui->prenume->hide();
    ui->prenumeEdit->hide();
    ui->agentie->hide();
    ui->agentieBox->hide();
    ui->salveaza->hide();
    ui->anuleaza->hide();
}

Procese::~Procese()
{
    delete ui;
}

void Procese::on_addproces_clicked()
{
    //Afisarea elementelor
    ui->newp->show();
    ui->tip->show();
    ui->tipBox->show();
    ui->nume->show();
    ui->numeEdit->show();
    ui->prenume->show();
    ui->prenumeEdit->show();
    ui->agentie->show();
    ui->agentieBox->show();
    ui->salveaza->show();
    ui->anuleaza->show();

    //Ascunderea
    ui->tableView->hide();
    ui->label->hide();
    ui->label2->hide();
    ui->comboBox->hide();
    ui->addproces->hide();
    ui->iesire->hide();

    //Clears
    ui->numeEdit->clear();
    ui->prenumeEdit->clear();
}

void Procese::on_iesire_clicked()
{
    this->hide();
}

void Procese::on_salveaza_clicked()
{
    QRegExp rx("^\s*$");
    QRegExp rx2("[a-z A-Z]*");
    bool flag = true;

    if(flag == true){
        if(rx.exactMatch(ui->numeEdit->text())){
            flag = false;
        }
    }
    if(flag == true){
        if(rx.exactMatch(ui->prenumeEdit->text())){
            flag = false;
        }
    }
    if(flag == true){
        if(!rx2.exactMatch(ui->numeEdit->text())){
            flag = false;
        }
    }
    if(flag == true){
        if(!rx2.exactMatch(ui->prenumeEdit->text())){
            flag = false;
        }
    }

    if(flag == true){
        //Actiuni de memorare a noului proces

        //Ascundere
        ui->newp->hide();
        ui->tip->hide();
        ui->tipBox->hide();
        ui->nume->hide();
        ui->numeEdit->hide();
        ui->prenume->hide();
        ui->prenumeEdit->hide();
        ui->agentie->hide();
        ui->agentieBox->hide();
        ui->salveaza->hide();
        ui->anuleaza->hide();

        //Afisare
        ui->tableView->show();
        ui->label->show();
        ui->label2->show();
        ui->comboBox->show();
        ui->addproces->show();
        ui->iesire->show();
    }
    else{
        QMessageBox::warning(this,"Eroare","Sunt erori la completarea campurilor");
    }
}

void Procese::on_anuleaza_clicked()
{
    //Ascundere
    ui->newp->hide();
    ui->tip->hide();
    ui->tipBox->hide();
    ui->nume->hide();
    ui->numeEdit->hide();
    ui->prenume->hide();
    ui->prenumeEdit->hide();
    ui->agentie->hide();
    ui->agentieBox->hide();
    ui->salveaza->hide();
    ui->anuleaza->hide();

    //Afisare
    ui->tableView->show();
    ui->label->show();
    ui->label2->show();
    ui->comboBox->show();
    ui->addproces->show();
    ui->iesire->show();
}
