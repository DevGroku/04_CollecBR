#ifndef ADDMOVIESWINDOW_H
#define ADDMOVIESWINDOW_H

#include <QWidget>
#include <QLabel>
#include <QTextEdit>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QFormLayout>

class AddMoviesWindow : public QWidget
{
Q_OBJECT

public:
    AddMoviesWindow(QWidget *parent = nullptr);
    ~AddMoviesWindow();

private:
    //QLabel creation
    QLabel* top_label;

    //QLineEdit creation
    QLineEdit* title_text;
    QLineEdit* release_text;
    QLineEdit* productor_text;
    QLineEdit* actor1_text;
    QLineEdit* actor2_text;
    QLineEdit* actor3_text;
    QLineEdit* genre1_text;
    QLineEdit* genre2_text;
    QLineEdit* genre3_text;
    QLineEdit* nationality_text;

    //Creation QPushButton
    QPushButton* close_button;
    QPushButton* ok_button;

   //Creation QFormLayout
   QFormLayout* seizure_layout;

   //Creation Layout
   QHBoxLayout* bot_layout;
   QVBoxLayout* final_layout;


};

#endif // ADDMOVIESWINDOW_H
