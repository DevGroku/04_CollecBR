#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QMainWindow>
#include <QLayout>
#include <QPushButton>
#include <QFrame>
#include <QRadioButton>
#include <QTextEdit>
#include <QLabel>

class MainWindow : public QWidget
{
Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void fermer();

private:
    //Layout creation
    QVBoxLayout* final_layout;
    QVBoxLayout* see_layout;
    QVBoxLayout* middle_layout;

    QHBoxLayout* alreadyseen_layout;
    QHBoxLayout* bot_layout;
    QHBoxLayout* poster_layout;

    //QPushButton creation
    QPushButton* historyseen_button;
    QPushButton* edit_button;

    //QRadioButton creation
    QRadioButton* see_radiobutton;

    //QTextEdit creation
    QTextEdit* moreinfo_text;
    QTextEdit* actor_text;
    QTextEdit* synopsys_text;


    //QLabel creation
    QLabel* image_label;
    QLabel* synopsys_label;

};

#endif // MAINWINDOW_H