#include "cf.h"
#include "ui_cf.h"

#include <QRegExp>
#include <QMessageBox>

Cf::Cf(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cf)
{
    ui->setupUi(this);

    //Ascundere
    ui->newcf->hide();
    ui->cf->hide();
    ui->cfEdit->hide();
    ui->aferent->hide();
    ui->aferentBox->hide();
    ui->salveaza->hide();
    ui->anuleaza->hide();
}

Cf::~Cf()
{
    delete ui;
}

void Cf::on_showc_clicked()
{
    //Ascundere
    ui->tableView->hide();
    ui->select->hide();
    ui->agentieBox->hide();
    ui->showc->hide();
    ui->showf->hide();
    ui->inchide->hide();
    ui->sf->hide();
    ui->sc->hide();

    //Afisare
    ui->newcf->show();
    ui->cf->show();
    ui->cfEdit->show();
    ui->aferent->show();
    ui->aferentBox->show();
    ui->salveaza->show();
    ui->anuleaza->show();
    ui->cf->setText("Numele noului client:");
    //Setarea date pentru aferentBox

    //Clears
    ui->cfEdit->clear();
}

void Cf::on_showf_clicked()
{
    //Ascundere
    ui->tableView->hide();
    ui->select->hide();
    ui->agentieBox->hide();
    ui->showc->hide();
    ui->showf->hide();
    ui->inchide->hide();
    ui->sf->hide();
    ui->sc->hide();

    //Afisare
    ui->newcf->show();
    ui->cf->show();
    ui->cfEdit->show();
    ui->aferent->show();
    ui->aferentBox->show();
    ui->salveaza->show();
    ui->anuleaza->show();
    ui->cf->setText("Numele noului furnizor:");
    //Setarea date pentru aferentBox

    //Clears
    ui->cfEdit->clear();
}

void Cf::on_salveaza_clicked()
{
    //Verificare daca campurile sunt goale
    bool flag = true;
    QRegExp rx("^\s*$");
    if(flag == true){
        if(rx.exactMatch(ui->cfEdit->text())){
            flag = false;
        }
    }

    if(flag == true){
        //Actiuni de memorare in baza de date


        //Afisarea
        ui->tableView->show();
        ui->select->show();
        ui->agentieBox->show();
        ui->showc->show();
        ui->showf->show();
        ui->sf->show();
        ui->sc->show();
        ui->inchide->show();

        //Ascundere
        ui->newcf->hide();
        ui->cf->hide();
        ui->cfEdit->hide();
        ui->aferent->hide();
        ui->aferentBox->hide();
        ui->salveaza->hide();
        ui->anuleaza->hide();
    }
    else{
        QMessageBox::warning(this,"Eroare","Campurile nu pot fi lasate goale");
    }
}

void Cf::on_inchide_clicked()
{
    this->hide();
}

void Cf::on_anuleaza_clicked()
{
    //Afisarea
    ui->tableView->show();
    ui->select->show();
    ui->agentieBox->show();
    ui->showc->show();
    ui->showf->show();
    ui->sf->show();
    ui->sc->show();
    ui->inchide->show();

    //Ascundere
    ui->newcf->hide();
    ui->cf->hide();
    ui->cfEdit->hide();
    ui->aferent->hide();
    ui->aferentBox->hide();
    ui->salveaza->hide();
    ui->anuleaza->hide();
}
