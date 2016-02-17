#include "mytimer.h"
#include <QtCore>
#include <QDebug>

mytimer::mytimer()
{
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(myslot()));

    timer->start(1000);

}

void mytimer::myslot()
{
    qDebug() << "timer executed";
}
