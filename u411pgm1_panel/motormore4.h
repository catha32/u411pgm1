#ifndef MOTORMORE4_H
#define MOTORMORE4_H

#include <QDialog>

namespace Ui {
class motormore4;
}

class motormore4 : public QDialog
{
    Q_OBJECT

public:
    explicit motormore4(QWidget *parent = 0);
    ~motormore4();

private:
    Ui::motormore4 *ui;
};

#endif // MOTORMORE4_H
