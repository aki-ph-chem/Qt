#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget() override;

public:
    QSize sizeHint() const override;

private slots:
    void received();

};
#endif // WIDGET_H
