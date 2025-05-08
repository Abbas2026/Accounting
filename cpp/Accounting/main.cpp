#include "login.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>
#include <QApplication>
#include <QFontDatabase>
#include "menu.h"

bool connectToSQLServer() {

        QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QODBC");
    QString connStr = "Driver={SQL Server};"
                      "Server=172.27.102.234;"
                      "Database=AccountingDB;"
                      "Uid=sales_user;"
                      "Pwd=test12345;"
                      "Encrypt=no;";

    db.setDatabaseName(connStr);

    if (!db.open()) {
        QMessageBox::critical(nullptr, "Connection Error", db.lastError().text());
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
