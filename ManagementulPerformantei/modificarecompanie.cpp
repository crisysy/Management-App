#include "modificarecompanie.h"
#include "ui_modificarecompanie.h"

#include <QMessageBox>

ModificareCompanie::ModificareCompanie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModificareCompanie)
{
    ui->setupUi(this);
}

ModificareCompanie::~ModificareCompanie()
{
    delete ui;
}

void ModificareCompanie::on_saveButton_clicked()
{
    QMessageBox::warning(this,"Succes","Datele despre compania curenta au fost adaugate cu succes");
    this->hide();
}

void ModificareCompanie::on_cancelButton_clicked()
{
    this->hide();
}
