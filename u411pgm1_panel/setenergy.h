#ifndef SETENERGY_H
#define SETENERGY_H

#include <QDialog>

namespace Ui {
class setenergy;
}

class setenergy : public QDialog
{
    Q_OBJECT

public:
    explicit setenergy(QWidget *parent = 0);
    ~setenergy();

public slots:
    bool init();

private:
    Ui::setenergy *ui;
};

#endif // SETENERGY_H
