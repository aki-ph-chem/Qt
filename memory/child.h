#ifndef CHILD_H
#define CHILD_H

#include<QObject>


class Child :public QObject
{
    Q_OBJECT

public:
    explicit Child(QObject *child = nullptr);

    ~Child();
};

#endif // CHILD_H
