#include "inginerie.h"
#include "ui_inginerie.h"

Inginerie::Inginerie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Inginerie)
{
    ui->setupUi(this);
}

Inginerie::~Inginerie()
{
    delete ui;
}
