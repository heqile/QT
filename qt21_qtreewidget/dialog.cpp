#include "dialog.h"
#include "ui_dialog.h"
#include <QtCore>
#include <QtWidgets>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->treeWidget->setColumnCount(2);
    ui->treeWidget->setHeaderLabels(QStringList()<<"one"<<"two");
    addRoot("1 hello","world");
    addRoot("2 hello","world");

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::addRoot(QString name, QString description)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget);

    itm->setText(0,name);
    itm->setText(1,description);
//    ui->treeWidget->addTopLevelItem(itm);

    addChild(itm,"one","hello");
    addChild(itm,"two","world");
}

void Dialog::addChild(QTreeWidgetItem *parent, QString name, QString description)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem(parent);

    itm->setText(0,name);
    itm->setText(1,description);

 //   parent->addChild(itm);


}

void Dialog::on_pushButton_clicked()
{
    ui->treeWidget->currentItem()->setBackgroundColor(0,Qt::red);
    ui->treeWidget->currentItem()->setBackgroundColor(1,Qt::blue);

}
