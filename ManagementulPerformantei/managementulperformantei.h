#ifndef MANAGEMENTULPERFORMANTEI_H
#define MANAGEMENTULPERFORMANTEI_H

#include <QMainWindow>
#include <QtSql>

namespace Ui {
class ManagementulPerformantei;
}

class ManagementulPerformantei : public QMainWindow
{
    Q_OBJECT

public:
    explicit ManagementulPerformantei(QWidget *parent = 0);
    ~ManagementulPerformantei();

private slots:
    void on_startButton_clicked();

    void on_despreButton_clicked();

    void on_inapoiButton_clicked();

    void on_logButton_clicked();

    void on_newButton_clicked();

private:
    Ui::ManagementulPerformantei *ui;
    QSqlDatabase db;
};

#endif // MANAGEMENTULPERFORMANTEI_H
