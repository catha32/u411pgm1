#ifndef FEEDBACK_H
#define FEEDBACK_H

#include <QDialog>

namespace Ui {
class feedback;
}

class feedback : public QDialog
{
    Q_OBJECT

public:
    explicit feedback(QWidget *parent = 0);
    ~feedback();

private slots:


private:
    Ui::feedback *ui;
};

#endif // FEEDBACK_H
