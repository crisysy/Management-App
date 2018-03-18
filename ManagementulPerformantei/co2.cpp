#include "co2.h"
#include "ui_co2.h"

Co2::Co2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Co2)
{
    ui->setupUi(this);
}

Co2::~Co2()
{
    delete ui;
}
