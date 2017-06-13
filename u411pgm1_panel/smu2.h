#ifndef SMU2_H
#define SMU2_H

#include <QDialog>

namespace Ui {
class smu2;
}

class smu2 : public QDialog
{
    Q_OBJECT

public:
    explicit smu2(QWidget *parent = 0);
    ~smu2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::smu2 *ui;
};

#endif // SMU2_H
