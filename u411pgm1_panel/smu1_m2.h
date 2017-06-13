#ifndef SMU1_M2_H
#define SMU1_M2_H

#include <QDialog>

namespace Ui {
class smu1_m2;
}

class smu1_m2 : public QDialog
{
    Q_OBJECT

public:
    explicit smu1_m2(QWidget *parent = 0);
    ~smu1_m2();

public slots:
    bool init();


private:
    Ui::smu1_m2 *ui;
};

#endif // SMU1_M2_H
