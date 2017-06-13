#ifndef IDEXPERT_H
#define IDEXPERT_H

#include <QWidget>

namespace Ui {
class IdExpert;
}

class IdExpert : public QWidget
{
    Q_OBJECT

public:
    explicit IdExpert(QWidget *parent = 0);
    ~IdExpert();

public slots:
    bool init();


private:
    Ui::IdExpert *ui;
};

#endif // IDEXPERT_H
