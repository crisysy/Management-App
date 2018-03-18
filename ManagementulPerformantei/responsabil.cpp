#include "responsabil.h"
#include "ui_responsabil.h"

Responsabil::Responsabil(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Responsabil)
{
    ui->setupUi(this);
}

Responsabil::~Responsabil()
{
    delete ui;
}
