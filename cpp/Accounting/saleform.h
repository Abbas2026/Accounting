#ifndef SALEFORM_H
#define SALEFORM_H

#include <QWidget>

namespace Ui {
class SaleForm;
}

class SaleForm : public QWidget
{
    Q_OBJECT

public:
    explicit SaleForm(QWidget *parent = nullptr);
    ~SaleForm();

private:
    Ui::SaleForm *ui;
};

#endif // SALEFORM_H
