#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include <QTimer>
#include "addproductform.h"
#include "saleform.h"
#include "productlistform.h"
#include "saleslistform.h"
#include "adduser.h"
#include "login.h"
namespace Ui {
class Menu;
}

class Menu : public QWidget
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:

    void on_pushButton_exit_clicked();

    void on_pushButton_logout_clicked();

    void on_pushButton_adduser_clicked();

    void on_pushButton_salelist_clicked();

    void on_pushButton_editpr_clicked();

    void on_pushButton_sellpr_clicked();

    void on_pushButton_login_clicked();

private:
    Ui::Menu *ui;
};

#endif // MENU_H
