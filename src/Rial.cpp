#include "Rial.h"

Rial::Rial(QObject *parent) : QObject(parent)
    ,timer(new QTimer(this))
{
    //Old style
    //connect(timer, SIGNAL(timeout()), this, SLOT(Callback1()), static_cast<Qt::ConnectionType>(Qt::AutoConnection | Qt::SingleShotConnection | Qt::UniqueConnection));
    //connect(timer, SIGNAL(timeout()), this, SLOT(Callback1()), static_cast<Qt::ConnectionType>(Qt::AutoConnection | Qt::SingleShotConnection | Qt::UniqueConnection)); //duplicate
    //New style
    connect(timer, &QTimer::timeout, this, &Rial::Callback1, static_cast<Qt::ConnectionType>(Qt::AutoConnection | Qt::SingleShotConnection | Qt::UniqueConnection));
    connect(timer, &QTimer::timeout, this, &Rial::Callback1, static_cast<Qt::ConnectionType>(Qt::AutoConnection | Qt::SingleShotConnection | Qt::UniqueConnection)); //duplicate

    timer->start(500);
}

void Rial::Callback1(){
    qDebug() << "11olala11";
}

void Rial::Callback2(){
    qDebug() << "22olala22";
}
