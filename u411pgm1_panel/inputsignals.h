#ifndef INPUTSIGNALS_H
#define INPUTSIGNALS_H

#include <QDialog>

namespace Ui {
class inputsignals;
}

class inputsignals : public QDialog
{
    Q_OBJECT

public:
    explicit inputsignals(QWidget *parent = 0);
    ~inputsignals();

private:
    Ui::inputsignals *ui;
};

#endif // INPUTSIGNALS_H
