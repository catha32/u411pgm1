#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDockWidget>
#include <QInputDialog>
#include <QMessageBox>
#include <QFileDialog>
#include <QTextStream>
#include <QString>
#include <QFile>
#include <QTextEdit>
#include <QSettings>
#include <QStandardItemModel>
#include <QFileDevice>


#include "qcachannel.h"
#include "dialog.h"
#include "secdialog.h"
#include "iddialog.h"
#include "aperturedialog.h"

#include "storagering.h"
#include "undulator.h"
#include "slitttranslationhorizontalpanel.h"
#include "slitunittranslation.h"
#include "slitwidthhorizontal.h"
#include "slitwidthvertical.h"
#include "u411pgm1.h"
#include "idtable.h"
#include "idparameter.h"
#include "idcommunication.h"
#include "slitunit.h"
#include "central.h"
#include "angles.h"
#include "idexpert.h"
#include "heydemann.h"
#include "setenergy.h"
#include "pinholes6.h"
#include "slitunit_test.h"
#include "smu41_2.h"
#include "smu41_1.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("U41-L06-PGM1-XM");

    //setCurrentFile(QString());

    //central = new QWidget();
    //Central *central = new Central();
    //this->setCentralWidget(central);


    /*setCorner(Qt::TopLeftCorner, Qt::LeftDockWidgetArea);
    setCorner(Qt::BottomLeftCorner, Qt::LeftDockWidgetArea);
    setCorner(Qt::TopRightCorner, Qt::RightDockWidgetArea);
    setCorner(Qt::BottomRightCorner, Qt::RightDockWidgetArea);*/



    setCorner(Qt::TopLeftCorner, Qt::LeftDockWidgetArea);
    setCorner(Qt::BottomLeftCorner, Qt::LeftDockWidgetArea);
    setCorner(Qt::TopRightCorner, Qt::RightDockWidgetArea);
    setCorner(Qt::BottomRightCorner, Qt::RightDockWidgetArea);


    /*QDockWidget *storageringdock = new QDockWidget(tr("Storagering"), this);
    storageringdock->setWidget(new storagering());
    storageringdock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    this->addDockWidget(Qt::RightDockWidgetArea, storageringdock);
    //addDockWidget(Qt::RightDockWidgetArea, storageringdock);


    QDockWidget *undulatordock = new QDockWidget(tr("Undulator"), this);
    undulatordock->setWidget(new undulator());
    undulatordock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    this->addDockWidget(Qt::RightDockWidgetArea, undulatordock);


    QDockWidget *idcommunicationdock = new QDockWidget(tr("idCommunication"), this);
    idcommunicationdock->setWidget(new idcommunication());
    idcommunicationdock->setAllowedAreas(Qt::RightDockWidgetArea);
    this->addDockWidget(Qt::RightDockWidgetArea, idcommunicationdock);

    tabifyDockWidget(undulatordock, idcommunicationdock);

    slitttranslationhorizontalpaneldock = new QDockWidget(tr("Slit Unit Horizontal"), this);
    slitttranslationhorizontalpaneldock->setWidget(new slitttranslationhorizontalpanel());
    slitttranslationhorizontalpaneldock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    this->addDockWidget(Qt::LeftDockWidgetArea, slitttranslationhorizontalpaneldock);

    slitunittranslationdock = new QDockWidget(tr("Slit Unit Translation"), this);
    slitunittranslationdock->setWidget(new slitunittranslation());
    slitunittranslationdock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    this->addDockWidget(Qt::LeftDockWidgetArea, slitunittranslationdock);

    tabifyDockWidget(slitttranslationhorizontalpaneldock,slitunittranslationdock);




    QDockWidget *slitwidthhorizontaldock = new QDockWidget(tr("Slit Width Horizontal"), this);
    slitwidthhorizontaldock->setWidget(new slitwidthhorizontal());
    slitwidthhorizontaldock->setAllowedAreas(Qt::AllDockWidgetAreas);
    //this->addDockWidget(Qt::BottomDockWidgetArea, slitwidthhorizontaldock);
    this->addDockWidget(Qt::TopDockWidgetArea, slitwidthhorizontaldock);

    //tabifyDockWidget(slitunittranslationdock, slitwidthhorizontaldock);


    QDockWidget *slitwidthverticaldock = new QDockWidget(tr("Slit Width Vertical"), this);
    slitwidthverticaldock->setWidget(new slitwidthvertical());
    slitwidthverticaldock->setAllowedAreas(Qt::BottomDockWidgetArea);
    //this->addDockWidget(Qt::BottomDockWidgetArea, slitwidthverticaldock);
    this->addDockWidget(Qt::TopDockWidgetArea, slitwidthverticaldock);

    tabifyDockWidget(slitwidthhorizontaldock, slitwidthverticaldock);


    QDockWidget *u411pgm1dock = new QDockWidget(tr("u411pgm1"), this);
    u411pgm1dock->setWidget(new u411pgm1());
    //this->setCentralWidget(u411pgm1dock);
    u411pgm1dock->setAllowedAreas(Qt::AllDockWidgetAreas);
    //this->addDockWidget(Qt::BottomDockWidgetArea, u411pgm1dock);
    this->addDockWidget(Qt::TopDockWidgetArea, u411pgm1dock);

    tabifyDockWidget(slitwidthverticaldock, u411pgm1dock);


    QDockWidget *idtabledock = new QDockWidget(tr("idTable"), this);
    idtabledock->setWidget(new IdTable(this));
    //idtabledock->setAllowedAreas(Qt::BottomDockWidgetArea);
    //idtabledock->setAllowedAreas(Qt::LeftDockWidgetArea);
    idtabledock->setAllowedAreas(Qt::BottomDockWidgetArea);
    this->addDockWidget(Qt::LeftDockWidgetArea, idtabledock);

    //tabifyDockWidget(u411pgm1dock, idtabledock);


    QDockWidget *idparameterdock = new QDockWidget(tr("idParameter"), this);
    idparameterdock->setWidget(new idparameter(this));
    idparameterdock->setAllowedAreas(Qt::LeftDockWidgetArea);
    this->addDockWidget(Qt::LeftDockWidgetArea, idparameterdock);
    //this->addDockWidget(Qt::BottomDockWidgetArea, idparameterdock);

    tabifyDockWidget(idtabledock, idparameterdock);


    QDockWidget *slitunitdock = new QDockWidget(tr("Slit Unit"), this);
    slitunitdock->setWidget(new slitunit(this));
    slitunitdock->setAllowedAreas(Qt::BottomDockWidgetArea);
    this->addDockWidget(Qt::BottomDockWidgetArea, slitunitdock);

    tabifyDockWidget(idparameterdock, slitunitdock);*/


        QDockWidget *storageringdock = new QDockWidget(tr("Storagering"), this);
        storageringdock->setWidget(new storagering());
        storageringdock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
        this->addDockWidget(Qt::RightDockWidgetArea, storageringdock);

        QDockWidget *undulatordock = new QDockWidget(tr("Undulator"), this);
        undulatordock->setWidget(new undulator());
        undulatordock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
        this->addDockWidget(Qt::RightDockWidgetArea, undulatordock);

        QDockWidget *idcommunicationdock = new QDockWidget(tr("idCommunication"), this);
        idcommunicationdock->setWidget(new idcommunication());
        idcommunicationdock->setAllowedAreas(Qt::RightDockWidgetArea);
        this->addDockWidget(Qt::RightDockWidgetArea, idcommunicationdock);

        tabifyDockWidget(undulatordock, idcommunicationdock);


        QDockWidget *idparameterdock = new QDockWidget(tr("idParameter"), this);
        idparameterdock->setWidget(new idparameter(this));
        idparameterdock->setAllowedAreas(Qt::LeftDockWidgetArea);
        this->addDockWidget(Qt::LeftDockWidgetArea, idparameterdock);


        QDockWidget *idtabledock = new QDockWidget(tr("idTable"), this);
        idtabledock->setWidget(new IdTable(this));
        idtabledock->setAllowedAreas(Qt::LeftDockWidgetArea);
        this->addDockWidget(Qt::LeftDockWidgetArea, idtabledock);

        tabifyDockWidget(idparameterdock, idtabledock);

        QDockWidget *slitttranslationhorizontalpaneldock = new QDockWidget(tr("Slit Unit Horizontal"), this);
        slitttranslationhorizontalpaneldock->setWidget(new slitttranslationhorizontalpanel(this));
        slitttranslationhorizontalpaneldock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
        this->addDockWidget(Qt::LeftDockWidgetArea, slitttranslationhorizontalpaneldock);

        tabifyDockWidget(idtabledock,slitttranslationhorizontalpaneldock);


        QDockWidget *slitunittranslationdock = new QDockWidget(tr("Slit Unit Translation"), this);
        slitunittranslationdock->setWidget(new slitunittranslation());
        slitunittranslationdock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
        this->addDockWidget(Qt::LeftDockWidgetArea, slitunittranslationdock);

        tabifyDockWidget(slitttranslationhorizontalpaneldock,slitunittranslationdock);

        QDockWidget *slitwidthhorizontaldock = new QDockWidget(tr("Slit Width Horizontal"), this);
        slitwidthhorizontaldock->setWidget(new slitwidthhorizontal());
        slitwidthhorizontaldock->setAllowedAreas(Qt::LeftDockWidgetArea);
        this->addDockWidget(Qt::LeftDockWidgetArea, slitwidthhorizontaldock);

        tabifyDockWidget(slitttranslationhorizontalpaneldock, slitwidthhorizontaldock);

        QDockWidget *slitwidthverticaldock = new QDockWidget(tr("Slit Width Vertical"), this);
        slitwidthverticaldock->setWidget(new slitwidthvertical());
        slitwidthverticaldock->setAllowedAreas(Qt::LeftDockWidgetArea);
        this->addDockWidget(Qt::LeftDockWidgetArea, slitwidthverticaldock);

        tabifyDockWidget(slitunittranslationdock, slitwidthverticaldock);


        QDockWidget *slitunitdock = new QDockWidget(tr("Slit Unit"), this);
        slitunitdock->setWidget(new slitunit(this));
        slitunitdock->setAllowedAreas(Qt::BottomDockWidgetArea);
        this->addDockWidget(Qt::BottomDockWidgetArea, slitunitdock);

        tabifyDockWidget(idparameterdock, slitunitdock);


        /*QDockWidget *slitunit_testdock = new QDockWidget(tr("Slit Unit Test"), this);
        slitunit_testdock->setWidget(new slitunit_test(this));
        slitunit_testdock->setAllowedAreas(Qt::BottomDockWidgetArea);
        this->addDockWidget(Qt::BottomDockWidgetArea, slitunit_testdock);

        tabifyDockWidget(idparameterdock, slitunit_testdock);*/


        QDockWidget *anglesdock = new QDockWidget(tr("Angles"), this);
        anglesdock->setWidget(new angles(this));
        this->setCentralWidget(anglesdock);
        //u411pgm1dock->setAllowedAreas(Qt::AllDockWidgetAreas);
        anglesdock->setAllowedAreas(Qt::BottomDockWidgetArea);
        this->addDockWidget(Qt::BottomDockWidgetArea, anglesdock);

        tabifyDockWidget(slitunitdock, anglesdock);

        QDockWidget *idexpertdock = new QDockWidget(tr("IdExpert"), this);
        idexpertdock->setWidget(new IdExpert(this));
        this->setCentralWidget(idexpertdock);
        //u411pgm1dock->setAllowedAreas(Qt::AllDockWidgetAreas);
        idexpertdock->setAllowedAreas(Qt::BottomDockWidgetArea);
        this->addDockWidget(Qt::BottomDockWidgetArea, idexpertdock);

        tabifyDockWidget(anglesdock, idexpertdock);

        QDockWidget *heydemanndock = new QDockWidget(tr("Heydemann"), this);
        heydemanndock->setWidget(new heydemann(this));
        this->setCentralWidget(heydemanndock);
        //u411pgm1dock->setAllowedAreas(Qt::AllDockWidgetAreas);
        heydemanndock->setAllowedAreas(Qt::BottomDockWidgetArea);
        this->addDockWidget(Qt::BottomDockWidgetArea, heydemanndock);

        tabifyDockWidget(idexpertdock, heydemanndock);

        QDockWidget *setenergydock = new QDockWidget(tr("SetEnergy"), this);
        setenergydock->setWidget(new setenergy(this));
        this->setCentralWidget(setenergydock);
        //u411pgm1dock->setAllowedAreas(Qt::AllDockWidgetAreas);
        setenergydock->setAllowedAreas(Qt::BottomDockWidgetArea);
        this->addDockWidget(Qt::BottomDockWidgetArea, setenergydock);

        tabifyDockWidget(heydemanndock, setenergydock);

        QDockWidget *pinholes6dock = new QDockWidget(tr("PinholeS6"), this);
        pinholes6dock->setWidget(new pinholes6());
        pinholes6dock->setAllowedAreas(Qt::RightDockWidgetArea);
        this->addDockWidget(Qt::RightDockWidgetArea, pinholes6dock);

        tabifyDockWidget(setenergydock, pinholes6dock);

        QDockWidget *smu41_1dock = new QDockWidget(tr("SMU_41 1"), this);
        smu41_1dock->setWidget(new smu41_1());
        smu41_1dock->setAllowedAreas(Qt::RightDockWidgetArea);
        this->addDockWidget(Qt::RightDockWidgetArea, smu41_1dock);

        tabifyDockWidget(pinholes6dock, smu41_1dock);

        QDockWidget *smu41_2dock = new QDockWidget(tr("SMU_41 2"), this);
        smu41_2dock->setWidget(new smu41_2());
        smu41_2dock->setAllowedAreas(Qt::RightDockWidgetArea);
        this->addDockWidget(Qt::RightDockWidgetArea, smu41_2dock);

        tabifyDockWidget(smu41_1dock, smu41_2dock);

        QDockWidget *u411pgm1dock = new QDockWidget(tr("u411pgm1"), this);
        u411pgm1dock->setWidget(new u411pgm1(this));
        this->setCentralWidget(u411pgm1dock);
        //u411pgm1dock->setAllowedAreas(Qt::AllDockWidgetAreas);
        u411pgm1dock->setAllowedAreas(Qt::BottomDockWidgetArea);
        this->addDockWidget(Qt::BottomDockWidgetArea, u411pgm1dock);

        tabifyDockWidget(smu41_2dock, u411pgm1dock);







    idtabledock->raise();
    idparameterdock->raise();
    idcommunicationdock->raise();
    undulatordock->raise();
    u411pgm1dock->raise();
    storageringdock->raise();
    anglesdock->raise();
    idexpertdock->raise();
    heydemanndock->raise();
    setenergydock->raise();
    pinholes6dock->raise();
    smu41_1dock->raise();
    smu41_2dock->raise();





    slitttranslationhorizontalpaneldock->hide();
    slitunittranslationdock->hide();
    slitwidthverticaldock->hide();
    slitunitdock->hide();
    //slitunit_testdock->hide();
    slitwidthhorizontaldock->hide();



    viewMenu = menuBar()->addMenu(tr("&View"));
    viewMenu->addAction(undulatordock->toggleViewAction());
    viewMenu->addAction(u411pgm1dock->toggleViewAction());
    viewMenu->addAction(storageringdock->toggleViewAction());
    viewMenu->addAction(slitwidthverticaldock->toggleViewAction());
    viewMenu->addAction(slitwidthhorizontaldock->toggleViewAction());
    viewMenu->addAction(slitunittranslationdock->toggleViewAction());
    viewMenu->addAction(slitunitdock->toggleViewAction());
    //viewMenu->addAction(slitunit_testdock->toggleViewAction());
    viewMenu->addAction(slitttranslationhorizontalpaneldock->toggleViewAction());
    viewMenu->addAction(anglesdock->toggleViewAction());
    viewMenu->addAction(idexpertdock->toggleViewAction());
    viewMenu->addAction(heydemanndock->toggleViewAction());
    viewMenu->addAction(setenergydock->toggleViewAction());
    viewMenu->addAction(pinholes6dock->toggleViewAction());
    viewMenu->addAction(smu41_1dock->toggleViewAction());
    viewMenu->addAction(smu41_2dock->toggleViewAction());


    monochromatorToolBar = addToolBar(tr("Monochromator"));

    QAction *slitwidthverticalAct = new QAction(this);
    slitwidthverticalAct = slitwidthverticaldock->toggleViewAction();
    slitwidthverticalAct->setText("slit width vertical");

    QAction *slitwidthhorizontalAct = new QAction(this);
    slitwidthhorizontalAct = slitwidthhorizontaldock->toggleViewAction();
    slitwidthhorizontalAct->setText("slit width horizontal");

    QAction *slitunittranslationAct = new QAction(this);
    slitunittranslationAct = slitunittranslationdock->toggleViewAction();
    slitunittranslationAct->setText("slit unit translation");

    QAction *slitunitAct = new QAction(this);
    slitunitAct = slitunitdock->toggleViewAction();
    slitunitAct->setText("slit unit");

    /*QAction *slitunit_testAct = new QAction(this);
    slitunit_testAct = slitunit_testdock->toggleViewAction();
    slitunit_testAct->setText("slit unit test");*/

    QAction *slitttranslationhorizontalpanelAct = new QAction(this);
    slitttranslationhorizontalpanelAct = slitttranslationhorizontalpaneldock->toggleViewAction();
    slitttranslationhorizontalpanelAct->setText("slit translation horizontal");


    monochromatorToolBar->addAction(slitwidthverticalAct);
    monochromatorToolBar->addSeparator();
    monochromatorToolBar->addAction(slitwidthhorizontalAct);
    monochromatorToolBar->addSeparator();
    monochromatorToolBar->addAction(slitunittranslationAct);
    monochromatorToolBar->addAction(slitunitAct);
    //monochromatorToolBar->addAction(slitunit_testAct);
    monochromatorToolBar->addSeparator();
    monochromatorToolBar->addAction(slitttranslationhorizontalpanelAct);
    monochromatorToolBar->addSeparator();


    statusBar()->showMessage(tr("Ready"));







}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_triggered()
{
    QMessageBox::information(this,"title","New");

}


void MainWindow::on_actionOpen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(
            this,
            tr("Open File"),
            "/home/txmuser",
            "All files (*.*)"
               );
            //tr("Images(*.tiff *.tif)")
    //QMessageBox::information(this,tr("File Name"),filename);

}



void MainWindow::on_actionSave_triggered()
{
    QMessageBox::information(this,"title","Save");

}



void MainWindow::on_actionSave_as_triggered()
{
    QMessageBox::information(this,"title","Save As");
}



void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}



void MainWindow::on_actionCut_triggered()
{
    QMessageBox::information(this,"title","Cut");
}



void MainWindow::on_actionCopy_triggered()
{
    QMessageBox::information(this,"title","Copy");
}



void MainWindow::on_actionPaste_triggered()
{
    QMessageBox::information(this,"title","Paste");
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::information(this,"title","QTXM software is used to operate the full-field cryo transmission X-ray microscope installed at the U41-XM beamline at BESSY II storage ring. (Developed by: C. Haebel, P. Guttmann, S. Werner)");

}


void MainWindow::on_actionAbout_Qt_triggered()
{
    QMessageBox::aboutQt(this,"Show the Qt library's About box");

}



void MainWindow::on_actionAbout_Id_triggered()
{
    idDialog iddialog;
    iddialog.setModal(true);
    iddialog.exec();
    //QMessageBox::information(this,"title","")

}

void MainWindow::on_actionAbout_Mono_triggered()
{
    secDialog secdialog;
    secdialog.setModal(true);
    secdialog.exec();

}

void MainWindow::on_actionAbout_Aperture_triggered()
{
    aperturedialog aperturedialog;
    aperturedialog.setModal(true);
    aperturedialog.exec();

}

void MainWindow::readSettings()
{
    QSettings settings("BESSY", "U411PGM1");
    QPoint pos = settings.value("pos", QPoint(200, 200)).toPoint();
    QSize size = settings.value("size", QSize(400, 400)).toSize();
    resize(size);
    move(pos);
}

void MainWindow::writeSettings()
{
    QSettings settings("BESSY", "U411PGM1");
    settings.setValue("pos", pos());
    settings.setValue("size", size());
    //settings.setValue("condenser/x", 17.3);
    //settings.setValue("condenser/y", -407.9);
}












