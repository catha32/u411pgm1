#ifndef U411PGM1_H
#define U411PGM1_H

#include <QWidget>

// forward declarations
class QCAChannel;

namespace Ui {
class u411pgm1;
}

class u411pgm1 : public QWidget
{
    Q_OBJECT

public:
    explicit u411pgm1(QWidget *parent = 0);
    ~u411pgm1();

private slots:

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::u411pgm1 *ui;
    //QCAChannel* chanDebug;
    QCAChannel* chanTXM;

public slots:
    bool init();
};

#endif // U411PGM1_H
