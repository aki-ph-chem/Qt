#ifndef EXAMPLE_H
#define EXAMPLE_H

#include<QObject>


class example : public QObject
{
    Q_OBJECT
public:
    explicit example(QObject *parent = nullptr);

signals:
   void changeValue(int);

public slots:
   void setValue(int value);

protected slots:
   void setValue2(int value);

private slots:
   void setValue3(int value);

};

#endif // EXAMPLE_H
