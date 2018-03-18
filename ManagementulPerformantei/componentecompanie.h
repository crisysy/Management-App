#ifndef COMPONENTECOMPANIE_H
#define COMPONENTECOMPANIE_H

#include <QMainWindow>

namespace Ui {
class ComponenteCompanie;
}

class ComponenteCompanie : public QMainWindow
{
    Q_OBJECT

public:
    explicit ComponenteCompanie(QWidget *parent = 0);
    ~ComponenteCompanie();

private slots:
    void on_inapoi_clicked();

    void on_showagentii_clicked();

    void on_addagentie_clicked();

    void on_modifica_clicked();

private:
    Ui::ComponenteCompanie *ui;
};

#endif // COMPONENTECOMPANIE_H
