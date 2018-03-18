#ifndef NEWUSER_H
#define NEWUSER_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class NewUser;
}

class NewUser : public QDialog
{
    Q_OBJECT

public:
    explicit NewUser(QWidget *parent = 0);
    ~NewUser();

public:
    bool isEmpt(QString ch);
    bool isGood(QString ch);
    bool isGood2(QString ch);

private slots:
    void on_adIstoric_clicked();

    void on_adFiscal_clicked();

    void on_saveButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::NewUser *ui;
    QString filePath1,filePath2;
    QSqlDatabase db;
};

#endif // NEWUSER_H
