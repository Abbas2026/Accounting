#include "adduser.h"
#include "ui_adduser.h"

AddUser::AddUser(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AddUser)
{
    ui->setupUi(this);
}

AddUser::~AddUser()
{
    delete ui;
}

void AddUser::on_pushButton_addUser_clicked()
{
    QString name = ui->lineEdit_name->text();
    QString username = ui->lineEdit_username->text();
    QString phone = ui->lineEdit_phone->text();
    QString password = ui->lineEdit_password->text();

    if ( username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "خطا", "لطفاً نام کاربری و رمز عبور را وارد کنید.");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO Users (FullName, Username, PhoneNumber, Password) "
                  "VALUES (?, ?, ?, ?)");
    query.addBindValue(name);
    query.addBindValue(username);
    query.addBindValue(phone);
    query.addBindValue(password);

    if (query.exec()) {
        QMessageBox::information(this, "موفق", "کاربر با موفقیت اضافه شد.");

    } else {
        QMessageBox::critical(this, "خطا", "ثبت کاربر ناموفق بود:\n" + query.lastError().text());
    }
}

