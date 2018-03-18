#include "definireastrategiei.h"
#include "ui_definireastrategiei.h"

#include "fereastraprincipala.h"
#include "definire.h"
#include "performanta.h"
#include "cultura.h"
#include "responsabil.h"
#include "bugetare.h"

DefinireaStrategiei::DefinireaStrategiei(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DefinireaStrategiei)
{
    ui->setupUi(this);
}

DefinireaStrategiei::~DefinireaStrategiei()
{
    delete ui;
}

void DefinireaStrategiei::on_inapoi_clicked()
{
    FereastraPrincipala *ui2 = new FereastraPrincipala;
    ui2->show();
    this->hide();
}

void DefinireaStrategiei::on_definire_clicked()
{
    Definire *ui2 = new Definire;
    ui2->show();
}

void DefinireaStrategiei::on_performanta_clicked()
{
    Performanta *ui2 = new Performanta;
    ui2->show();
}

void DefinireaStrategiei::on_cultura_clicked()
{
    Cultura *ui2 = new Cultura;
    ui2->show();
}

void DefinireaStrategiei::on_responsabil_clicked()
{
    Responsabil *ui2 = new Responsabil;
    ui2->show();
}

void DefinireaStrategiei::on_bugetare_clicked()
{
    Bugetare *ui2 = new Bugetare;
    ui2->show();
}
