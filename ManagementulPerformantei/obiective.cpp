#include "obiective.h"
#include "ui_obiective.h"

#include "fereastraprincipala.h"
#include "procese.h"
#include "ob.h"
#include "cf.h"
#include "individual.h"
#include "cotidiat.h"

Obiective::Obiective(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Obiective)
{
    ui->setupUi(this);
}

Obiective::~Obiective()
{
    delete ui;
}

void Obiective::on_inapoi_clicked()
{
    FereastraPrincipala *ui2 = new FereastraPrincipala;
    ui2->show();
    this->hide();
}


void Obiective::on_procese_clicked()
{
    Procese *ui2 = new Procese;
    ui2->show();
}

void Obiective::on_ob_clicked()
{
    Ob *ui2 = new Ob;
    ui2->show();
}

void Obiective::on_cf_clicked()
{
    Cf *ui2 = new Cf;
    ui2->show();
}

void Obiective::on_individ_clicked()
{
    Individual *ui2 = new Individual;
    ui2->show();
}

void Obiective::on_cotidian_clicked()
{
    Cotidiat *ui2 = new Cotidiat;
    ui2->show();
}
