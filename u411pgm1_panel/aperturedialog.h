#ifndef APERTUREDIALOG_H
#define APERTUREDIALOG_H

#include <QDialog>

namespace Ui {
class aperturedialog;
}

class aperturedialog : public QDialog
{
    Q_OBJECT

public:
    explicit aperturedialog(QWidget *parent = 0);
    ~aperturedialog();

private:
    Ui::aperturedialog *ui;
};

#endif // APERTUREDIALOG_H
