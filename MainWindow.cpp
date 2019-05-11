#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
        : QWidget(parent)
{
    middle = new QHBoxLayout;
    bt_1 = new QPushButton(this);
    bt_2 = new QPushButton(this);
    middle->addWidget(bt_1);
    middle->addWidget(bt_2);

    top = new QVBoxLayout;
    bt_3 = new QPushButton(this);
    top->addWidget(bt_3);
    top->addLayout(middle);

    setLayout(top);
}

MainWindow::~MainWindow()
{
}