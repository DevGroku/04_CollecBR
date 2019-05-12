#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QMainWindow>
#include <QLayout>
#include <QPushButton>
#include <QFrame>
#include <QRadioButton>
#include <QTextEdit>

class MainWindow : public QWidget
{
Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void fermer();

private:
    //Layout creation
    QVBoxLayout* see_layout;

    QHBoxLayout* alreadyseen_layout;
    QHBoxLayout* bot_layout;

    //QPushButton creation
    QPushButton* historyseen_button;
    QPushButton* edit_button;

    //QRadioButton creation
    QRadioButton* see_radiobutton;

    //QTextEdit creation
    QTextEdit* moreinfo_text;


};

#endif // MAINWINDOW_H