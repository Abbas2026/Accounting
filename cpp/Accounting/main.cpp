#include "login.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>
#include <QApplication>
#include <QFontDatabase>
#include "menu.h"
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
    int fontId = QFontDatabase::addApplicationFont(":/fonts/Dana-Bold.ttf");
    QString family = QFontDatabase::applicationFontFamilies(fontId).at(0);
    QFont customFont(family, 10);

    a.setFont(customFont);
    if (!connectToSQLServer()){
        return -1;}

    Menu w;
    w.showFullScreen();
    return a.exec();
}
