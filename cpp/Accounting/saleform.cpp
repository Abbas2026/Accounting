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
