#ifndef SMU1_PGM1M9_H
#define SMU1_PGM1M9_H

#include <QDialog>

namespace Ui {
class smu1_pgm1m9;
}

class smu1_pgm1m9 : public QDialog
{
    Q_OBJECT

public:
    explicit smu1_pgm1m9(QWidget *parent = 0);
    ~smu1_pgm1m9();

public slots:
    bool init();


private:
    Ui::smu1_pgm1m9 *ui;
};

#endif // SMU1_PGM1M9_H
