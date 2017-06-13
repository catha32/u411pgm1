#ifndef BANDWIDTH_H
#define BANDWIDTH_H

#include <QDialog>

namespace Ui {
class bandwidth;
}

class bandwidth : public QDialog
{
    Q_OBJECT

public:
    explicit bandwidth(QWidget *parent = 0);
    ~bandwidth();

private:
    Ui::bandwidth *ui;
};

#endif // BANDWIDTH_H
