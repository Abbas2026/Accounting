#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}




void Login::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    QSqlQuery query;
    query.prepare("SELECT * FROM Users WHERE Username = ? AND Password = ?");
    query.addBindValue(username);
    query.addBindValue(password);

    if (query.exec() && query.next()) {
        if(username=="admin"){
            this->close();
            Menu *menu = new Menu();
            menu->setAttribute(Qt::WA_DeleteOnClose);
            menu->show();
        }
        else{
            this->close();
            SaleForm *saleform = new SaleForm();
            saleform->setAttribute(Qt::WA_DeleteOnClose);
            saleform->show();
        }

    } else {
        QMessageBox::warning(this, "خطا", "نام کاربری یا رمز عبور اشتباه است.");
    }
}

