#ifndef RESPONSABIL_H
#define RESPONSABIL_H

#include <QDialog>

namespace Ui {
class Responsabil;
}

class Responsabil : public QDialog
{
    Q_OBJECT

public:
    explicit Responsabil(QWidget *parent = 0);
    ~Responsabil();

private:
    Ui::Responsabil *ui;
};

#endif // RESPONSABIL_H
