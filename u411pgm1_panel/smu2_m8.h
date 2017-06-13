#ifndef SMU2_M8_H
#define SMU2_M8_H

#include <QDialog>

namespace Ui {
class smu2_m8;
}

class smu2_m8 : public QDialog
{
    Q_OBJECT

public:
    explicit smu2_m8(QWidget *parent = 0);
    ~smu2_m8();

public slots:
    bool init();


private:
    Ui::smu2_m8 *ui;
};

#endif // SMU2_M8_H
