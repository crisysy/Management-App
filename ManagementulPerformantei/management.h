#ifndef MANAGEMENT_H
#define MANAGEMENT_H

#include <QMainWindow>

namespace Ui {
class Management;
}

class Management : public QMainWindow
{
    Q_OBJECT

public:
    explicit Management(QWidget *parent = 0);
    ~Management();

private slots:
    void on_inapoi_clicked();

    void on_riscuri_clicked();

    void on_cunoastere_clicked();

    void on_co2_clicked();

    void on_inginerie_clicked();

    void on_it_clicked();

private:
    Ui::Management *ui;
};

#endif // MANAGEMENT_H
