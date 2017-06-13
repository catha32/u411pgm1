#ifndef UNDULATOR_H
#define UNDULATOR_H

// Qt includes
#include <QWidget>
#include <QProcess>
#include <QString>

// forward declarations
class QCAChannel;

#include <QWidget>

namespace Ui {
class undulator;
}

class undulator : public QWidget
{
    Q_OBJECT

public:
    explicit undulator(QWidget *parent = 0);
    ~undulator();

public slots:
    bool init();

private:
    Ui::undulator *ui;


};

#endif // UNDULATOR_H
