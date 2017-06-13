#ifndef SLITUNIT_H
#define SLITUNIT_H

#include <QWidget>
#include <QtCore>
#include <QtGui>
#include <QGraphicsScene>
#include "mysquare.h"

namespace Ui {
class slitunit;
}

class slitunit : public QWidget
{
    Q_OBJECT

public:
    explicit slitunit(QWidget *parent = 0);
    ~slitunit();

private slots:
    void on_pushButton_clicked();

private:
    Ui::slitunit *ui;
    //QGraphicsScene *scene;
    MySquare *square;


};

#endif // SLITUNIT_H
