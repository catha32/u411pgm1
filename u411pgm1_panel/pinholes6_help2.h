#ifndef PINHOLES6_HELP2_H
#define PINHOLES6_HELP2_H

#include <QDialog>

namespace Ui {
class pinholes6_help2;
}

class pinholes6_help2 : public QDialog
{
    Q_OBJECT

public:
    explicit pinholes6_help2(QWidget *parent = 0);
    ~pinholes6_help2();

private:
    Ui::pinholes6_help2 *ui;
};

#endif // PINHOLES6_HELP2_H
