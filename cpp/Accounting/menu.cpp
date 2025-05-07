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

void Menu::on_pushButton_exit_clicked()
{
    if (QMessageBox::question(this, "خروج", "آیا از بستن برنامه مطمئن هستید؟")  == QMessageBox::Yes)
    {
        this->close();
    }
}

void Menu::on_pushButton_logout_clicked()
{
    Login *login = new Login();
    login->setAttribute(Qt::WA_DeleteOnClose);
    login->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void Menu::on_pushButton_adduser_clicked()
{
    AddUser *adduser = new AddUser();
    adduser->setAttribute(Qt::WA_DeleteOnClose);
    adduser->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}


void Menu::on_pushButton_salelist_clicked()
{
    SalesListForm *saleslist = new SalesListForm();
    saleslist->setAttribute(Qt::WA_DeleteOnClose);
    saleslist->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void Menu::on_pushButton_editpr_clicked()
{
    productlistform *prlistform = new productlistform();
    prlistform->setAttribute(Qt::WA_DeleteOnClose);
    prlistform->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}


void Menu::on_pushButton_sellpr_clicked()
{
    SaleForm *saleform = new SaleForm();
    saleform->setAttribute(Qt::WA_DeleteOnClose);
    saleform->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void Menu::on_pushButton_login_clicked()
{
    AddProductForm *addprform = new AddProductForm();
    addprform->setAttribute(Qt::WA_DeleteOnClose);
    addprform->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

