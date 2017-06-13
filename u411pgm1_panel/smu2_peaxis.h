#ifndef SMU2_PEAXIS_H
#define SMU2_PEAXIS_H

#include <QDialog>

namespace Ui {
class smu2_peaxis;
}

class smu2_peaxis : public QDialog
{
    Q_OBJECT

public:
    explicit smu2_peaxis(QWidget *parent = 0);
    ~smu2_peaxis();

public slots:
    bool init();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::smu2_peaxis *ui;
};

#endif // SMU2_PEAXIS_H
