#include "child.h"
#include<QDebug>


Child::Child(QObject *child): QObject(child)
{

}

Child::~Child()
{
    qDebug() <<__FUNCTION__;
}
