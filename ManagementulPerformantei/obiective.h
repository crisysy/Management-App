#ifndef OBIECTIVE_H
#define OBIECTIVE_H

#include <QMainWindow>

namespace Ui {
class Obiective;
}

class Obiective : public QMainWindow
{
    Q_OBJECT

public:
    explicit Obiective(QWidget *parent = 0);
    ~Obiective();

private slots:
    void on_inapoi_clicked();

    void on_procese_clicked();

    void on_ob_clicked();

    void on_cf_clicked();

    void on_individ_clicked();

    void on_cotidian_clicked();

private:
    Ui::Obiective *ui;
};

#endif // OBIECTIVE_H
