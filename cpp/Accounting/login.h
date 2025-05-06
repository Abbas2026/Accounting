#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "menu.h"
#include "saleform.h"
#include "styles.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class Login;
}
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();
    void applystyle();


private slots:
    void on_pushButton_login_clicked();    
    void on_pushButton_exit_clicked();

private:
    Ui::Login *ui;
};
#endif // LOGIN_H
