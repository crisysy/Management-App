#include "fereastraprincipala.h"
#include "ui_fereastraprincipala.h"

#include "managementulperformantei.h"
#include "definireastrategiei.h"
#include "obiective.h"
#include "management.h"
#include "componentecompanie.h"

FereastraPrincipala::FereastraPrincipala(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FereastraPrincipala)
{
    ui->setupUi(this);

    connect(ui->iesire,SIGNAL(clicked(bool)),SLOT(close()));

    ui->componente->hide();
    ui->strategie->hide();
    ui->obiective->hide();
    ui->management->hide();
    ui->inapoi1->hide();

    ui->indicatori->hide();
    ui->imbunatatire->hide();
    ui->raportare->hide();
    ui->inapoi2->hide();
}

FereastraPrincipala::~FereastraPrincipala()
{
    delete ui;
}

void FereastraPrincipala::on_gestionare_clicked()
{
    ui->gestionare->hide();
    ui->evaluare->hide();

    ui->componente->show();
    ui->strategie->show();
    ui->obiective->show();
    ui->management->show();
    ui->inapoi1->show();
}

void FereastraPrincipala::on_evaluare_clicked()
{
    ui->gestionare->hide();
    ui->evaluare->hide();

    ui->indicatori->show();
    ui->imbunatatire->show();
    ui->raportare->show();
    ui->inapoi2->show();
}

void FereastraPrincipala::on_componente_clicked()
{
    ComponenteCompanie *ui2 = new ComponenteCompanie;
    ui2->show();
    this->hide();
}

void FereastraPrincipala::on_strategie_clicked()
{
    DefinireaStrategiei *ui2 = new DefinireaStrategiei;
    ui2->show();
    this->hide();
}

void FereastraPrincipala::on_obiective_clicked()
{
    Obiective *ui2 = new Obiective;
    ui2->show();
    this->hide();
}

void FereastraPrincipala::on_management_clicked()
{
    Management *ui2 = new Management;
    ui2->show();
    this->hide();
}

void FereastraPrincipala::on_indicatori_clicked()
{

}

void FereastraPrincipala::on_imbunatatire_clicked()
{

}

void FereastraPrincipala::on_raportare_clicked()
{

}

void FereastraPrincipala::on_inapoi1_clicked()
{
    ui->componente->hide();
    ui->strategie->hide();
    ui->obiective->hide();
    ui->management->hide();
    ui->inapoi1->hide();

    ui->gestionare->show();
    ui->evaluare->show();
}

void FereastraPrincipala::on_inapoi2_clicked()
{
    ui->indicatori->hide();
    ui->imbunatatire->hide();
    ui->raportare->hide();
    ui->inapoi2->hide();

    ui->gestionare->show();
    ui->evaluare->show();
}

void FereastraPrincipala::on_schimbauser_clicked()
{
    ManagementulPerformantei *ui2 = new ManagementulPerformantei;
    ui2->show();
    this->hide();
}

