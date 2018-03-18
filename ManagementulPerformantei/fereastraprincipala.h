#ifndef FEREASTRAPRINCIPALA_H
#define FEREASTRAPRINCIPALA_H

#include <QMainWindow>

namespace Ui {
class FereastraPrincipala;
}

class FereastraPrincipala : public QMainWindow
{
    Q_OBJECT

public:
    explicit FereastraPrincipala(QWidget *parent = 0);
    ~FereastraPrincipala();

private slots:
    void on_gestionare_clicked();

    void on_evaluare_clicked();

    void on_componente_clicked();

    void on_strategie_clicked();

    void on_obiective_clicked();

    void on_management_clicked();

    void on_indicatori_clicked();

    void on_imbunatatire_clicked();

    void on_raportare_clicked();

    void on_inapoi1_clicked();

    void on_inapoi2_clicked();

    void on_schimbauser_clicked();

private:
    Ui::FereastraPrincipala *ui;
};

#endif // FEREASTRAPRINCIPALA_H
