#ifndef SMU1_PGM1M8_H
#define SMU1_PGM1M8_H

#include <QDialog>

namespace Ui {
class smu1_pgm1m8;
}

class smu1_pgm1m8 : public QDialog
{
    Q_OBJECT

public:
    explicit smu1_pgm1m8(QWidget *parent = 0);
    ~smu1_pgm1m8();

public slots:
    bool init();


private:
    Ui::smu1_pgm1m8 *ui;
};

#endif // SMU1_PGM1M8_H
