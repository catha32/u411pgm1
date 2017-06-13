#ifndef PINHOLES6_MOTOR2_H
#define PINHOLES6_MOTOR2_H

#include <QDialog>

namespace Ui {
class pinholes6_motor2;
}

class pinholes6_motor2 : public QDialog
{
    Q_OBJECT

public:
    explicit pinholes6_motor2(QWidget *parent = 0);
    ~pinholes6_motor2();

private:
    Ui::pinholes6_motor2 *ui;
};

#endif // PINHOLES6_MOTOR2_H
