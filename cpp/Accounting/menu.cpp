#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_clicked()
{
    this->close();
    AddProductForm *addprform = new AddProductForm();
    addprform->setAttribute(Qt::WA_DeleteOnClose);
    addprform->show();
}

