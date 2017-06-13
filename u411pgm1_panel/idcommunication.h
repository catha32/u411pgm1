#ifndef IDCOMMUNICATION_H
#define IDCOMMUNICATION_H

#include <QWidget>

namespace Ui {
class idcommunication;
}

class idcommunication : public QWidget
{
    Q_OBJECT

public:
    explicit idcommunication(QWidget *parent = 0);
    ~idcommunication();

private slots:
    void on_pushButton_clicked();

private:
    Ui::idcommunication *ui;
};

#endif // IDCOMMUNICATION_H
