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

    connect(bt_3, &QPushButton::clicked, this, &MainWindow::fermer );
    // connect(bt_3, &QPushButton::clicked, [this](){ this->close(); } );

    setLayout(top);
}

MainWindow::~MainWindow()
{
}

void MainWindow::fermer()
{
  setFixedSize(500, 500);
}