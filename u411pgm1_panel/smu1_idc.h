#ifndef SMU1_IDC_H
#define SMU1_IDC_H

#include <QDialog>

namespace Ui {
class smu1_idc;
}

class smu1_idc : public QDialog
{
    Q_OBJECT

public:
    explicit smu1_idc(QWidget *parent = 0);
    ~smu1_idc();

public slots:
    bool init();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::smu1_idc *ui;
};

#endif // SMU1_IDC_H
