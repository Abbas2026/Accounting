#include "addproductform.h"
#include "ui_addproductform.h"

AddProductForm::AddProductForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AddProductForm)
{
    ui->setupUi(this);
    connect(ui->btn_addProduct, &QPushButton::clicked, this, &AddProductForm::addProductToDB);
}

AddProductForm::~AddProductForm()
{
    delete ui;
}

void AddProductForm::addProductToDB()
{
    QString name = ui->lineEdit_name->text();
    QString code = ui->lineEdit_code->text();
    int buyPrice = ui->lineEdit_buy->text().toInt();
    int sellPrice = ui->lineEdit_sell->text().toInt();
    int stock = ui->lineEdit_stock->text().toInt();

    if (isAnyFieldEmpty()) {
        QMessageBox::warning(this, "خطا", "لطفاً همه فیلدها را وارد کنید.");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO Products (ProductCode, ProductName, BuyPrice, SellPrice, Stock) "
                  "VALUES (?, ?, ?, ?, ?)");
    query.addBindValue(code);
    query.addBindValue(name);
    query.addBindValue(buyPrice);
    query.addBindValue(sellPrice);
    query.addBindValue(stock);

    if (query.exec()) {
        QMessageBox::information(this, "موفق", "کالا با موفقیت ثبت شد.");
        ui->lineEdit_name->clear();
        ui->lineEdit_code->clear();
        ui->lineEdit_buy->clear();
        ui->lineEdit_sell->clear();
        ui->lineEdit_stock->clear();
    } else {
        QMessageBox::critical(this, "خطا", "ثبت کالا ناموفق بود:\n" + query.lastError().text());
    }
}


bool AddProductForm::isAnyFieldEmpty()
{
    return ui->lineEdit_name->text().isEmpty() ||
           ui->lineEdit_code->text().isEmpty() ||
           ui->lineEdit_buy->text().isEmpty() ||
           ui->lineEdit_sell->text().isEmpty() ||
           ui->lineEdit_stock->text().isEmpty();
}

void AddProductForm::on_pushButton_menu_clicked()
{
    Menu *menu = new Menu();
    menu->setAttribute(Qt::WA_DeleteOnClose);
    menu->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});

}

