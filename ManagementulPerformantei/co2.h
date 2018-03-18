#ifndef CO2_H
#define CO2_H

#include <QDialog>

namespace Ui {
class Co2;
}

class Co2 : public QDialog
{
    Q_OBJECT

public:
    explicit Co2(QWidget *parent = 0);
    ~Co2();

private:
    Ui::Co2 *ui;
};

#endif // CO2_H
