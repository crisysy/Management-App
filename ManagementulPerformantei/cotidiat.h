#ifndef COTIDIAT_H
#define COTIDIAT_H

#include <QDialog>

namespace Ui {
class Cotidiat;
}

class Cotidiat : public QDialog
{
    Q_OBJECT

public:
    explicit Cotidiat(QWidget *parent = 0);
    ~Cotidiat();

private slots:
    void on_salveaza_clicked();

    void on_salveaza_2_clicked();

private:
    Ui::Cotidiat *ui;
};

#endif // COTIDIAT_H
