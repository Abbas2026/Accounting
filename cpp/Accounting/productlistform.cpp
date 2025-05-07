#include "productlistform.h"
#include "ui_productlistform.h"

productlistform::productlistform(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::productlistform)
{
    ui->setupUi(this);
    connect(ui->table_product, &QTableView::clicked, this, &productlistform::onTableClicked);
    connect(ui->pushButton_refresh, &QPushButton::clicked, this, &productlistform::on_pushButton_refresh_clicked);
    ui->table_product->setStyleSheet(table_saleslist);
    ui->table_product->verticalHeader()->setDefaultSectionSize(50);
    loadProducts();
    QTimer::singleShot(0, this, [=]() {
        populateTable();
    });
}

productlistform::~productlistform()
{
    delete ui;
}

void productlistform::loadProducts()
{
    model = new QSqlTableModel(this);
    model->setTable("Products");
    model->select();

    model->setHeaderData(0, Qt::Horizontal, "ردیف");
    model->setHeaderData(1, Qt::Horizontal, " کدکالا");
    model->setHeaderData(2, Qt::Horizontal, "نام");
    model->setHeaderData(3, Qt::Horizontal, "قیمت خرید");
    model->setHeaderData(4, Qt::Horizontal, "قیمت فروش");
    model->setHeaderData(5, Qt::Horizontal, "موجودی");

    ui->table_product->setModel(model);
    ui->table_product->resizeColumnsToContents();
    ui->table_product->setSelectionBehavior(QAbstractItemView::SelectRows);
}
void productlistform::onTableClicked(const QModelIndex &index)
{
    int row = index.row();

    ui->lineEdit_code->setText(model->data(model->index(row, 1)).toString());
    ui->lineEdit_name->setText(model->data(model->index(row, 2)).toString());
    ui->lineEdit_buy->setText(model->data(model->index(row, 3)).toString());
    ui->lineEdit_sell->setText(model->data(model->index(row, 4)).toString());
    ui->lineEdit_stock->setText(model->data(model->index(row, 5)).toString());
}


void productlistform::on_tableView_clicked(const QModelIndex &index)
{
    int row = index.row();

    ui->lineEdit_code->setText(model->data(model->index(row, 0)).toString());
    ui->lineEdit_name->setText(model->data(model->index(row, 1)).toString());
    ui->lineEdit_buy->setText(model->data(model->index(row, 2)).toString());
    ui->lineEdit_sell->setText(model->data(model->index(row, 3)).toString());
    ui->lineEdit_stock->setText(model->data(model->index(row, 4)).toString());
}


void productlistform::on_pushButton_delete_clicked()
{
    QString code = ui->lineEdit_code->text();
    if (code.isEmpty()) return;

    if (QMessageBox::question(this, "حذف کالا", "آیااز حذف کالا مطمئن هستید؟") != QMessageBox::Yes)
        return;

    QSqlQuery query;
    query.prepare("DELETE FROM Products WHERE ProductCode = ?");
    query.addBindValue(code);

    if (query.exec()) {
        QMessageBox::information(this, "حذف", "کالا حذف شد.");
        loadProducts();
    } else {
        QMessageBox::critical(this, "خطا", "حذف انجام نشد:\n" + query.lastError().text());
    }
}


void productlistform::on_pushButton_edit_clicked()
{
    QString code = ui->lineEdit_code->text();

    QSqlQuery query;
    query.prepare("UPDATE Products SET ProductName = ?, BuyPrice = ?, SellPrice = ?, Stock = ? WHERE ProductCode = ?");
    query.addBindValue(ui->lineEdit_name->text());
    query.addBindValue(ui->lineEdit_buy->text().toInt());
    query.addBindValue(ui->lineEdit_sell->text().toInt());
    query.addBindValue(ui->lineEdit_stock->text().toInt());
    query.addBindValue(code);

    if (query.exec()) {
        QMessageBox::information(this, "ویرایش", "کالا با موفقیت ویرایش شد.");
        loadProducts();
    } else {
        QMessageBox::critical(this, "خطا", "ویرایش انجام نشد:\n" + query.lastError().text());
    }
}


void productlistform::on_pushButton_refresh_clicked()
{
        loadProducts();
}


void productlistform::on_pushButton_menu_clicked()
{
    Menu *menu = new Menu();
    menu->setAttribute(Qt::WA_DeleteOnClose);
    menu->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});

}
void productlistform::populateTable(){
    ui->table_product->horizontalHeader()->setStretchLastSection(false);
    ui->table_product->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    ui->table_product->verticalHeader()->hide();
    ui->table_product->horizontalHeader()->setSectionsMovable(false);
    ui->table_product->horizontalHeader()->setSectionsClickable(false);
    QHeaderView *header = ui->table_product->horizontalHeader();
    for (int i = 0; i < 7; ++i) {
        header->setSectionResizeMode(i, QHeaderView::Fixed);
    }
    int totalWidth = ui->table_product->viewport()->width();

    for (int i = 0; i < 5; ++i) {
        ui->table_product->setColumnWidth(i, totalWidth * 0.20);
        header->setSectionResizeMode(i, QHeaderView::Stretch);
    }


}
