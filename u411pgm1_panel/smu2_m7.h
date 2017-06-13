#ifndef SMU2_M7_H
#define SMU2_M7_H

#include <QDialog>

namespace Ui {
class smu2_m7;
}

class smu2_m7 : public QDialog
{
    Q_OBJECT

public:
    explicit smu2_m7(QWidget *parent = 0);
    ~smu2_m7();

public slots:
    bool init();

private:
    Ui::smu2_m7 *ui;
};

#endif // SMU2_M7_H
