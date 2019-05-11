#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QMainWindow>
#include <QLayout>
#include <QPushButton>
#include <QFrame>



class MainWindow : public QWidget
{
Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void fermer();

private:
    //Layout Creation
    QHBoxLayout* middle;
    QVBoxLayout* top;

    //Widget Creation
    QPushButton* bt_1;
    QPushButton* bt_2;
    QPushButton* bt_3;
};

#endif // MAINWINDOW_H