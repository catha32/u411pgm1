#ifndef HEYDEMANNDATA_H
#define HEYDEMANNDATA_H

#include <QDialog>

#include <qwt_compat.h>

// forward declarations
class QCAChannel;

namespace Ui {
class heydemanndata;
}

class heydemanndata : public QDialog
{
    Q_OBJECT

public:
    explicit heydemanndata(QWidget *parent = 0);
    ~heydemanndata();

private:
    Ui::heydemanndata *ui;
    QCAChannel *chanX;
    QCAChannel *chanY;
};

#endif // HEYDEMANNDATA_H
