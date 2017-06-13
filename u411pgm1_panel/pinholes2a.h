#ifndef PINHOLES2A_H
#define PINHOLES2A_H

#include <QDialog>

namespace Ui {
class pinholes2a;
}

class pinholes2a : public QDialog
{
    Q_OBJECT

public:
    explicit pinholes2a(QWidget *parent = 0);
    ~pinholes2a();

private:
    Ui::pinholes2a *ui;
};

#endif // PINHOLES2A_H
