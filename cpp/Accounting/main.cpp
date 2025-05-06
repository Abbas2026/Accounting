#include "login.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>
#include <QApplication>

bool connectToSQLServer() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Driver={SQL Server};Server=3STAR\\SQLEXPRESS;Database=AccountingDB;Trusted_Connection=yes;");

    if (!db.open()) {
        QMessageBox::critical(nullptr, "خطا در اتصال به دیتابیس", db.lastError().text());
        return false;
    }
    return true;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    if (!connectToSQLServer()){
        return -1;}

    Login w;
    w.show();
    return a.exec();
}
