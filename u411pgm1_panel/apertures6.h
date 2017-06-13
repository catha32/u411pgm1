#ifndef APERTURES6_H
#define APERTURES6_H

#include <QDialog>

namespace Ui {
class apertures6;
}

class apertures6 : public QDialog
{
    Q_OBJECT

public:
    explicit apertures6(QWidget *parent = 0);
    ~apertures6();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::apertures6 *ui;
};

#endif // APERTURES6_H
