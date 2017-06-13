#ifndef U41IT3R_H
#define U41IT3R_H

#include <QDialog>

namespace Ui {
class u41it3r;
}

class u41it3r : public QDialog
{
    Q_OBJECT

public:
    explicit u41it3r(QWidget *parent = 0);
    ~u41it3r();

private:
    Ui::u41it3r *ui;
};

#endif // U41IT3R_H
