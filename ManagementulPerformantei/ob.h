#ifndef OB_H
#define OB_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class Ob;
}

class Ob : public QDialog
{
    Q_OBJECT

public:
    explicit Ob(QWidget *parent = 0);
    ~Ob();

private slots:
    void on_addobstr_clicked();

    void on_addobproces_clicked();

    void on_addobagentie_clicked();

    void on_iesire_clicked();

    void on_salveaza_clicked();

    void on_anuleaza_clicked();

private:
    Ui::Ob *ui;
    QSqlDatabase db;
};

#endif // OB_H
