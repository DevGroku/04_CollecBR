
#include "mainwindow.h"
#include "AddMoviesWindow.h"

MainWindow::MainWindow(QWidget *parent)
        : QWidget(parent)
{

    edit_window = new AddMoviesWindow;
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
    bot_layout->setContentsMargins(11,11,11,11);

    //Layout creation with actor & genre
    actor_label = new QLabel("acteurs",this);
    genre_label = new QLabel("Genres",this);
    listinggenre_label = new QLabel("genre11111111", this);
    listingactor_label = new QLabel("actor11111111", this);
    actor_genre_layout = new QVBoxLayout;
    actor_genre_layout->addWidget(actor_label);
    actor_genre_layout->addWidget(listingactor_label);
    actor_genre_layout->addWidget(genre_label);
    actor_genre_layout->addWidget(listinggenre_label);
    //actor1_label->setStyleSheet("border: 1px solid black");
    actor_genre_layout->setContentsMargins(11,11,11,11);

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
    middle_layout->setContentsMargins(11,0,11,0);

    //Layout creation ah the top
    movie_list = new QComboBox(this);
    for (int i=0; i<10 ; i++) {
        movie_list->addItem("film");
    }
    search_button = new QPushButton("Recherche", this);
    top_layout = new QHBoxLayout;
    top_layout->addWidget(movie_list,8);
    top_layout->addWidget(search_button,1);
    top_layout->setContentsMargins(11,0,11,11);

    //Menubar creation
    menu_main = new QMenuBar(this);
    menu_main->setFixedHeight(25);
    file_menu = new QMenu("Fichier",this);
    edition_menu = new QMenu("Edition",this);
    menu_main->addMenu(file_menu);
    menu_main->addMenu(edition_menu);

    //We gather all the layout
    final_layout = new QVBoxLayout;
    final_layout->addWidget(menu_main,1);
    final_layout->addLayout(top_layout,1);
    final_layout->addLayout(middle_layout,6);
    final_layout->addLayout(bot_layout,3);
    final_layout->setContentsMargins(0,0,0,0);

    /*Signal & Slot Creation with 2 syntax
    //connect(bt_3, &QPushButton::clicked, this, &MainWindow::fermer );
    // connect(bt_3, &QPushButton::clicked, [this](){ this->close(); } );
     [capture](params) { *code* }*/

    setLayout(final_layout);

    connect(edit_button, &QPushButton::clicked, [this] () {
        edit_window->show();
        edit_window->setFixedSize(300,300);
        edit_window->setWindowTitle("CollecBR"); });
}

MainWindow::~MainWindow()
{
}
