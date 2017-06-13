#ifndef SMU1_M3_H
#define SMU1_M3_H

#include <QDialog>

namespace Ui {
class smu1_m3;
}

class smu1_m3 : public QDialog
{
    Q_OBJECT

public:
    explicit smu1_m3(QWidget *parent = 0);
    ~smu1_m3();


public slots:
    bool init();

private:
    Ui::smu1_m3 *ui;
};

#endif // SMU1_M3_H
