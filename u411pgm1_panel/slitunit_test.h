#ifndef SLITUNIT_TEST_H
#define SLITUNIT_TEST_H

#include <QWidget>

namespace Ui {
class slitunit_test;
}

class slitunit_test : public QWidget
{
    Q_OBJECT

public:
    explicit slitunit_test(QWidget *parent = 0);
    ~slitunit_test();

private slots:
    void on_pushButton_5_clicked();

private:
    Ui::slitunit_test *ui;
};

#endif // SLITUNIT_TEST_H
