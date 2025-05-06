#include "saleslistform.h"
#include "ui_saleslistform.h"

SalesListForm::SalesListForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SalesListForm)
{
    ui->setupUi(this);
}

SalesListForm::~SalesListForm()
{
    delete ui;
}
