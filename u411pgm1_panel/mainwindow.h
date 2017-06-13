#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCloseEvent>
#include <QHash>

class QAction;
class QDockWidget;
class QMenu;
class QSpinBox;
class QStandardItemModel;
class QTextEdit;
class QCAChannel;
class QWidget;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
 //     void closeEvent(QCloseEvent *event);

private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_as_triggered();

    void on_actionExit_triggered();

    void on_actionCut_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionAbout_Qt_triggered();

    void on_actionAbout_triggered();

    void on_actionAbout_Id_triggered();

    void on_actionAbout_Mono_triggered();

    //void createActions();

    //void readSettings();

    //void writeSettings();

    //void createMenus();

    //void documentWasModified();

    //void newFile();




    void on_actionAbout_Aperture_triggered();

private:
    Ui::MainWindow *ui;

    //void setCurrentFile(const QString &fileName);

    QString strippedName(const QString &fullFileName);


    QTextEdit* textEdit;
    QString curFile;
    void createStatusBar();
    //bool maybeSave();
    void readSettings();
    void writeSettings();
    //QWidget* central;
    //void createToolBars();

    QMenu *viewMenu;

    QToolBar *monochromatorToolBar;

    //QDockWidget *slitttranslationhorizontalpaneldock;
    //QDockWidget *slitunittranslationdock;
    //QDockWidget *u411pgm1dock;
    //QDockWidget *idcommunicationdock;
    //QDockWidget *idparameterdock;
    //QDockWidget *idtabledock;
    //QDockWidget *slitunitdock;

signals:
    void sendtext(QString text);


};

#endif // MAINWINDOW_H
