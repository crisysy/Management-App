#include "bugetare.h"
#include "ui_bugetare.h"

Bugetare::Bugetare(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Bugetare)
{
    ui->setupUi(this);
    //Ascunderea elementelor
    ui->l->hide();

    ui->financiar->hide();
    ui->cifraafaceri->hide();
    ui->cifraafaceriEdit->hide();
    ui->costcumparare->hide();
    ui->costcumparareEdit->hide();

    ui->resurseumane->hide();
    ui->salariiprime->hide();
    ui->salariiprimeEdit->hide();
    ui->formari->hide();
    ui->formariEdit->hide();
    ui->alte1->hide();
    ui->alte1Edit->hide();

    ui->infrastructura->hide();
    ui->masini->hide();
    ui->masiniEdit->hide();
    ui->chirie->hide();
    ui->chirieEdit->hide();
    ui->alte3->hide();
    ui->alte3Edit->hide();

    ui->tehnologia->hide();
    ui->achizitii->hide();
    ui->achizitiiEdit->hide();
    ui->telefonie->hide();
    ui->telefonieEdit->hide();
    ui->alte2->hide();
    ui->alte2Edit->hide();

    ui->investitii->hide();
    ui->cuantum->hide();
    ui->cuantumEdit->hide();

    ui->luna->hide();
    ui->luniBox->hide();
    ui->an->hide();
    ui->anEdit->hide();
    ui->salveaza->hide();
    ui->anuleaza->hide();
}

Bugetare::~Bugetare()
{
    delete ui;
}

void Bugetare::on_addbuget_clicked()
{
    //Afisarea campurilor necesare
    ui->l->show();

    ui->financiar->show();
    ui->cifraafaceri->show();
    ui->cifraafaceriEdit->show();
    ui->costcumparare->show();
    ui->costcumparareEdit->show();

    ui->resurseumane->show();
    ui->salariiprime->show();
    ui->salariiprimeEdit->show();
    ui->formari->show();
    ui->formariEdit->show();
    ui->alte1->show();
    ui->alte1Edit->show();

    ui->infrastructura->show();
    ui->masini->show();
    ui->masiniEdit->show();
    ui->chirie->show();
    ui->chirieEdit->show();
    ui->alte3->show();
    ui->alte3Edit->show();

    ui->tehnologia->show();
    ui->achizitii->show();
    ui->achizitiiEdit->show();
    ui->telefonie->show();
    ui->telefonieEdit->show();
    ui->alte2->show();
    ui->alte2Edit->show();

    ui->investitii->show();
    ui->cuantum->show();
    ui->cuantumEdit->show();

    ui->luna->show();
    ui->luniBox->show();
    ui->an->show();
    ui->anEdit->show();
    ui->salveaza->show();
    ui->anuleaza->show();

    //Ascunderea elementelor
    ui->tableView->hide();
    ui->modificare->hide();
    ui->addbuget->hide();
    ui->addproiect->hide();
    ui->iesire->hide();

    //Clears
    ui->cifraafaceriEdit->clear();
    ui->costcumparareEdit->clear();
    ui->salariiprimeEdit->clear();
    ui->formariEdit->clear();
    ui->alte1Edit->clear();
    ui->achizitiiEdit->clear();
    ui->telefonieEdit->clear();
    ui->alte2Edit->clear();
    ui->masiniEdit->clear();
    ui->chirieEdit->clear();
    ui->alte3Edit->clear();
    ui->cuantumEdit->clear();
    ui->anEdit->clear();
}

void Bugetare::on_addproiect_clicked()
{

}

void Bugetare::on_iesire_clicked()
{

}

void Bugetare::on_salveaza_clicked()
{

}

void Bugetare::on_anuleaza_clicked()
{
    //Afisarea elementelor
    ui->tableView->show();
    ui->modificare->show();
    ui->addbuget->show();
    ui->addproiect->show();
    ui->iesire->show();

    //Ascunderea elementelor
    ui->l->hide();

    ui->financiar->hide();
    ui->cifraafaceri->hide();
    ui->cifraafaceriEdit->hide();
    ui->costcumparare->hide();
    ui->costcumparareEdit->hide();

    ui->resurseumane->hide();
    ui->salariiprime->hide();
    ui->salariiprimeEdit->hide();
    ui->formari->hide();
    ui->formariEdit->hide();
    ui->alte1->hide();
    ui->alte1Edit->hide();

    ui->infrastructura->hide();
    ui->masini->hide();
    ui->masiniEdit->hide();
    ui->chirie->hide();
    ui->chirieEdit->hide();
    ui->alte3->hide();
    ui->alte3Edit->hide();

    ui->tehnologia->hide();
    ui->achizitii->hide();
    ui->achizitiiEdit->hide();
    ui->telefonie->hide();
    ui->telefonieEdit->hide();
    ui->alte2->hide();
    ui->alte2Edit->hide();

    ui->investitii->hide();
    ui->cuantum->hide();
    ui->cuantumEdit->hide();

    ui->luna->hide();
    ui->luniBox->hide();
    ui->an->hide();
    ui->anEdit->hide();
    ui->salveaza->hide();
    ui->anuleaza->hide();

    //Clears
    ui->cifraafaceriEdit->clear();
    ui->costcumparareEdit->clear();
    ui->salariiprimeEdit->clear();
    ui->formariEdit->clear();
    ui->alte1Edit->clear();
    ui->achizitiiEdit->clear();
    ui->telefonieEdit->clear();
    ui->alte2Edit->clear();
    ui->masiniEdit->clear();
    ui->chirieEdit->clear();
    ui->alte3Edit->clear();
    ui->cuantumEdit->clear();
    ui->anEdit->clear();
}
