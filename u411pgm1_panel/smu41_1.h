#ifndef SMU41_1_H
#define SMU41_1_H

#include <QWidget>

namespace Ui {
class smu41_1;
}

class smu41_1 : public QWidget
{
    Q_OBJECT

public:
    explicit smu41_1(QWidget *parent = 0);
    ~smu41_1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::smu41_1 *ui;
};

#endif // SMU41_1_H
