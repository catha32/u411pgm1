#ifndef SLITTTRANSLATIONHORIZONTALPANEL_H
#define SLITTTRANSLATIONHORIZONTALPANEL_H

#include <QWidget>

namespace Ui {
class slitttranslationhorizontalpanel;
}

class slitttranslationhorizontalpanel : public QWidget
{
    Q_OBJECT

public:
    explicit slitttranslationhorizontalpanel(QWidget *parent = 0);
    ~slitttranslationhorizontalpanel();

public slots:
    bool init();

private:
    Ui::slitttranslationhorizontalpanel *ui;
};

#endif // SLITTTRANSLATIONHORIZONTALPANEL_H
