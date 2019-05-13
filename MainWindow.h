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
#include <QCheckBox>
#include <QComboBox>

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
    QVBoxLayout* actor_layout;
    QVBoxLayout* genre_layout;

    QHBoxLayout* alreadyseen_layout;
    QHBoxLayout* bot_layout;
    QHBoxLayout* poster_layout;
    QHBoxLayout* top_layout;
    QHBoxLayout* actor_genre_layout;

    //QPushButton creation
    QPushButton* historyseen_button;
    QPushButton* edit_button;
    QPushButton* search_button;

    //QCheckBox creation
    QCheckBox* see_check;

    //QTextEdit creation
    QTextEdit* moreinfo_text;
    QTextEdit* actor_text;
    QTextEdit* synopsys_text;

    //QLabel creation
    //Without border
    QLabel* synopsys_label;
    QLabel* actor_label;
    QLabel* genre_label;
    //With border
    QLabel* image_label;
    QLabel* actor1_label;
    QLabel* actor2_label;
    QLabel* actor3_label;
    QLabel* genre1_label;
    QLabel* genre2_label;
    QLabel* genre3_label;

    //QComboBox creation
    QComboBox* movie_list;

};

#endif // MAINWINDOW_H