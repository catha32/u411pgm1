#ifndef SMU2_PEAXISM3_H
#define SMU2_PEAXISM3_H

#include <QDialog>

namespace Ui {
class smu2_peaxism3;
}

class smu2_peaxism3 : public QDialog
{
    Q_OBJECT

public:
    explicit smu2_peaxism3(QWidget *parent = 0);
    ~smu2_peaxism3();

public slots:
    bool init();

private:
    Ui::smu2_peaxism3 *ui;
};

#endif // SMU2_PEAXISM3_H
