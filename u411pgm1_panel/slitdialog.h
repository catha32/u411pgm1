#ifndef SLITDIALOG_H
#define SLITDIALOG_H

#include <QDialog>

namespace Ui {
class slitDialog;
}

class slitDialog : public QDialog
{
    Q_OBJECT

public:
    explicit slitDialog(QWidget *parent = 0);
    ~slitDialog();

private slots:


private:
    Ui::slitDialog *ui;
};

#endif // SLITDIALOG_H
