#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
        w.setFixedSize(600,600);
        w.setWindowTitle("CollecBR");
    w.show();

    return a.exec();
}