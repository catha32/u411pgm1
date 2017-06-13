#ifndef MOTORMORE2_H
#define MOTORMORE2_H

#include <QDialog>

namespace Ui {
class motormore2;
}

class motormore2 : public QDialog
{
    Q_OBJECT

public:
    explicit motormore2(QWidget *parent = 0);
    ~motormore2();

private:
    Ui::motormore2 *ui;
};

#endif // MOTORMORE2_H
