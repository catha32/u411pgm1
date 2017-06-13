#ifndef SMU41_2_H
#define SMU41_2_H

#include <QWidget>

namespace Ui {
class smu41_2;
}

class smu41_2 : public QWidget
{
    Q_OBJECT

public:
    explicit smu41_2(QWidget *parent = 0);
    ~smu41_2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::smu41_2 *ui;
};

#endif // SMU41_2_H
