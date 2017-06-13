#ifndef SLITWIDTHHORIZONTAL_H
#define SLITWIDTHHORIZONTAL_H

#include <QWidget>

namespace Ui {
class slitwidthhorizontal;
}

class slitwidthhorizontal : public QWidget
{
    Q_OBJECT

public:
    explicit slitwidthhorizontal(QWidget *parent = 0);
    ~slitwidthhorizontal();

public slots:
    bool init();

private:
    Ui::slitwidthhorizontal *ui;
};

#endif // SLITWIDTHHORIZONTAL_H
