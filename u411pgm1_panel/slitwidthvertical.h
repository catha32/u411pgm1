#ifndef SLITWIDTHVERTICAL_H
#define SLITWIDTHVERTICAL_H

#include <QWidget>


namespace Ui {
class slitwidthvertical;
}

class slitwidthvertical : public QWidget
{
    Q_OBJECT

public:
    explicit slitwidthvertical(QWidget *parent = 0);
    ~slitwidthvertical();

public slots:
    bool init();

private slots:
   // void on_pushButton_5_clicked();


private:
    Ui::slitwidthvertical *ui;

};

#endif // SLITWIDTHVERTICAL_H
