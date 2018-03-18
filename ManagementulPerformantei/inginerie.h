#ifndef INGINERIE_H
#define INGINERIE_H

#include <QDialog>

namespace Ui {
class Inginerie;
}

class Inginerie : public QDialog
{
    Q_OBJECT

public:
    explicit Inginerie(QWidget *parent = 0);
    ~Inginerie();

private:
    Ui::Inginerie *ui;
};

#endif // INGINERIE_H
