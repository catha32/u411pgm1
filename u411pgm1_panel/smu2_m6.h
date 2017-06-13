#ifndef SMU2_M6_H
#define SMU2_M6_H

#include <QDialog>

namespace Ui {
class smu2_m6;
}

class smu2_m6 : public QDialog
{
    Q_OBJECT

public:
    explicit smu2_m6(QWidget *parent = 0);
    ~smu2_m6();

public slots:
    bool init();

private:
    Ui::smu2_m6 *ui;
};

#endif // SMU2_M6_H
