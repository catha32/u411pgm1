#ifndef PINHOLES6_H
#define PINHOLES6_H

#include <QWidget>

namespace Ui {
class pinholes6;
}

class pinholes6 : public QWidget
{
    Q_OBJECT

public:
    explicit pinholes6(QWidget *parent = 0);
    ~pinholes6();

public slots:
    bool init();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::pinholes6 *ui;
};

#endif // PINHOLES6_H
