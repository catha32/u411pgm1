#ifndef MOTORMORE3_H
#define MOTORMORE3_H

#include <QDialog>

namespace Ui {
class motormore3;
}

class motormore3 : public QDialog
{
    Q_OBJECT

public:
    explicit motormore3(QWidget *parent = 0);
    ~motormore3();

private:
    Ui::motormore3 *ui;
};

#endif // MOTORMORE3_H
