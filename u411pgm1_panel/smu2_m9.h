#ifndef SMU2_M9_H
#define SMU2_M9_H

#include <QDialog>

namespace Ui {
class smu2_m9;
}

class smu2_m9 : public QDialog
{
    Q_OBJECT

public:
    explicit smu2_m9(QWidget *parent = 0);
    ~smu2_m9();

public slots:
    bool init();

private:
    Ui::smu2_m9 *ui;
};

#endif // SMU2_M9_H
