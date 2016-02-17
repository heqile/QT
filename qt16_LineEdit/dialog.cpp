#include "dialog.h"
#include "ui_dialog.h"
#include <QtCore>
#include <QtWidgets>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
 //   ui->lineEdit->setText("hello_world");
    QMessageBox::information(this,"title",ui->lineEdit->text());
}
