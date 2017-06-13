#ifndef SLITUNITTRANSLATION_H
#define SLITUNITTRANSLATION_H

#include <QWidget>

namespace Ui {
class slitunittranslation;
}

class slitunittranslation : public QWidget
{
    Q_OBJECT

public:
    explicit slitunittranslation(QWidget *parent = 0);
    ~slitunittranslation();

public slots:
    bool init();

private:
    Ui::slitunittranslation *ui;
};

#endif // SLITUNITTRANSLATION_H
