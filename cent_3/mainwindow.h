#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;
    QSize SizeHint() const ;

private slots:
    void actFirst( bool chcked = false);
    void actSecond(bool checked = false);
    void actThird( bool checked = false);

private:

   QAction *m_firstAction;
   QAction *m_secondAction;
   QAction *m_ThirdAction;

   void initalizeCentralWidget();
   void initalizeActions();
   void initalizeMenuBars();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
