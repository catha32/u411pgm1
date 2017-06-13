#ifndef PINHOLES6_HELP_H
#define PINHOLES6_HELP_H

#include <QDialog>

namespace Ui {
class pinholes6_help;
}

class pinholes6_help : public QDialog
{
    Q_OBJECT

public:
    explicit pinholes6_help(QWidget *parent = 0);
    ~pinholes6_help();

private:
    Ui::pinholes6_help *ui;
};

#endif // PINHOLES6_HELP_H
