#ifndef PROCESE_H
#define PROCESE_H

#include <QDialog>

namespace Ui {
class Procese;
}

class Procese : public QDialog
{
    Q_OBJECT

public:
    explicit Procese(QWidget *parent = 0);
    ~Procese();

private slots:
    void on_addproces_clicked();

    void on_iesire_clicked();

    void on_salveaza_clicked();

    void on_anuleaza_clicked();

private:
    Ui::Procese *ui;
};

#endif // PROCESE_H
