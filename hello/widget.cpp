#include "widget.h"
#include "ui_widget.h"

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



QPaintEngine *Widget::paintEngine() const
{
}

QSize Widget::sizeHint() const
{
    return QSize(400,300);
}
