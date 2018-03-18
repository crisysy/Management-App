#ifndef DEFINIREASTRATEGIEI_H
#define DEFINIREASTRATEGIEI_H

#include <QMainWindow>

namespace Ui {
class DefinireaStrategiei;
}

class DefinireaStrategiei : public QMainWindow
{
    Q_OBJECT

public:
    explicit DefinireaStrategiei(QWidget *parent = 0);
    ~DefinireaStrategiei();

private slots:
    void on_inapoi_clicked();

    void on_definire_clicked();

    void on_performanta_clicked();

    void on_cultura_clicked();

    void on_responsabil_clicked();

    void on_bugetare_clicked();

private:
    Ui::DefinireaStrategiei *ui;
};

#endif // DEFINIREASTRATEGIEI_H
