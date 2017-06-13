#ifndef SMU1_PGM1_H
#define SMU1_PGM1_H

#include <QDialog>

namespace Ui {
class smu1_pgm1;
}

class smu1_pgm1 : public QDialog
{
    Q_OBJECT

public:
    explicit smu1_pgm1(QWidget *parent = 0);
    ~smu1_pgm1();

public slots:
    bool init();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::smu1_pgm1 *ui;
};

#endif // SMU1_PGM1_H
