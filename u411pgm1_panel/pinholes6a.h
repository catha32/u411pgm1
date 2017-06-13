#ifndef PINHOLES6A_H
#define PINHOLES6A_H

#include <QDialog>

namespace Ui {
class pinholes6a;
}

class pinholes6a : public QDialog
{
    Q_OBJECT

public:
    explicit pinholes6a(QWidget *parent = 0);
    ~pinholes6a();

private:
    Ui::pinholes6a *ui;
};

#endif // PINHOLES6A_H
