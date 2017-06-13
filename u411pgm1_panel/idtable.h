#ifndef IDTABLE_H
#define IDTABLE_H


#include <qwt_compat.h>

// forward declarations
class QCAChannel;


//class QVector;

#include <QWidget>
#include <QFile>

namespace Ui {
class IdTable;
}

class IdTable : public QWidget
{
    Q_OBJECT

public:
    explicit IdTable(QWidget *parent = 0);
    ~IdTable();

private slots:
    void drawIDPlot(int );

    //void on_comboBox_2_activated(const QString &arg1);

    void on_pushButton_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_pushButton_2_clicked();

private:
    Ui::IdTable *ui;

    QFile *file2;
    //QCAChannel *chanX;
    QCAChannel *chanY;

};

#endif // IDTABLE_H
