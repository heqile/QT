#ifndef MYTIMER_H
#define MYTIMER_H

#include <QtCore>

class mytimer : public QObject
{
    Q_OBJECT

public:
    mytimer();
    QTimer *timer;
public slots:
    void myslot();
};

#endif // MYTIMER_H
