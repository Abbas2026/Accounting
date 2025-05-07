#ifndef SALESLISTFORM_H
#define SALESLISTFORM_H

#include <QWidget>
#include <QSqlTableModel>
#include "menu.h"
#include "styles.h"
namespace Ui {
class SalesListForm;
}

class SalesListForm : public QWidget
{
    Q_OBJECT

public:
    explicit SalesListForm(QWidget *parent = nullptr);
    ~SalesListForm();
    void populateTable();

private slots:
    void onTableClicked(const QModelIndex &index);
    void on_pushButton_deleteSale_clicked();
    void on_pushButton_menu_clicked();

private:
    Ui::SalesListForm *ui;
    QSqlTableModel *model;
    int selectedSaleId = -1;
    QString selectedProductCode;
    int selectedQuantity = 0;
    void loadSales();
};

#endif // SALESLISTFORM_H
