#ifndef IDPARAMETER_H
#define IDPARAMETER_H

#include <QWidget>

// forward declarations
class QCAChannel;

namespace Ui {
class idparameter;
}

class idparameter : public QWidget
{
    Q_OBJECT

public:
    explicit idparameter(QWidget *parent = 0);
    ~idparameter();

private:
    Ui::idparameter *ui;
    QCAChannel* chanDebug;


public slots:
    //bool init();
    bool init1();
};

#endif // IDPARAMETER_H
