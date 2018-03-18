#include "performanta.h"
#include "ui_performanta.h"

#include <QMessageBox>
#include <QtSql>
#include <QSqlQueryModel>
#include <QSqlDatabase>

Performanta::Performanta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Performanta)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QODBC3");
    db.setHostName("ANDREI_PC");
    db.setDatabaseName("DSN_POOproject");
    db.open();

    QSqlQuery *qry2 = new QSqlQuery;
    qry2->prepare("SELECT [Id],[LastName],[FirstName],[HardSkillId],[SolfSkillId],[TrainingId],[AgencyId],[UserId],[Agentie],[Position],[IsManager] FROM [dbo].[Employee]");
    model = new QSqlQueryModel();
    model->setQuery(*qry2);
    ui->tableView->setModel(model);


    //Initial, campurile de adaugare ale unui nou angajat sunt ascunse
    ui->info->hide();
    ui->labelnume->hide();
    ui->labelprenume->hide();
    ui->numeEdit->hide();
    ui->prenumeEdit->hide();
    ui->studii->hide();
    ui->mhard->hide();
    ui->msoft->hide();
    ui->hardEdit->hide();
    ui->softEdit->hide();
    ui->manager->hide();
    ui->functie->hide();
    ui->functieEdit->hide();
    ui->agentie->hide();
    ui->comboBox->hide();

    ui->hard->hide();
    ui->hard1->hide();
    ui->hard2->hide();
    ui->hard3->hide();
    ui->hard4->hide();
    ui->hard5->hide();
    ui->hard6->hide();
    ui->hard7->hide();
    ui->hard8->hide();
    ui->hard9->hide();

    ui->soft->hide();
    ui->soft1->hide();
    ui->soft2->hide();
    ui->soft3->hide();
    ui->soft4->hide();
    ui->soft5->hide();
    ui->soft6->hide();
    ui->soft7->hide();
    ui->soft8->hide();
    ui->soft9->hide();

    ui->ap->hide();
    ui->ap1->hide();
    ui->ap2->hide();
    ui->ap3->hide();
    ui->ap4->hide();
    ui->ap5->hide();
    ui->ap6->hide();
    ui->ap7->hide();
    ui->ap8->hide();
    ui->ap9->hide();

    ui->salveaza2->hide();
}

Performanta::~Performanta()
{
    delete ui;
}

bool Performanta::isEmpt(QString ch)
{
    QRegExp rx("^\s*$");
    if(rx.exactMatch(ch)){
        return true;
    }
    else{
        return false;
    }
}

void Performanta::on_adauga_clicked()
{
    QSqlQuery *qry = new QSqlQuery;
    qry->prepare("select Name from Agency");
    qry->exec();
    while(qry->next()){
        QString aux = qry->value("Name").toString();
        ui->comboBox->addItem(aux);
    }

    ui->numeEdit->clear();
    ui->prenumeEdit->clear();
    ui->hardEdit->clear();
    ui->softEdit->clear();
    ui->functieEdit->clear();

    ui->studii->setChecked(false);
    ui->hard1->setChecked(false);
    ui->hard2->setChecked(false);
    ui->hard3->setChecked(false);
    ui->hard4->setChecked(false);
    ui->hard5->setChecked(false);
    ui->hard6->setChecked(false);
    ui->hard7->setChecked(false);
    ui->hard8->setChecked(false);
    ui->hard9->setChecked(false);
    ui->soft1->setChecked(false);
    ui->soft2->setChecked(false);
    ui->soft3->setChecked(false);
    ui->soft4->setChecked(false);
    ui->soft5->setChecked(false);
    ui->soft6->setChecked(false);
    ui->soft7->setChecked(false);
    ui->soft8->setChecked(false);
    ui->soft9->setChecked(false);
    ui->ap1->setChecked(false);
    ui->ap2->setChecked(false);
    ui->ap3->setChecked(false);
    ui->ap4->setChecked(false);
    ui->ap5->setChecked(false);
    ui->ap6->setChecked(false);
    ui->ap7->setChecked(false);
    ui->ap8->setChecked(false);
    ui->ap9->setChecked(false);
    ui->manager->setChecked(false);

    //Ascundere elementelor
    ui->tableView->hide();
    ui->labelmodificare->hide();
    ui->adauga->hide();
    ui->salveaza->hide();

    //Afisarea elementelor
    ui->info->show();
    ui->labelnume->show();
    ui->labelprenume->show();
    ui->numeEdit->show();
    ui->prenumeEdit->show();
    ui->studii->show();
    ui->mhard->show();
    ui->msoft->show();
    ui->hardEdit->show();
    ui->softEdit->show();
    ui->manager->show();
    ui->functie->show();
    ui->functieEdit->show();
    ui->agentie->show();
    ui->comboBox->show();

    ui->hard->show();
    ui->hard1->show();
    ui->hard2->show();
    ui->hard3->show();
    ui->hard4->show();
    ui->hard5->show();
    ui->hard6->show();
    ui->hard7->show();
    ui->hard8->show();
    ui->hard9->show();

    ui->soft->show();
    ui->soft1->show();
    ui->soft2->show();
    ui->soft3->show();
    ui->soft4->show();
    ui->soft5->show();
    ui->soft6->show();
    ui->soft7->show();
    ui->soft8->show();
    ui->soft9->show();

    ui->ap->show();
    ui->ap1->show();
    ui->ap2->show();
    ui->ap3->show();
    ui->ap4->show();
    ui->ap5->show();
    ui->ap6->show();
    ui->ap7->show();
    ui->ap8->show();
    ui->ap9->show();

    ui->salveaza2->show();
}

void Performanta::on_salveaza_clicked()
{
    this->hide();
}

void Performanta::on_salveaza2_clicked()
{
    QString nume,prenume,hard,soft,functie;
    bool flag = true;

    nume = ui->numeEdit->text();
    prenume = ui->prenumeEdit->text();
    functie = ui->functieEdit->text();
    hard = ui->hardEdit->text();
    soft = ui->softEdit->text();

    if(flag == true){
        if(isEmpt(nume)){
            flag = false;
        }
        if(isEmpt(prenume)){
            flag = false;
        }
        if(isEmpt(hard)){
            flag = false;
        }
        if(isEmpt(soft)){
            flag = false;
        }
        if(isEmpt(functie)){
            flag = false;
        }
    }

    if(flag == true){
        QRegExp rx("[a-z A-Z]*");
        if(!rx.exactMatch(nume)){
            flag = false;
        }
    }
    if(flag == true){
        QRegExp rx("[a-z A-Z]*");
        if(!rx.exactMatch(prenume)){
            flag = false;
        }
    }
    if(flag == true){
        QRegExp rx("[a-z A-Z]*");
        if(!rx.exactMatch(functie)){
            flag = false;
        }
    }
    if(flag == true){
        int h = hard.toFloat();
        if(h < 0 || h > 100){
            flag = false;
        }
    }
    if(flag == true){
        int s = soft.toFloat();
        if(s < 0 || s > 100){
            flag = false;
        }
    }

    if(flag == true){
        //Memorarea in baza de date

        QSqlQuery *qry = new QSqlQuery;
        QString agentie = ui->comboBox->currentText();
        ui->ap1->setText(agentie);
        qry->prepare("select Id from Agency where Name=:agentie");
        qry->bindValue(":agentie",agentie);
        qry->exec();

        QString h1;
        if(ui->hard1->isChecked()){
            h1 = "DA";
        }
        else{
            h1 = "NU";
        }
        QString h2;
        if(ui->hard2->isChecked()){
            h2 = "DA";
        }
        else{
            h2 = "NU";
        }
        QString h3;
        if(ui->hard3->isChecked()){
            h3 = "DA";
        }
        else{
            h3 = "NU";
        }
        QString h4;
        if(ui->hard4->isChecked()){
            h4 = "DA";
        }
        else{
            h4 = "NU";
        }
        QString h5;
        if(ui->hard5->isChecked()){
            h5 = "DA";
        }
        else{
            h5 = "NU";
        }
        QString h6;
        if(ui->hard6->isChecked()){
            h6 = "DA";
        }
        else{
            h6 = "NU";
        }
        QString h7;
        if(ui->hard7->isChecked()){
            h7 = "DA";
        }
        else{
            h7 = "NU";
        }
        QString h8;
        if(ui->hard8->isChecked()){
            h8 = "DA";
        }
        else{
            h8 = "NU";
        }
        QString h9;
        if(ui->hard9->isChecked()){
            h9 = "DA";
        }
        else{
            h9 = "NU";
        }

        QString s1;
        if(ui->soft1->isChecked()){
            s1 = "DA";
        }
        else{
            s1 = "NU";
        }
        QString s2;
        if(ui->soft2->isChecked()){
            s2 = "DA";
        }
        else{
            s2 = "NU";
        }
        QString s3;
        if(ui->soft3->isChecked()){
            s3 = "DA";
        }
        else{
            s3 = "NU";
        }
        QString s4;
        if(ui->soft4->isChecked()){
            s4 = "DA";
        }
        else{
           s4 = "NU";
        }
        QString s5;
        if(ui->soft5->isChecked()){
            s5 = "DA";
        }
        else{
            s5 = "NU";
        }
        QString s6;
        if(ui->soft6->isChecked()){
            s6 = "DA";
        }
        else{
            s6 = "NU";
        }
        QString s7;
        if(ui->soft7->isChecked()){
            s7 = "DA";
        }
        else{
            s7 = "NU";
        }
        QString s8;
        if(ui->soft8->isChecked()){
            s8 = "DA";
        }
        else{
            s8 = "NU";
        }
        QString s9;
        if(ui->soft9->isChecked()){
            s9 = "DA";
        }
        else{
            s9 = "NU";
        }

        QString t1;
        if(ui->ap1->isChecked()){
            t1 = "DA";
        }
        else{
            t1 = "NU";
        }
        QString t2;
        if(ui->ap2->isChecked()){
            t2 = "DA";
        }
        else{
            t2 = "NU";
        }
        QString t3;
        if(ui->ap3->isChecked()){
            t3 = "DA";
        }
        else{
            t3 = "NU";
        }
        QString t4;
        if(ui->ap4->isChecked()){
            t4 = "DA";
        }
        else{
           t4 = "NU";
        }
        QString t5;
        if(ui->ap5->isChecked()){
            t5 = "DA";
        }
        else{
            t5 = "NU";
        }
        QString t6;
        if(ui->ap6->isChecked()){
            t6 = "DA";
        }
        else{
            t6 = "NU";
        }
        QString t7;
        if(ui->ap7->isChecked()){
           t7 = "DA";
        }
        else{
            t7 = "NU";
        }
        QString t8;
        if(ui->ap8->isChecked()){
            t8 = "DA";
        }
        else{
            t8 = "NU";
        }
        QString t9;
        if(ui->ap9->isChecked()){
            t9 = "DA";
        }
        else{
            t9 = "NU";
        }

        QString m;
        if(ui->manager->isChecked()){
            m = "DA";
        }
        else{
            m = "NU";
        }
        qry->prepare("INSERT INTO [HardSkills] ([HardSkillPercent],[HasRoadTransport],[HasNavalTransport],[HasRailRoadTransport],[HasAerianTransport],[HasInternationalTransport],[HasDomesticTransport],[HasDeposit],[IsComercial],[HasAcquisitions]) VALUES (:skill,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9)");
        qry->bindValue(":skill",hard);
        qry->bindValue(":b1",h1);
        qry->bindValue(":b2",h2);
        qry->bindValue(":b3",h3);
        qry->bindValue(":b4",h4);
        qry->bindValue(":b5",h5);
        qry->bindValue(":b6",h6);
        qry->bindValue(":b7",h7);
        qry->bindValue(":b8",h8);
        qry->bindValue(":b9",h9);
        qry->exec();

        qry->prepare("SELECT [Id] FROM [HardSkills]");
        qry->exec();
        qry->last();
        hardid = qry->value(0).toInt();

        qry->prepare("INSERT INTO [SoftSkills] ([HasTeamManagement],[HasDataAnalyzation],[HasDecisionMaking],[HasComunication],[HasTeamwork],[HasResultPresenting],[HasInitiative],[HasCommitment],[HasProblemSolving],[SoftSkill]) VALUES (:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9,:skill)");
        qry->bindValue(":skill",soft);
        qry->bindValue(":b1",s1);
        qry->bindValue(":b2",s2);
        qry->bindValue(":b3",s3);
        qry->bindValue(":b4",s4);
        qry->bindValue(":b5",s5);
        qry->bindValue(":b6",s6);
        qry->bindValue(":b7",s7);
        qry->bindValue(":b8",s8);
        qry->bindValue(":b9",s9);
        qry->exec();

        qry->prepare("SELECT [Id] FROM [SoftSkills]");
        qry->exec();
        qry->last();
        softid = qry->value(0).toInt();

        qry->prepare("INSERT INTO [Trainings] ([HasClientsManagement],[HasProjectManagement],[HasTimeManagement],[HasLEANManagement],[HasSixSigmaBelt],[HasAdrTransport],[HasIataTransport],[HasInformaticSystem],[HasWordStandards]) VALUES (:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8,:b9)");
        qry->bindValue(":b1",t1);
        qry->bindValue(":b2",t2);
        qry->bindValue(":b3",t3);
        qry->bindValue(":b4",t4);
        qry->bindValue(":b5",t5);
        qry->bindValue(":b6",t6);
        qry->bindValue(":b7",t7);
        qry->bindValue(":b8",t8);
        qry->bindValue(":b9",t9);
        qry->exec();

        qry->prepare("SELECT [Id] FROM [Trainings]");
        qry->exec();
        qry->last();
        trainingid = qry->value(0).toInt();

        qry->prepare("SELECT [Id] FROM Agency WHERE Name=:agentie");
        qry->bindValue(":agentie",agentie);
        qry->exec();
        qry->first();
        agentieid = qry->value(0).toInt();

        int k =1 ;
        QString execute = QString("USE [PerformanceManagement] INSERT INTO [dbo].[Employee] ([LastName],[FirstName],[HardSkillId],[SolfSkillId],[TrainingId],[AgencyId],[Agentie],[Position],[IsManager]) VALUES(%1,%2,%3,%4,%5,%6,%7,%8,%9)").arg(nume).arg(prenume).arg(hardid).arg(softid).arg(trainingid).arg(agentieid).arg(ui->comboBox->currentText()).arg(functie).arg(true);

        QSqlQuery *EmployeeQuery = new QSqlQuery;
        EmployeeQuery->exec(execute);
        qry->bindValue(":b2",prenume);
        qry->bindValue(":b1",nume);
        qry->bindValue(":b3",k);
        qry->bindValue(":b4",k);
        qry->bindValue(":b5",k);
        //qry->bindValue(":b6",1);
        //qry->bindValue(":b7",1);
        qry->bindValue(":b9",agentie);
        qry->bindValue(":b8",ui->functieEdit->text());
        //qry->bindValue(":b10",m);
        //if(qry->exec()){
            //AFISARE CE TREBUIE DUPA SALVARE
            ui->tableView->hide();
            ui->labelmodificare->hide();
            ui->adauga->hide();
            ui->salveaza->hide();

            qry->prepare("SELECT [Id],[LastName],[FirstName],[HardSkillId],[SolfSkillId],[TrainingId],[AgencyId],[UserId],[Agentie],[Position],[IsManager] FROM [dbo].[Employee]");
            QSqlQueryModel *model2 = new QSqlQueryModel;
            model->setQuery(*qry);
            ui->tableView->setModel(model);

            //Initial, campurile de adaugare ale unui nou angajat sunt ascunse
            ui->info->hide();
            ui->labelnume->hide();
            ui->labelprenume->hide();
            ui->numeEdit->hide();
            ui->prenumeEdit->hide();
            ui->studii->hide();
            ui->mhard->hide();
            ui->msoft->hide();
            ui->hardEdit->hide();
            ui->softEdit->hide();
            ui->manager->hide();
            ui->functie->hide();
            ui->functieEdit->hide();
            ui->agentie->hide();
            ui->comboBox->hide();

            ui->hard->hide();
            ui->hard1->hide();
            ui->hard2->hide();
            ui->hard3->hide();
            ui->hard4->hide();
            ui->hard5->hide();
            ui->hard6->hide();
            ui->hard7->hide();
            ui->hard8->hide();
            ui->hard9->hide();

            ui->soft->hide();
            ui->soft1->hide();
            ui->soft2->hide();
            ui->soft3->hide();
            ui->soft4->hide();
            ui->soft5->hide();
            ui->soft6->hide();
            ui->soft7->hide();
            ui->soft8->hide();
            ui->soft9->hide();

            ui->ap->hide();
            ui->ap1->hide();
            ui->ap2->hide();
            ui->ap3->hide();
            ui->ap4->hide();
            ui->ap5->hide();
            ui->ap6->hide();
            ui->ap7->hide();
            ui->ap8->hide();
            ui->ap9->hide();

            ui->salveaza2->hide();
        //}

    }
    else{
        QMessageBox::warning(this,"Eroare","Datele introduse contin caractere nepermise!");
    }
}
