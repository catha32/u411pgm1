#ifndef HEYDEMANN_H
#define HEYDEMANN_H

#include <QWidget>

// forward declarations
class QCAChannel;

namespace Ui {
class heydemann;
}

class heydemann : public QWidget
{
    Q_OBJECT

public:
    explicit heydemann(QWidget *parent = 0);
    ~heydemann();

public slots:
    bool init();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::heydemann *ui;
    QCAChannel* changeHey;

protected slots:
    void valueChangedSlot(double value);
};

#endif // HEYDEMANN_H
