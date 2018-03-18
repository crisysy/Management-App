#include "componentecompanie.h"
#include "ui_componentecompanie.h"

#include "fereastraprincipala.h"
#include "showagentii.h"
#include "addagentii.h"
#include "modificarecompanie.h"

ComponenteCompanie::ComponenteCompanie(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ComponenteCompanie)
{
    ui->setupUi(this);
}

ComponenteCompanie::~ComponenteCompanie()
{
    delete ui;
}

void ComponenteCompanie::on_inapoi_clicked()
{
    FereastraPrincipala *ui2 = new FereastraPrincipala;
    ui2->show();
    this->hide();
}

void ComponenteCompanie::on_showagentii_clicked()
{
    ShowAgentii *ui2 = new ShowAgentii;
    ui2->show();
}

void ComponenteCompanie::on_addagentie_clicked()
{
    AddAgentii *ui2 = new AddAgentii;
    ui2->show();
}

void ComponenteCompanie::on_modifica_clicked()
{
    ModificareCompanie *ui2 = new ModificareCompanie;
    ui2->show();
}
