#ifndef PRODUCTLISTFORM_H
#define PRODUCTLISTFORM_H

#include <QWidget>
#include <QSqlTableModel>
#include <QSqlDatabase>
#include <QSqlRecord>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include "menu.h"
namespace Ui {
class productlistform;
}

class productlistform : public QWidget
{
    Q_OBJECT

public:
    explicit productlistform(QWidget *parent = nullptr);
    ~productlistform();

private slots:
    void on_tableView_clicked(const QModelIndex &index);
    void onTableClicked(const QModelIndex &index);
    void on_pushButton_delete_clicked();
    void on_pushButton_edit_clicked();

    void on_pushButton_refresh_clicked();

    void on_pushButton_menu_clicked();

private:
    Ui::productlistform *ui;
    QSqlTableModel *model;
    void loadProducts();
};

#endif // PRODUCTLISTFORM_H
