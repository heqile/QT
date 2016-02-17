#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QDebug>

void Read(QString myfilename)
{
    QFile myfile(myfilename);
    if(!myfile.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "could not open the file for reading";
        return;
    }
    QTextStream in(&myfile);
    QString text;
    text = in.readAll();
    qDebug() << text;
    myfile.close();

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString myfilename;
    myfilename = ":/resc1/pro1";
    Read(myfilename);

    return a.exec();
}
