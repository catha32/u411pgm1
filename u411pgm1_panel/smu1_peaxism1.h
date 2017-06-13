#ifndef SMU1_PEAXISM1_H
#define SMU1_PEAXISM1_H

#include <QDialog>

namespace Ui {
class smu1_peaxism1;
}

class smu1_peaxism1 : public QDialog
{
    Q_OBJECT

public:
    explicit smu1_peaxism1(QWidget *parent = 0);
    ~smu1_peaxism1();

private:
    Ui::smu1_peaxism1 *ui;
};

#endif // SMU1_PEAXISM1_H
