#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initalizeCentralWidget();
}

MainWindow::~MainWindow()
{
    delete ui;
}

QSize MainWindow::sizeHint() const
{
    return QSize(400,300);
}


void MainWindow::initalizeCentralWidget()
{

    QWidget *Widget = new QWidget(this);

    new QPushButton("push",Widget);

    setCentralWidget(Widget);


}













