#ifndef SMU1_M1_H
#define SMU1_M1_H

#include <QDialog>

namespace Ui {
class smu1_m1;
}

class smu1_m1 : public QDialog
{
    Q_OBJECT

public:
    explicit smu1_m1(QWidget *parent = 0);
    ~smu1_m1();

public slots:
    bool init();


private:
    Ui::smu1_m1 *ui;
};

#endif // SMU1_M1_H
