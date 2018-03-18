#include "riscuri.h"
#include "ui_riscuri.h"

Riscuri::Riscuri(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Riscuri)
{
    ui->setupUi(this);

    //Ascundere risc
    ui->label->hide();
    ui->descriere->hide();
    ui->descriereEdit->hide();
    ui->gravitate->hide();
    ui->gravitateBox->hide();
    ui->prob->hide();
    ui->probBox->hide();
    ui->grad->hide();
    ui->gradBox->hide();
    ui->salveaza1->hide();
    ui->anuleaza1->hide();

    //Ascundere client
    ui->label2->hide();
    ui->client->hide();
    ui->clientBox->hide();
    ui->risc->hide();
    ui->riscBox->hide();
    ui->evaluare->hide();
    ui->evaluareBox_5->hide();
    ui->actiune->hide();
    ui->actiuneEdit->hide();
    ui->salveaza2->hide();
    ui->anuleaza2->hide();

}

Riscuri::~Riscuri()
{
    delete ui;
}

void Riscuri::on_addrisc_clicked()
{
    //Clears
    ui->descriereEdit->clear();

    //Afisare
    ui->label->show();
    ui->descriere->show();
    ui->descriereEdit->show();
    ui->gravitate->show();
    ui->gravitateBox->show();
    ui->prob->show();
    ui->probBox->show();
    ui->grad->show();
    ui->gradBox->show();
    ui->salveaza1->show();
    ui->anuleaza1->show();
}

void Riscuri::on_aclient_clicked()
{
    //Clears
    ui->actiuneEdit->clear();

    //Afisare
    ui->label2->show();
    ui->client->show();
    ui->clientBox->show();
    ui->risc->show();
    ui->riscBox->show();
    ui->evaluare->show();
    ui->evaluareBox_5->show();
    ui->actiune->show();
    ui->actiuneEdit->show();
    ui->salveaza2->show();
    ui->anuleaza2->show();
}

void Riscuri::on_rfin_clicked()
{

}

void Riscuri::on_iesire_clicked()
{
    this->hide();
}

void Riscuri::on_salveaza1_clicked()
{
    ui->tableView->show();
    ui->addrisc->show();
    ui->aclient->show();
    ui->rfin->show();
    ui->iesire->show();

    //Ascundere risc
    ui->label->hide();
    ui->descriere->hide();
    ui->descriereEdit->hide();
    ui->gravitate->hide();
    ui->gravitateBox->hide();
    ui->prob->hide();
    ui->probBox->hide();
    ui->grad->hide();
    ui->gradBox->hide();
    ui->salveaza1->hide();
    ui->anuleaza1->hide();
}

void Riscuri::on_anuleaza1_clicked()
{
    ui->tableView->show();
    ui->addrisc->show();
    ui->aclient->show();
    ui->rfin->show();
    ui->iesire->show();

    //Ascundere risc
    ui->label->hide();
    ui->descriere->hide();
    ui->descriereEdit->hide();
    ui->gravitate->hide();
    ui->gravitateBox->hide();
    ui->prob->hide();
    ui->probBox->hide();
    ui->grad->hide();
    ui->gradBox->hide();
    ui->salveaza1->hide();
    ui->anuleaza1->hide();
}

void Riscuri::on_salveaza2_clicked()
{
    ui->tableView->show();
    ui->addrisc->show();
    ui->aclient->show();
    ui->rfin->show();
    ui->iesire->show();

    //Ascundere client
    ui->label2->hide();
    ui->client->hide();
    ui->clientBox->hide();
    ui->risc->hide();
    ui->riscBox->hide();
    ui->evaluare->hide();
    ui->evaluareBox_5->hide();
    ui->actiune->hide();
    ui->actiuneEdit->hide();
    ui->salveaza2->hide();
    ui->anuleaza2->hide();
}

void Riscuri::on_anuleaza2_clicked()
{
    ui->tableView->show();
    ui->addrisc->show();
    ui->aclient->show();
    ui->rfin->show();
    ui->iesire->show();

    //Ascundere client
    ui->label2->hide();
    ui->client->hide();
    ui->clientBox->hide();
    ui->risc->hide();
    ui->riscBox->hide();
    ui->evaluare->hide();
    ui->evaluareBox_5->hide();
    ui->actiune->hide();
    ui->actiuneEdit->hide();
    ui->salveaza2->hide();
    ui->anuleaza2->hide();
}
