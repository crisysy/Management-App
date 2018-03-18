#ifndef PERFORMANTA_H
#define PERFORMANTA_H

#include <QDialog>
#include <QtSql>
#include <QSqlQueryModel>

namespace Ui {
class Performanta;
}

class Performanta : public QDialog
{
    Q_OBJECT

public:
    explicit Performanta(QWidget *parent = 0);
    ~Performanta();

public:
    bool isEmpt(QString ch);

private slots:
    void on_adauga_clicked();

    void on_salveaza_clicked();

    void on_salveaza2_clicked();

private:
    Ui::Performanta *ui;
    QSqlDatabase db;
    QSqlQueryModel *model;
    int hardid,softid,trainingid,agentieid;
};

#endif // PERFORMANTA_H
