#include "it.h"
#include "ui_it.h"

It::It(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::It)
{
    ui->setupUi(this);
}

It::~It()
{
    delete ui;
}
