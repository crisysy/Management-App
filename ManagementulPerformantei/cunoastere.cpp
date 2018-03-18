#include "cunoastere.h"
#include "ui_cunoastere.h"

#include <QFileDialog>
#include <QMessageBox>

Cunoastere::Cunoastere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cunoastere)
{
    ui->setupUi(this);

    ui->label->hide();
    ui->label2->hide();
    ui->label3->hide();
    ui->lineEdit->hide();
    ui->lineEdit2->hide();
    ui->document->hide();
    ui->salveaza->hide();
    ui->anuleaza->hide();
}

Cunoastere::~Cunoastere()
{
    delete ui;
}

void Cunoastere::on_add_clicked()
{
    //Clears
    ui->lineEdit->clear();
    ui->lineEdit2->clear();

    //Afisare
    ui->label->show();
    ui->label2->show();
    ui->label3->show();
    ui->lineEdit->show();
    ui->lineEdit2->show();
    ui->document->show();
    ui->salveaza->show();
    ui->anuleaza->show();

    //Ascundere
    ui->tableView->hide();
    ui->add->hide();
    ui->iesire->hide();
}

void Cunoastere::on_iesire_clicked()
{
    this->hide();
}

void Cunoastere::on_salveaza_clicked()
{
    //Ascundere
    ui->label->hide();
    ui->label2->hide();
    ui->label3->hide();
    ui->lineEdit->hide();
    ui->lineEdit2->hide();
    ui->document->hide();
    ui->salveaza->hide();
    ui->anuleaza->hide();

    //Afisare
    ui->tableView->show();
    ui->add->show();
    ui->iesire->show();
}

void Cunoastere::on_anuleaza_clicked()
{
    //Ascundere
    ui->label->hide();
    ui->label2->hide();
    ui->label3->hide();
    ui->lineEdit->hide();
    ui->lineEdit2->hide();
    ui->document->hide();
    ui->salveaza->hide();
    ui->anuleaza->hide();

    //Afisare
    ui->tableView->show();
    ui->add->show();
    ui->iesire->show();
}

void Cunoastere::on_document_clicked()
{
    filePath = QFileDialog::getOpenFileName(this,tr("Selectati fisierul corespunzator istoricului"),"./",tr("*.pdf"));
}
