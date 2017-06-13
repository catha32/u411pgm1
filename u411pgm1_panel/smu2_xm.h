#ifndef SMU2_XM_H
#define SMU2_XM_H

#include <QDialog>

namespace Ui {
class smu2_xm;
}

class smu2_xm : public QDialog
{
    Q_OBJECT

public:
    explicit smu2_xm(QWidget *parent = 0);
    ~smu2_xm();

public slots:
    bool init();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::smu2_xm *ui;
};

#endif // SMU2_XM_H
