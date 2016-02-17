/*#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>

void Read(QString myFilename)
{
    QFile myfile(myFilename);
    if(!myfile.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "could not read file";
        return;
    }
    QTextStream in(&myfile);
    QString mytext;
    mytext = in.readAll();
    qDebug() << mytext;

    myfile.close();
}

void Write(QString myFilename)
{
    QFile myfile(myFilename);
    if(!myfile.open(QFile::WriteOnly | QFile::Text))
    {
        qDebug() << "could not write file";
        return;
    }

    QTextStream out(&myfile);
    out << "hello_world";

    myfile.close();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString myFilename = "/home/lele/Desktop/qt_tutorial/text.txt";



    Write(myFilename);

    Read(myFilename);
    return a.exec();
}
*/

#include <QApplication>
#include <QFile>
#include <QDebug>
#include <QTextStream>
#include <QString>

void Write(QString myfilename)
{
    QFile myfile(myfilename);
    if(!myfile.open(QFile::WriteOnly | QFile::Text))
    {
        qDebug() << "could not open a write file";
        return;
    }

    QTextStream out(&myfile);
    QString mystring = "Hello!!";
    out << mystring;

    myfile.close();
}

void Read(QString myfilename)
{
    QFile myfile(myfilename);
    if(!myfile.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "could not open a read file";
        return;
    }

    QTextStream in(&myfile);
    QString mystring;
    mystring = in.readAll();
    qDebug() << mystring;

    myfile.close();
}


int main(int argc, char *argv[])
{
    QApplication app(argc,argv);

    QString myfilename = "/home/lele/Desktop/text.txt";

    Write(myfilename);
    Read(myfilename);

    return app.exec();

}







