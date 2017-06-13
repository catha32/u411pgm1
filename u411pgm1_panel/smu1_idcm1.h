#ifndef SMU1_IDCM1_H
#define SMU1_IDCM1_H

#include <QDialog>

namespace Ui {
class smu1_idcm1;
}

class smu1_idcm1 : public QDialog
{
    Q_OBJECT

public:
    explicit smu1_idcm1(QWidget *parent = 0);
    ~smu1_idcm1();

public slots:
    bool init();

private:
    Ui::smu1_idcm1 *ui;
};

#endif // SMU1_IDCM1_H
