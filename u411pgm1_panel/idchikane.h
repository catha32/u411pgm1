#ifndef IDCHIKANE_H
#define IDCHIKANE_H

#include <QDialog>

namespace Ui {
class idchikane;
}

class idchikane : public QDialog
{
    Q_OBJECT

public:
    explicit idchikane(QWidget *parent = 0);
    ~idchikane();

private:
    Ui::idchikane *ui;
};

#endif // IDCHIKANE_H
