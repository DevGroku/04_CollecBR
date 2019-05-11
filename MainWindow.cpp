#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent)
{
    middle = new QHBoxLayout;
    bt_1 = new QPushButton;
    bt_2 = new QPushButton;
    middle->addWidget(bt_1);
    middle->addWidget(bt_2);

    top = new QVBoxLayout;
    bt_3 = new QPushButton;
    top->addWidget(bt_3);
    top->addLayout(middle);

}

MainWindow::~MainWindow()
{
}