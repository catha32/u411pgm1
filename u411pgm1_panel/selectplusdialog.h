#ifndef SELECTPLUSDIALOG_H
#define SELECTPLUSDIALOG_H

#include <QDialog>

namespace Ui {
class selectplusdialog;
}

class selectplusdialog : public QDialog
{
    Q_OBJECT

public:
    explicit selectplusdialog(QWidget *parent = 0);
    ~selectplusdialog();

private:
    Ui::selectplusdialog *ui;
};

#endif // SELECTPLUSDIALOG_H
