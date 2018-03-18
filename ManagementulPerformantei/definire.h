#ifndef DEFINIRE_H
#define DEFINIRE_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class Definire;
}

class Definire : public QDialog
{
    Q_OBJECT

public:
    explicit Definire(QWidget *parent = 0);
    ~Definire();

private slots:
    void on_salveaza_clicked();

    void on_anuleaza_clicked();

    void on_inchide_clicked();

    void on_misiuneEdit_textEdited(const QString &arg1);

    void on_misiuneEdit_cursorPositionChanged(int arg1, int arg2);

    void on_viziuneEdit_textEdited(const QString &arg1);

    void on_viziuneEdit_cursorPositionChanged(int arg1, int arg2);

    void on_valoriEdit_textEdited(const QString &arg1);

    void on_valoriEdit_cursorPositionChanged(int arg1, int arg2);

    void on_strEdit_textEdited(const QString &arg1);

    void on_strEdit_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::Definire *ui;
    QSqlDatabase db;
    QSqlQueryModel *model;
};

#endif // DEFINIRE_H
