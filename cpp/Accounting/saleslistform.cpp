#include "saleslistform.h"
#include "ui_saleslistform.h"
#include <QSqlQuery>
#include <QMessageBox>
SalesListForm::SalesListForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SalesListForm)
{
    ui->setupUi(this);

    model = new QSqlTableModel(this);
    connect(ui->tableView_sales, &QTableView::clicked, this, &SalesListForm::onTableClicked);
    ui->tableView_sales->setStyleSheet(table_saleslist);
    ui->tableView_sales->verticalHeader()->setDefaultSectionSize(50);
    ui->tableView_sales->setEditTriggers(QAbstractItemView::NoEditTriggers);

    loadSales();

    QTimer::singleShot(0, this, [=]() {
        populateTable();
    });
}

SalesListForm::~SalesListForm()
{
    delete ui;
}
void SalesListForm::loadSales()
{
    model->setTable("Sales");
    model->select();
    ui->tableView_sales->setModel(model);
}

void SalesListForm::onTableClicked(const QModelIndex &index)
{
    int row = index.row();
    ui->lineEdit_code->setText(model->data(model->index(row, 1)).toString());
    ui->lineEdit_name->setText(model->data(model->index(row, 2)).toString());
    ui->lineEdit_quantity->setText(model->data(model->index(row, 3)).toString());
    ui->lineEdit_price->setText(model->data(model->index(row, 4)).toString());
    ui->lineEdit_total->setText(model->data(model->index(row, 5)).toString());
    ui->lineEdit_date->setText(model->data(model->index(row, 6)).toString());


    selectedSaleId = model->data(model->index(row, 0)).toInt();
    selectedProductCode = model->data(model->index(row, 1)).toString();
    selectedQuantity = model->data(model->index(row, 3)).toInt();

}

void SalesListForm::on_pushButton_deleteSale_clicked()
{
    if (selectedSaleId == -1) {
        QMessageBox::warning(this, "خطا", "لطفاً یک ردیف را انتخاب کنید.");
        return;
    }

    QSqlQuery query;

    query.prepare("DELETE FROM Sales WHERE SaleID = ?");
    query.addBindValue(selectedSaleId);
    if (!query.exec()) {
        QMessageBox::critical(this, "خطا", "حذف از جدول فروش ناموفق بود.");
        return;
    }

    query.prepare("UPDATE Products SET Stock = Stock + ? WHERE ProductCode = ?");
    query.addBindValue(selectedQuantity);
    query.addBindValue(selectedProductCode);
    if (!query.exec()) {
        QMessageBox::critical(this, "خطا", "بروزرسانی موجودی کالا ناموفق بود.");
        return;
    }

    QMessageBox::information(this, "موفق", "فروش حذف شد و موجودی کالا بروزرسانی شد.");
    loadSales();
    selectedSaleId = -1;
    QTimer::singleShot(0, this, [=]() {
        populateTable();
    });
}

void SalesListForm::on_pushButton_menu_clicked()
{
    Menu *menu = new Menu();
    menu->setAttribute(Qt::WA_DeleteOnClose);
    menu->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});

}
void SalesListForm::populateTable(){
    ui->tableView_sales->horizontalHeader()->setStretchLastSection(false);
    ui->tableView_sales->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    ui->tableView_sales->verticalHeader()->hide();
    ui->tableView_sales->horizontalHeader()->setSectionsMovable(false);
    ui->tableView_sales->horizontalHeader()->setSectionsClickable(false);
    QHeaderView *header = ui->tableView_sales->horizontalHeader();
    for (int i = 0; i < 7; ++i) {
        header->setSectionResizeMode(i, QHeaderView::Fixed);
    }
    int totalWidth = ui->tableView_sales->viewport()->width();

    for (int i = 0; i < 6; ++i) {
        ui->tableView_sales->setColumnWidth(i, totalWidth * 0.13);
    }
    ui->tableView_sales->setColumnWidth(6, totalWidth * 0.22);


}

