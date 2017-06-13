#ifndef SELECTDIALOG_H
#define SELECTDIALOG_H

#include <QDialog>

namespace Ui {
class selectDialog;
}

class selectDialog : public QDialog
{
    Q_OBJECT

public:
    explicit selectDialog(QWidget *parent = 0);
    ~selectDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::selectDialog *ui;
};

#endif // SELECTDIALOG_H
