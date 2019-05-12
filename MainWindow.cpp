#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
        : QWidget(parent)
{
    //Layout creation of the movies already seen
    see_radiobutton = new QRadioButton("Vu",this);
    historyseen_button = new QPushButton("Historique vues",this);
    alreadyseen_layout = new QHBoxLayout;
    alreadyseen_layout->addWidget(see_radiobutton,1);
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

    //Layout creation at the middle
    image_label = new QLabel(this);
    actor_text = new QTextEdit(this);
    poster_layout = new QHBoxLayout;
    poster_layout->addWidget(image_label,1);
    poster_layout->addWidget(actor_text,2);
    synopsys_label = new QLabel(this);
    synopsys_text = new QTextEdit(this);
    middle_layout = new QVBoxLayout;
    middle_layout->addLayout(poster_layout,4);
    middle_layout->addWidget(synopsys_label,0.5);
    middle_layout->addWidget(synopsys_text,4);

    //We gather all the layout
    final_layout = new QVBoxLayout;
    final_layout->addLayout(middle_layout,2);
    final_layout->addLayout(bot_layout,1);



    /*Signal & Slot Creation with 2 syntax
    //connect(bt_3, &QPushButton::clicked, this, &MainWindow::fermer );
    // connect(bt_3, &QPushButton::clicked, [this](){ this->close(); } );
     [capture](params) { *code* }*/

    setLayout(final_layout);
}

MainWindow::~MainWindow()
{
}
