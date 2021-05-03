#ifndef MY_WIDGET_H
#define MY_WIDGET_H

#include <QWidget>

class My_Widget : public QWidget
{
    Q_OBJECT
public:
    My_Widget(QWidget *parent = nullptr);
};

#endif // MY_WIDGET_H
