#include "my_widget.h"

#include<QLabel>

My_Widget::My_Widget(QWidget *parent) : QWidget(parent)
{
  new QLabel("my_widget_label",this);
}
