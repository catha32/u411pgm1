#ifndef PINHOLES6_MOTOR_H
#define PINHOLES6_MOTOR_H

#include <QDialog>

namespace Ui {
class pinholes6_motor;
}

class pinholes6_motor : public QDialog
{
    Q_OBJECT

public:
    explicit pinholes6_motor(QWidget *parent = 0);
    ~pinholes6_motor();

private:
    Ui::pinholes6_motor *ui;
};

#endif // PINHOLES6_MOTOR_H
