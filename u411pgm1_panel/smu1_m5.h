#ifndef SMU1_M5_H
#define SMU1_M5_H

#include <QDialog>

namespace Ui {
class smu1_m5;
}

class smu1_m5 : public QDialog
{
    Q_OBJECT

public:
    explicit smu1_m5(QWidget *parent = 0);
    ~smu1_m5();


public slots:
    bool init();

private:
    Ui::smu1_m5 *ui;
};

#endif // SMU1_M5_H
