#include "widget.h"
#include "sender.h"
#include "receiver.h"


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    Sender sender;
    receiver receiver;

    QObject::connect(&sender,&Sender::changedValue,
                     &receiver,&receiver::setValue);

     sender.sendSignal();


    return a.exec();
}

