#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include <QDialog>

namespace Ui {
class Individual;
}

class Individual : public QDialog
{
    Q_OBJECT

public:
    explicit Individual(QWidget *parent = 0);
    ~Individual();

private slots:
    void on_tableView_doubleClicked(const QModelIndex &index);

    void on_salveaza_2_clicked();

    void on_anuleaza_clicked();

    void on_salveaza_clicked();

private:
    Ui::Individual *ui;
};

#endif // INDIVIDUAL_H
