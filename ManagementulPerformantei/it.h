#ifndef IT_H
#define IT_H

#include <QDialog>

namespace Ui {
class It;
}

class It : public QDialog
{
    Q_OBJECT

public:
    explicit It(QWidget *parent = 0);
    ~It();

private:
    Ui::It *ui;
};

#endif // IT_H
