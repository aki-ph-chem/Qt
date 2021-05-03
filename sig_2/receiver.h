#ifndef RECEIVER_H
#define RECEIVER_H

#include <QObject>

class receiver : public QObject
{
    Q_OBJECT;
public:

    explicit receiver(QObject *parent = nullptr);

public slots:
    void setValue(int value);

};

#endif // RECEIVER_H
