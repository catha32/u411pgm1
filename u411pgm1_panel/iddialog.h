#ifndef IDDIALOG_H
#define IDDIALOG_H

#include <QDialog>

namespace Ui {
class idDialog;
}

class idDialog : public QDialog
{
    Q_OBJECT

public:
    explicit idDialog(QWidget *parent = 0);
    ~idDialog();

private:
    Ui::idDialog *ui;
};

#endif // IDDIALOG_H
