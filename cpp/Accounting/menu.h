#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include "addproductform.h"
#include "saleform.h"
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
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Menu *ui;
};

#endif // MENU_H
