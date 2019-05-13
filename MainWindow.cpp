
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
        : QWidget(parent)
{
    //Layout creation of the movies already seen
    see_check = new QCheckBox("Vu",this);
    historyseen_button = new QPushButton("Historique vues",this);
    alreadyseen_layout = new QHBoxLayout;
    alreadyseen_layout->addWidget(see_check,1);
    alreadyseen_layout->addWidget(historyseen_button,2);

    //Layout creation at the bottom right
    edit_button = new QPushButton("Modifier",this);
    see_layout = new QVBoxLayout;
    see_layout->addLayout(alreadyseen_layout,1);
    see_layout->addWidget(edit_button,5);

    //Layout creation at the bottom
    moreinfo_text = new QTextEdit(this);
    bot_layout = new QHBoxLayout;
    bot_layout->addWidget(moreinfo_text,3);
    bot_layout->addLayout(see_layout,1);

    //Layout creation with actor & genre
    actor_label = new QLabel("acteurs",this);
    genre_label = new QLabel("Genres",this);
    actor1_label = new QLabel("actor1",this);
    actor2_label = new QLabel("actor2",this);
    actor3_label = new QLabel("actor3",this);
    genre1_label = new QLabel("genre1",this);
    genre2_label = new QLabel("genre2",this);
    genre3_label = new QLabel("genre3",this);
    actor_layout = new QVBoxLayout;
    genre_layout = new QVBoxLayout;
    actor_genre_layout = new QHBoxLayout;
    actor_layout->addWidget(actor_label);
    actor_layout->addWidget(actor1_label);
    //actor1_label->setStyleSheet("border: 1px solid black");
    actor_layout->addWidget(actor2_label);
    actor_layout->addWidget(actor3_label);
    genre_layout->addWidget(genre_label);
    genre_layout->addWidget(genre1_label);
    genre_layout->addWidget(genre2_label);
    genre_layout->addWidget(genre3_label);
    actor_genre_layout->addLayout(actor_layout);
    actor_genre_layout->addLayout(genre_layout);

    //Layout creation at the middle
    image_label = new QLabel(this);
    poster_layout = new QHBoxLayout;
    poster_layout->addWidget(image_label,1);
    poster_layout->addLayout(actor_genre_layout,1);
    synopsys_label = new QLabel("Synopsys",this);
    synopsys_text = new QTextEdit(this);
    middle_layout = new QVBoxLayout;
    middle_layout->addLayout(poster_layout,8);
    middle_layout->addWidget(synopsys_label,1);
    middle_layout->addWidget(synopsys_text,8);

    //Layout creation ah the top
    movie_list = new QComboBox(this);
    search_button = new QPushButton("Recherche", this);
    top_layout = new QHBoxLayout;
    top_layout->addWidget(movie_list,8);
    top_layout->addWidget(search_button,1);



    //We gather all the layout
    final_layout = new QVBoxLayout;
    final_layout->addLayout(top_layout,1);
    final_layout->addLayout(middle_layout,6);
    final_layout->addLayout(bot_layout,3);



    /*Signal & Slot Creation with 2 syntax
    //connect(bt_3, &QPushButton::clicked, this, &MainWindow::fermer );
    // connect(bt_3, &QPushButton::clicked, [this](){ this->close(); } );
     [capture](params) { *code* }*/

    setLayout(final_layout);
}

MainWindow::~MainWindow()
{
}