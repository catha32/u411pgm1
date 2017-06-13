#ifndef SMU1_PGM1M7_H
#define SMU1_PGM1M7_H

#include <QDialog>

namespace Ui {
class smu1_pgm1m7;
}

class smu1_pgm1m7 : public QDialog
{
    Q_OBJECT

public:
    explicit smu1_pgm1m7(QWidget *parent = 0);
    ~smu1_pgm1m7();

public slots:
    bool init();


private:
    Ui::smu1_pgm1m7 *ui;
};

#endif // SMU1_PGM1M7_H
