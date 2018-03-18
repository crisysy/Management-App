#ifndef CF_H
#define CF_H

#include <QDialog>

namespace Ui {
class Cf;
}

class Cf : public QDialog
{
    Q_OBJECT

public:
    explicit Cf(QWidget *parent = 0);
    ~Cf();

private slots:
    void on_showc_clicked();

    void on_showf_clicked();

    void on_salveaza_clicked();

    void on_inchide_clicked();

    void on_anuleaza_clicked();

private:
    Ui::Cf *ui;
};

#endif // CF_H
