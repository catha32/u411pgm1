#ifndef SMU2_M1_H
#define SMU2_M1_H

#include <QDialog>

namespace Ui {
class smu2_m1;
}

class smu2_m1 : public QDialog
{
    Q_OBJECT

public:
    explicit smu2_m1(QWidget *parent = 0);
    ~smu2_m1();

public slots:
    bool init();

private:
    Ui::smu2_m1 *ui;
};

#endif // SMU2_M1_H
