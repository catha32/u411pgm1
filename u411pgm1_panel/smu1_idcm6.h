#ifndef SMU1_IDCM6_H
#define SMU1_IDCM6_H

#include <QDialog>

namespace Ui {
class smu1_idcm6;
}

class smu1_idcm6 : public QDialog
{
    Q_OBJECT

public:
    explicit smu1_idcm6(QWidget *parent = 0);
    ~smu1_idcm6();

public slots:
    bool init();

private:
    Ui::smu1_idcm6 *ui;
};

#endif // SMU1_IDCM6_H
