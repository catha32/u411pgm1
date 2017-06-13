#ifndef SMU1_M4_H
#define SMU1_M4_H

#include <QDialog>

namespace Ui {
class smu1_m4;
}

class smu1_m4 : public QDialog
{
    Q_OBJECT

public:
    explicit smu1_m4(QWidget *parent = 0);
    ~smu1_m4();

public slots:
    bool init();


private:
    Ui::smu1_m4 *ui;
};

#endif // SMU1_M4_H
