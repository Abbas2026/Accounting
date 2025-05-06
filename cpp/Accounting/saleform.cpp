#include "saleform.h"
#include "ui_saleform.h"

SaleForm::SaleForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SaleForm)
{
    ui->setupUi(this);
}

SaleForm::~SaleForm()
{
    delete ui;
}

void SaleForm::on_pushButton_checkProduct_clicked()
{
    QString code = ui->lineEdit_code->text().trimmed();

    if (code.isEmpty()) {
        QMessageBox::warning(this, "خطا", "لطفاً کد کالا را وارد کنید.");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT ProductName, SellPrice FROM Products WHERE ProductCode = :code");
    query.bindValue(":code", code);

    if (query.exec() && query.next()) {
        ui->lineEdit_productName->setText(query.value(0).toString());
        ui->lineEdit_sellPrice->setText(query.value(1).toString());
    } else {
        QMessageBox::warning(this, "خطا", "کالایی با این کد پیدا نشد.");
        ui->lineEdit_productName->clear();
        ui->lineEdit_sellPrice->clear();
    }
}


void SaleForm::on_pushButton_submitSale_clicked()
{
    QString code = ui->lineEdit_code->text().trimmed();
    int quantity = ui->lineEdit_quantity->text().toInt();
    QString name = ui->lineEdit_productName->text().trimmed();
    int SalePrice = ui->lineEdit_sellPrice->text().toInt();
    int totalPrice = SalePrice * quantity;

    if (code.isEmpty() || quantity <= 0) {
        QMessageBox::warning(this, "خطا", "لطفاً کد کالا و تعداد معتبر وارد کنید.");
        return;
    }

    QSqlDatabase db = QSqlDatabase::database();
    QSqlQuery query;

        query.prepare("SELECT Stock FROM Products WHERE ProductCode = :code");
    query.bindValue(":code", code);
    if (!query.exec() || !query.next()) {
        QMessageBox::critical(this, "خطا", "کالا پیدا نشد.");
        return;
    }

    int currentStock = query.value(0).toInt();
    if (currentStock < quantity) {
        QMessageBox::warning(this, "خطا", "موجودی کافی نیست.");
        return;
    }

    QSqlQuery insertSale;
    insertSale.prepare(R"(
        INSERT INTO Sales (ProductCode, ProductName, SalePrice, Quantity, TotalPrice, SaleDate)
        VALUES (:code, :name, :SalePrice, :quantity, :totalPrice, GETDATE())
    )");
    insertSale.bindValue(":code", code);
    insertSale.bindValue(":name", name);
    insertSale.bindValue(":SalePrice", SalePrice);
    insertSale.bindValue(":quantity", quantity);
    insertSale.bindValue(":totalPrice", totalPrice);
    if (!insertSale.exec()) {
        QMessageBox::critical(this, "خطا", "خطا در ثبت فروش:\n" + insertSale.lastError().text());
        return;
    }

    QSqlQuery updateStock;
    updateStock.prepare("UPDATE Products SET Stock = Stock - :quantity WHERE ProductCode = :code");
    updateStock.bindValue(":quantity", quantity);
    updateStock.bindValue(":code", code);
    if (!updateStock.exec()) {
        QMessageBox::critical(this, "خطا", "خطا در کاهش موجودی:\n" + updateStock.lastError().text());
        return;
    }

    QMessageBox::information(this, "موفق", "فروش با موفقیت ثبت شد.");
    ui->lineEdit_code->clear();
    ui->lineEdit_productName->clear();
    ui->lineEdit_sellPrice->clear();
    ui->lineEdit_quantity->clear();
}

