#ifndef SMU2_PEAXISM5_H
#define SMU2_PEAXISM5_H

#include <QDialog>

namespace Ui {
class smu2_peaxism5;
}

class smu2_peaxism5 : public QDialog
{
    Q_OBJECT

public:
    explicit smu2_peaxism5(QWidget *parent = 0);
    ~smu2_peaxism5();

public slots:
    bool init();

private:
    Ui::smu2_peaxism5 *ui;
};

#endif // SMU2_PEAXISM5_H
