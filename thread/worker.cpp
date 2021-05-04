#include "worker.h"
#include <QDebug>

worker::worker(QObject *parent) : QObject(parent)
{

}

worker::~worker(){
    qDebug() << __FUNCTION__;
}

void worker::receiveSignal(bool value)
{
    Q_UNUSED(value);
    qDebug("signal received");
}
