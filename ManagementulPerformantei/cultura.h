#ifndef CULTURA_H
#define CULTURA_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class Cultura;
}

class Cultura : public QDialog
{
    Q_OBJECT

public:

    explicit Cultura(QWidget *parent = 0);
    ~Cultura();

private slots:
    void on_instintare_clicked();

    void on_salveaza_clicked();

    void on_salveaza2_clicked();

    void on_comboBox_currentIndexChanged(const QString &arg1);

private:
    Ui::Cultura *ui;
    QSqlDatabase db;
    QString aux,aux2;
    QString l1,l2;
    int SelectedEmployeeID;
};

#endif // CULTURA_H
