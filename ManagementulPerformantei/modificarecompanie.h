#ifndef MODIFICARECOMPANIE_H
#define MODIFICARECOMPANIE_H

#include <QDialog>

namespace Ui {
class ModificareCompanie;
}

class ModificareCompanie : public QDialog
{
    Q_OBJECT

public:
    explicit ModificareCompanie(QWidget *parent = 0);
    ~ModificareCompanie();

private slots:
    void on_saveButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::ModificareCompanie *ui;
};

#endif // MODIFICARECOMPANIE_H
