#ifndef SMU2_PEAXISM4_H
#define SMU2_PEAXISM4_H

#include <QDialog>

namespace Ui {
class smu2_peaxism4;
}

class smu2_peaxism4 : public QDialog
{
    Q_OBJECT

public:
    explicit smu2_peaxism4(QWidget *parent = 0);
    ~smu2_peaxism4();

public slots:
    bool init();

private:
    Ui::smu2_peaxism4 *ui;
};

#endif // SMU2_PEAXISM4_H
