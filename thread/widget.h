#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class QPushButton;
class Worker;

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QSize sizeHint() const override;

private slots:
    void startThread(bool b);

private:
    QThread *m_thread;
    QPushButton *m_threadButton;
    QPushButton *m_btnSignal;
    QMetaObject::Connection m_connection;

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
