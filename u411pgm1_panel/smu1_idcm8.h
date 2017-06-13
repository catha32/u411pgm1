#ifndef SMU1_IDCM8_H
#define SMU1_IDCM8_H

#include <QDialog>

namespace Ui {
class smu1_idcm8;
}

class smu1_idcm8 : public QDialog
{
    Q_OBJECT

public:
    explicit smu1_idcm8(QWidget *parent = 0);
    ~smu1_idcm8();

public slots:
    bool init();

private:
    Ui::smu1_idcm8 *ui;
};

#endif // SMU1_IDCM8_H
