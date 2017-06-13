#ifndef CONTINUOUS_H
#define CONTINUOUS_H

#include <QDialog>

namespace Ui {
class continuous;
}

class continuous : public QDialog
{
    Q_OBJECT

public:
    explicit continuous(QWidget *parent = 0);
    ~continuous();

public slots:
    bool init();

private:
    Ui::continuous *ui;
};

#endif // CONTINUOUS_H
