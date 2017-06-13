#ifndef SMU1_IDCM9_H
#define SMU1_IDCM9_H

#include <QDialog>

namespace Ui {
class smu1_idcm9;
}

class smu1_idcm9 : public QDialog
{
    Q_OBJECT

public:
    explicit smu1_idcm9(QWidget *parent = 0);
    ~smu1_idcm9();

public slots:
    bool init();

private:
    Ui::smu1_idcm9 *ui;
};

#endif // SMU1_IDCM9_H
