#ifndef SMU1_IDA_H
#define SMU1_IDA_H

#include <QDialog>

namespace Ui {
class smu1_ida;
}

class smu1_ida : public QDialog
{
    Q_OBJECT

public:
    explicit smu1_ida(QWidget *parent = 0);
    ~smu1_ida();

public slots:
    bool init();

private slots:
    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_20_clicked();

private:
    Ui::smu1_ida *ui;
};

#endif // SMU1_IDA_H
