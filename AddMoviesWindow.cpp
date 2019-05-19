#include "AddMoviesWindow.h"

AddMoviesWindow::AddMoviesWindow(QWidget *parent)
        : QWidget(parent)
{

    seizure_layout = new QFormLayout;

    title_text = new QLineEdit(this);
    seizure_layout->addRow("Titre :", title_text);
    release_text = new QLineEdit(this);
    seizure_layout->addRow("Date de sortie :", release_text);
    productor_text = new QLineEdit(this);
    seizure_layout->addRow("Producteur :", productor_text);

    actor1_text = new QLineEdit(this);
    seizure_layout->addRow("Acteur 1 :", actor1_text);
    actor2_text = new QLineEdit(this);
    seizure_layout->addRow("Acteur 2 :", actor2_text);
    actor3_text = new QLineEdit(this);
    seizure_layout->addRow("Acteur 3 :", actor3_text);

    genre1_text = new QLineEdit(this);
    seizure_layout->addRow("Genre 1 :", genre1_text);
    genre2_text = new QLineEdit(this);
    seizure_layout->addRow("Genre 2 :", genre2_text);
    genre3_text = new QLineEdit(this);
    seizure_layout->addRow("Genre 3 :", genre3_text);

    nationality_text = new QLineEdit(this);
    seizure_layout->addRow("Nationalité :", nationality_text);

   //Creation of bottom layout
    ok_button = new QPushButton("Valider", this);
    close_button = new QPushButton("Annuler", this);
    bot_layout = new QHBoxLayout;
    bot_layout->addWidget(ok_button);
    bot_layout->addWidget(close_button);

    //Creation of final layout
    final_layout = new QVBoxLayout;
    final_layout->addLayout(seizure_layout);
    final_layout->addLayout(bot_layout);

    setLayout(final_layout);

    //Close Button connection
    connect(close_button, &QPushButton::clicked, [this] () {
        this->close(); });
}


AddMoviesWindow::~AddMoviesWindow()
{
}