#ifndef RISCURI_H
#define RISCURI_H

#include <QDialog>

namespace Ui {
class Riscuri;
}

class Riscuri : public QDialog
{
    Q_OBJECT

public:
    explicit Riscuri(QWidget *parent = 0);
    ~Riscuri();

private slots:
    void on_addrisc_clicked();

    void on_aclient_clicked();

    void on_rfin_clicked();

    void on_iesire_clicked();

    void on_salveaza1_clicked();

    void on_anuleaza1_clicked();

    void on_salveaza2_clicked();

    void on_anuleaza2_clicked();

private:
    Ui::Riscuri *ui;
};

#endif // RISCURI_H
