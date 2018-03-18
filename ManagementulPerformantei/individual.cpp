#include "individual.h"
#include "ui_individual.h"

Individual::Individual(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Individual)
{
    ui->setupUi(this);
    //Ascundere
    ui->sh->hide();
    ui->ob1->hide();
    ui->ob2->hide();
    ui->ob3->hide();
    ui->add->hide();
    ui->mob1->hide();
    ui->ob1Edit->hide();
    ui->asob1->hide();
    ui->asob1Box->hide();
    ui->mob2->hide();
    ui->ob2Edit->hide();
    ui->asob2->hide();
    ui->asob2Box->hide();
    ui->mob3->hide();
    ui->ob3Edit->hide();
    ui->asob3->hide();
    ui->asob3Box->hide();
    ui->salveaza_2->hide();
    ui->anuleaza->hide();
}

Individual::~Individual()
{
    delete ui;
}

void Individual::on_tableView_doubleClicked(const QModelIndex &index)
{
    //Afisare
    ui->sh->show();
    ui->ob1->show();
    ui->ob2->show();
    ui->ob3->show();
    ui->add->show();
    ui->mob1->show();
    ui->ob1Edit->show();
    ui->asob1->show();
    ui->asob1Box->show();
    ui->mob2->show();
    ui->ob2Edit->show();
    ui->asob2->show();
    ui->asob2Box->show();
    ui->mob3->show();
    ui->ob3Edit->show();
    ui->asob3->show();
    ui->asob3Box->show();
    ui->salveaza_2->show();
    ui->anuleaza->show();

    //Ascundere
    ui->tableView->hide();
    ui->label1->hide();
    ui->label2->hide();
    ui->salveaza->hide();

    //Clears
    ui->ob1Edit->clear();
    ui->ob2Edit->clear();
    ui->ob3Edit->clear();

    //Atribuire valori asob 1,2 si 3 pentru comboBox conform obiectivelor operationale

    //Schimbarea textului pentru ob1,ob2 si ob3 daca anagajatul are edja obiectivele setate

}

void Individual::on_salveaza_2_clicked()
{
    //Verificare si modificarea in baza de date a campurilor

    //Ascundere
    ui->sh->hide();
    ui->ob1->hide();
    ui->ob2->hide();
    ui->ob3->hide();
    ui->add->hide();
    ui->mob1->hide();
    ui->ob1Edit->hide();
    ui->asob1->hide();
    ui->asob1Box->hide();
    ui->mob2->hide();
    ui->ob2Edit->hide();
    ui->asob2->hide();
    ui->asob2Box->hide();
    ui->mob3->hide();
    ui->ob3Edit->hide();
    ui->asob3->hide();
    ui->asob3Box->hide();
    ui->salveaza_2->hide();
    ui->anuleaza->hide();

    //Afisare
    ui->tableView->show();
    ui->label1->show();
    ui->label2->show();
    ui->salveaza->show();
}

void Individual::on_anuleaza_clicked()
{
    //Ascundere
    ui->sh->hide();
    ui->ob1->hide();
    ui->ob2->hide();
    ui->ob3->hide();
    ui->add->hide();
    ui->mob1->hide();
    ui->ob1Edit->hide();
    ui->asob1->hide();
    ui->asob1Box->hide();
    ui->mob2->hide();
    ui->ob2Edit->hide();
    ui->asob2->hide();
    ui->asob2Box->hide();
    ui->mob3->hide();
    ui->ob3Edit->hide();
    ui->asob3->hide();
    ui->asob3Box->hide();
    ui->salveaza_2->hide();
    ui->anuleaza->hide();

    //Afisare
    ui->tableView->show();
    ui->label1->show();
    ui->label2->show();
    ui->salveaza->show();
}

void Individual::on_salveaza_clicked()
{
    this->hide();
}
