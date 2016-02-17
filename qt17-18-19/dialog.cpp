#include "dialog.h"
#include "ui_dialog.h"
#include <QtCore>
#include <QtWidgets>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->checkBox->setChecked(true);
    for(int i = 1; i <= 5; i ++)
    {
        ui->comboBox->addItem(QString::number(i)+"item");
    }
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton1_clicked()
{
    if(ui->checkBox->isChecked())
    {
        QMessageBox::information(this,"title","is cat");
    }
    else
    {
        QMessageBox::information(this,"title","is not cat");
    }
}

void Dialog::on_pushButton2_clicked()
{
    if(ui->radioButton->isChecked())
    {
        QMessageBox::information(this,"title","i like " + ui->radioButton->text());
    }
    if(ui->radioButton_2->isChecked())
    {
        QMessageBox::information(this,"titile","i like " + ui->radioButton_2->text());
    }
}

void Dialog::on_pushButton3_clicked()
{
    QMessageBox::information(this,"titil",ui->comboBox->currentText());
}
