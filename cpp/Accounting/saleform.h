#ifndef SALEFORM_H
#define SALEFORM_H

#include <QWidget>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
namespace Ui {
class SaleForm;
}

class SaleForm : public QWidget
{
    Q_OBJECT

public:
    explicit SaleForm(QWidget *parent = nullptr);
    ~SaleForm();

private slots:
    void on_pushButton_checkProduct_clicked();

    void on_pushButton_submitSale_clicked();

    void on_pushButton_exit_clicked();

private:
    Ui::SaleForm *ui;
};

#endif // SALEFORM_H
