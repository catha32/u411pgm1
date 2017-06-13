#ifndef SMU_H
#define SMU_H

#include <QDialog>

namespace Ui {
class smu;
}

class smu : public QDialog
{
    Q_OBJECT

public:
    explicit smu(QWidget *parent = 0);
    ~smu();

private:
    Ui::smu *ui;
};

#endif // SMU_H
