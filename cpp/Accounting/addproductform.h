#ifndef ADDPRODUCTFORM_H
#define ADDPRODUCTFORM_H

#include <QWidget>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include "menu.h"
namespace Ui {
class AddProductForm;
}

class AddProductForm : public QWidget
{
    Q_OBJECT

public:
    explicit AddProductForm(QWidget *parent = nullptr);
    ~AddProductForm();
    void addProductToDB();
    bool isAnyFieldEmpty();

private slots:
    void on_pushButton_menu_clicked();

private:
    Ui::AddProductForm *ui;
};

#endif // ADDPRODUCTFORM_H
