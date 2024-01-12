#pragma once

#include <QObject>
#include <QTimer>
#include <QDebug>

class Rial : public QObject
{
    Q_OBJECT

public:
    Rial(QObject *parent);

public slots:
    void Callback1();
    void Callback2();

private:
    QTimer *timer;
};
