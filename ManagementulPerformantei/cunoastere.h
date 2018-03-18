#ifndef CUNOASTERE_H
#define CUNOASTERE_H

#include <QDialog>

namespace Ui {
class Cunoastere;
}

class Cunoastere : public QDialog
{
    Q_OBJECT

public:
    explicit Cunoastere(QWidget *parent = 0);
    ~Cunoastere();

private slots:
    void on_add_clicked();

    void on_iesire_clicked();

    void on_salveaza_clicked();

    void on_anuleaza_clicked();

    void on_document_clicked();

private:
    Ui::Cunoastere *ui;
    QString filePath;
};

#endif // CUNOASTERE_H
