#ifndef SENDER_H
#define SENDER_H

#include<QObject>

class Sender : public QObject
{
    Q_OBJECT
public:
    explicit Sender(QObject *parent = nullptr); //コンストラクタ
    void sendSignal();

signals:
     void changedValue(int);

};


#endif // SENDER_H
