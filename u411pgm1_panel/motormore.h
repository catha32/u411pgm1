#ifndef MOTORMORE_H
#define MOTORMORE_H

#include <QDialog>

namespace Ui {
class motormore;
}

class motormore : public QDialog
{
    Q_OBJECT

public:
    explicit motormore(QWidget *parent = 0);
    ~motormore();

private:
    Ui::motormore *ui;
};

#endif // MOTORMORE_H
