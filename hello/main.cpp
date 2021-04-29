#include "widget.h"

#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    // 第二引数にwidgetのポインタを入れている

    //new QPushButton("Hello World!",&w);
    w.show();

    //QPushButton *btn = new QPushButton("Hello World",nullptr);

    //btn -> show();

    Widget w2;

    //w2.move(w.x()+300,w.y());
    w2.show();

    return a.exec();
}
