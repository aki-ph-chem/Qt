#include "widget.h"
#include "ui_widget.h"
#include "worker.h"

#include <QPushButton>
#include <QDebug>
#include <QThread>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    m_threadButton = new QPushButton("Thread start",this);
    m_connection   = connect(m_threadButton,&QPushButton::clicked,
                             this,&Widget::startThread);

    ui->setupUi(this);
}

Widget::~Widget()
{
    qDebug() << __FUNCTION__;
    m_thread->quit();
    m_thread->wait();

    delete ui;
}

void Widget::startThread(bool b)
{
    Q_UNUSED(b);

    disconnect(m_connection);
    m_threadButton->setEnabled(false);

    m_thread = new QThread();
    Worker *worker = new Worker();
    worker->moveToThread(m_thread);

    connect(m_thread,&QThread::started,worker,&Worker::doWork);

    connect(worker,  &worker::finished,m_thread,&QThread::quit);
    connect(worker,  &Worker::finished,worker,&QObject::deleteLater);
    connect(m_thread,&QThread::finished,m_thread,&Worker::deleteLater);

    m_thread->start();
}












