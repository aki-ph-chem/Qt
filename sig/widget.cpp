#include "widget.h"
#include "ui_widget.h"

#include<QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

Qsize Widget::sizeHint() const
{
    return Qsize(300,200);
}

void Widget::received(){

    dDebug() <<__FUNCTION__;
}
