#ifndef BUGETARE_H
#define BUGETARE_H

#include <QDialog>

namespace Ui {
class Bugetare;
}

class Bugetare : public QDialog
{
    Q_OBJECT

public:
    explicit Bugetare(QWidget *parent = 0);
    ~Bugetare();

private slots:
    void on_addbuget_clicked();

    void on_addproiect_clicked();

    void on_iesire_clicked();

    void on_salveaza_clicked();

    void on_anuleaza_clicked();

private:
    Ui::Bugetare *ui;
};

#endif // BUGETARE_H
