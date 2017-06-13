#ifndef SMU2_PEAXISM1_H
#define SMU2_PEAXISM1_H

#include <QDialog>

namespace Ui {
class smu2_peaxism1;
}

class smu2_peaxism1 : public QDialog
{
    Q_OBJECT

public:
    explicit smu2_peaxism1(QWidget *parent = 0);
    ~smu2_peaxism1();

public slots:
    bool init();

private:
    Ui::smu2_peaxism1 *ui;
};

#endif // SMU2_PEAXISM1_H
