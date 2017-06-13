#ifndef SMU1_PGM1M6_H
#define SMU1_PGM1M6_H

#include <QDialog>

namespace Ui {
class smu1_pgm1m6;
}

class smu1_pgm1m6 : public QDialog
{
    Q_OBJECT

public:
    explicit smu1_pgm1m6(QWidget *parent = 0);
    ~smu1_pgm1m6();

public slots:
    bool init();


private:
    Ui::smu1_pgm1m6 *ui;
};

#endif // SMU1_PGM1M6_H
