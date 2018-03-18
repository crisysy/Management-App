#include "cotidiat.h"
#include "ui_cotidiat.h"

#include <QMessageBox>

Cotidiat::Cotidiat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cotidiat)
{
    ui->setupUi(this);
}

Cotidiat::~Cotidiat()
{
    delete ui;
}

void Cotidiat::on_salveaza_clicked()
{
    //Prelucrare date
    QMessageBox::warning(this,"Succes","Angajatii au fost instintati cu succes, iar sedintele planificate uremaza sa apara pe pagina lor personala");
}

void Cotidiat::on_salveaza_2_clicked()
{
    this->hide();
}
