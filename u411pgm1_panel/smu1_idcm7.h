#ifndef SMU1_IDCM7_H
#define SMU1_IDCM7_H

#include <QDialog>

namespace Ui {
class smu1_idcm7;
}

class smu1_idcm7 : public QDialog
{
    Q_OBJECT

public:
    explicit smu1_idcm7(QWidget *parent = 0);
    ~smu1_idcm7();

public slots:
    bool init();

private:
    Ui::smu1_idcm7 *ui;
};

#endif // SMU1_IDCM7_H
