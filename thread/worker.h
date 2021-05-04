#ifndef WORKER_H
#define WORKER_H

#include <QObject>

class worker : public QObject
{
    Q_OBJECT
public:
    worker(QObject *parent = nullptr);
    ~worker();
public slots:
    void process();
    void receiveSignal(bool value);

signals:
    void finished();

};

#endif // WORKER_H
