#ifndef PARENT_H
#define PARENT_H

#include<QObject>


class Parent :public QObject
{
    Q_OBJECT

public:
    explicit Parent(QObject *parent = nullptr);

    ~Parent();

};

#endif // PARENT_H
