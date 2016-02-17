#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString q = "lele";
    qDebug () << "hello.world" << q;
    return a.exec();
}
