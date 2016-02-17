#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    statlabel = new QLabel(this);
    statprobar = new QProgressBar(this);
    statlabel->setText("one");
    ui->statusBar->addPermanentWidget(statlabel);
    ui->statusBar->addPermanentWidget(statprobar);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionDo_something_triggered()
{
    ui->statusBar->showMessage("heqile",2000);

}
