#include "management.h"
#include "ui_management.h"

#include "fereastraprincipala.h"
#include "riscuri.h"
#include "cunoastere.h"
#include "co2.h"
#include "inginerie.h"
#include "it.h"

Management::Management(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Management)
{
    ui->setupUi(this);
}

Management::~Management()
{
    delete ui;
}

void Management::on_inapoi_clicked()
{
    FereastraPrincipala *ui2 = new FereastraPrincipala;
    ui2->show();
    this->hide();
}

void Management::on_riscuri_clicked()
{
    Riscuri *ui2 = new Riscuri;
    ui2->show();
}

void Management::on_cunoastere_clicked()
{
    Cunoastere *ui2 = new Cunoastere;
    ui2->show();
}

void Management::on_co2_clicked()
{
    Co2 *ui2 = new Co2;
    ui2->show();
}

void Management::on_inginerie_clicked()
{
    Inginerie *ui2 = new Inginerie;
    ui2->show();
}

void Management::on_it_clicked()
{
    It *ui2 = new It;
    ui2->show();
}
