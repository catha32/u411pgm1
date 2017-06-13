#ifndef CENTRAL_H
#define CENTRAL_H

#include <QWidget>
#include <QProcess>
#include <QString>

namespace Ui {
class Central;
}

class Central : public QWidget
{
    Q_OBJECT

public:
    explicit Central(QWidget *parent = 0);
    ~Central();

public slots:
    void textrecieved(QString text);

private:
    Ui::Central *ui;
};

#endif // CENTRAL_H
