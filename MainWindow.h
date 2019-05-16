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
#include <QMenuBar>
#include "AddMoviesWindow.h"

class MainWindow : public QWidget
{
Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void fermer();
    void edit();

private:
    //Layout creation
    QVBoxLayout* final_layout;
    QVBoxLayout* see_layout;
    QVBoxLayout* middle_layout;
    QVBoxLayout* infoacteurgenre_layout;

    QHBoxLayout* alreadyseen_layout;
    QHBoxLayout* bot_layout;
    QHBoxLayout* poster_layout;
    QHBoxLayout* top_layout;
    QVBoxLayout* actor_genre_layout;

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

    QLabel* synopsys_label;
    QLabel* actor_label;
    QLabel* genre_label;

    QLabel* image_label;
    QLabel* listingactor_label;
    QLabel* listinggenre_label;

    //QComboBox creation
    QComboBox* movie_list;

    //QMenuBar creation
    QMenuBar* menu_main;
    QMenu* file_menu;
    QMenu* edition_menu;

    //AddMoviesWindows creation
    AddMoviesWindow* edit_window;

};

#endif // MAINWINDOW_H