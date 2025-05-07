#include "saleform.h"
#include "ui_saleform.h"

SaleForm::SaleForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SaleForm)
{
    ui->setupUi(this);
    connect(ui->lineEdit_sellPrice, &QLineEdit::textChanged, this, &SaleForm::updateTotalPrice);
    connect(ui->lineEdit_quantity, &QLineEdit::textChanged, this, &SaleForm::updateTotalPrice);
    ui->lineEdit_productName->setVisible(false);
    ui->lineEdit_sellPrice->setVisible(false);
    ui->lineEdit_quantity->setVisible(false);
    ui->lineEdit_total->setVisible(false);
    ui->label_name->setVisible(false);
    ui->label_quantity->setVisible(false);
    ui->label_total->setVisible(false);
    ui->label_sellprice->setVisible(false);
    ui->pushButton_submitSale->setVisible(false);

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
        ui->lineEdit_productName->setVisible(true);
        ui->lineEdit_sellPrice->setVisible(true);
        ui->lineEdit_quantity->setVisible(true);
        ui->lineEdit_total->setVisible(true);
        ui->label_name->setVisible(true);
        ui->label_quantity->setVisible(true);
        ui->label_total->setVisible(true);
        ui->label_sellprice->setVisible(true);
        ui->pushButton_submitSale->setVisible(true);
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
    ui->lineEdit_productName->setVisible(false);
    ui->lineEdit_sellPrice->setVisible(false);
    ui->lineEdit_quantity->setVisible(false);
    ui->lineEdit_total->setVisible(false);
    ui->label_name->setVisible(false);
    ui->label_quantity->setVisible(false);
    ui->label_total->setVisible(false);
    ui->label_sellprice->setVisible(false);
    ui->pushButton_submitSale->setVisible(false);
}


void SaleForm::on_pushButton_exit_clicked()
{
    if (QMessageBox::question(this, "خروج", "آیا از بستن برنامه مطمئن هستید؟")  == QMessageBox::Yes)
    {
        this->close();
    }}

void SaleForm::updateTotalPrice()
{
    bool ok1, ok2;
    int price = ui->lineEdit_sellPrice->text().toInt(&ok1);
    int quantity = ui->lineEdit_quantity->text().toInt(&ok2);

    if (ok1 && ok2) {
        int total = price * quantity;
        ui->lineEdit_total->setText(QString::number(total));
    } else {
        ui->lineEdit_total->clear();
    }
}

void SaleForm::on_pushButton_logout_clicked()
{
    Login *login = new Login();
    login->setAttribute(Qt::WA_DeleteOnClose);
    login->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

