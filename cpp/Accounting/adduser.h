#ifndef ADDUSER_H
#define ADDUSER_H

#include <QWidget>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
namespace Ui {
class AddUser;
}

class AddUser : public QWidget
{
    Q_OBJECT

public:
    explicit AddUser(QWidget *parent = nullptr);
    ~AddUser();

private slots:
    void on_pushButton_addUser_clicked();

private:
    Ui::AddUser *ui;
};

#endif // ADDUSER_H
