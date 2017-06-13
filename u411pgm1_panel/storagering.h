#ifndef STORAGERING_H
#define STORAGERING_H

#include <QWidget>

// forward declarations
class QCAChannel;

namespace Ui {
class storagering;
}

class storagering : public QWidget
{
    Q_OBJECT

public:
    explicit storagering(QWidget *parent = 0);
    ~storagering();

private:
    Ui::storagering *ui;
    QCAChannel* changetSRState;

protected slots:
    void updateBG(double state);
};

#endif // STORAGERING_H
