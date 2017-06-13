#include "slitunit_test.h"
#include "ui_slitunit_test.h"

#include "qcachannel.h"
#include "slitdialog.h"

slitunit_test::slitunit_test(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::slitunit_test)
{
    ui->setupUi(this);


}

slitunit_test::~slitunit_test()
{
    delete ui;
}

void slitunit_test::on_pushButton_5_clicked()
{
    slitDialog slitdialog;
    slitdialog.setModal(true);
    slitdialog.exec();
}
