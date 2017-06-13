#ifndef SMU2_PEAXISM2_H
#define SMU2_PEAXISM2_H

#include <QDialog>

namespace Ui {
class smu2_peaxism2;
}

class smu2_peaxism2 : public QDialog
{
    Q_OBJECT

public:
    explicit smu2_peaxism2(QWidget *parent = 0);
    ~smu2_peaxism2();

public slots:
    bool init();

private:
    Ui::smu2_peaxism2 *ui;
};

#endif // SMU2_PEAXISM2_H
