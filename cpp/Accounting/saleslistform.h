#ifndef SALESLISTFORM_H
#define SALESLISTFORM_H

#include <QWidget>

namespace Ui {
class SalesListForm;
}

class SalesListForm : public QWidget
{
    Q_OBJECT

public:
    explicit SalesListForm(QWidget *parent = nullptr);
    ~SalesListForm();

private:
    Ui::SalesListForm *ui;
};

#endif // SALESLISTFORM_H
