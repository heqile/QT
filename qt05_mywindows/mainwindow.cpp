#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setCentralWidget(ui->plainTextEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_file_triggered()
{
    /* set modal dialog
    myDialog mDialog;
    mDialog.setModal(true);
    mDialog.exec();
    */

    /* non modal dialog */
    mDialog = new myDialog(this);
    mDialog->show();
}
