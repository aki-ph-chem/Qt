#include "receiver.h"
#include <QObject>
#include <QDebug>

receiver::receiver(QObject *parent) : QObject(parent)
{

}

void receiver::setValue(int value){

    qDebug() << __FUNCTION__ <<"value = "<<value;
}
