#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    applystyle();
}

Login::~Login()
{
    delete ui;
}
void Login::applystyle()
{
    ui->pushButton_login->setStyleSheet(baseStyle);
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
            Menu *menu = new Menu();
            menu->setAttribute(Qt::WA_DeleteOnClose);
            menu->showFullScreen();
            QTimer::singleShot(1000, this, [this]() {this->close();});
        }
        else{
            SaleForm *saleform = new SaleForm();
            saleform->setAttribute(Qt::WA_DeleteOnClose);
            saleform->showFullScreen();
            QTimer::singleShot(1000, this, [this]() {this->close();});
        }

    } else {
        QMessageBox::warning(this, "خطا", "نام کاربری یا رمز عبور اشتباه است.");
    }
}


void Login::on_pushButton_exit_clicked()
{
    if (QMessageBox::question(this, "خروج", "آیا از بستن برنامه مطمئن هستید؟") == QMessageBox::Yes)
    {
        this->close();
    }
}
