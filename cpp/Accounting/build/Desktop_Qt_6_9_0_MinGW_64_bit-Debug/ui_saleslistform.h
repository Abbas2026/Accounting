/********************************************************************************
** Form generated from reading UI file 'saleslistform.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALESLISTFORM_H
#define UI_SALESLISTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SalesListForm
{
public:
    QTableView *tableView_sales;
    QPushButton *pushButton_deleteSale;
    QLineEdit *lineEdit_code;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_quantity;
    QLineEdit *lineEdit_price;
    QLineEdit *lineEdit_total;
    QLineEdit *lineEdit_date;

    void setupUi(QWidget *SalesListForm)
    {
        if (SalesListForm->objectName().isEmpty())
            SalesListForm->setObjectName("SalesListForm");
        SalesListForm->resize(1053, 650);
        tableView_sales = new QTableView(SalesListForm);
        tableView_sales->setObjectName("tableView_sales");
        tableView_sales->setGeometry(QRect(30, 40, 781, 311));
        pushButton_deleteSale = new QPushButton(SalesListForm);
        pushButton_deleteSale->setObjectName("pushButton_deleteSale");
        pushButton_deleteSale->setGeometry(QRect(450, 500, 80, 24));
        lineEdit_code = new QLineEdit(SalesListForm);
        lineEdit_code->setObjectName("lineEdit_code");
        lineEdit_code->setGeometry(QRect(750, 400, 113, 24));
        lineEdit_name = new QLineEdit(SalesListForm);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setGeometry(QRect(630, 400, 113, 24));
        lineEdit_quantity = new QLineEdit(SalesListForm);
        lineEdit_quantity->setObjectName("lineEdit_quantity");
        lineEdit_quantity->setGeometry(QRect(510, 400, 113, 24));
        lineEdit_price = new QLineEdit(SalesListForm);
        lineEdit_price->setObjectName("lineEdit_price");
        lineEdit_price->setGeometry(QRect(390, 400, 113, 24));
        lineEdit_total = new QLineEdit(SalesListForm);
        lineEdit_total->setObjectName("lineEdit_total");
        lineEdit_total->setGeometry(QRect(270, 400, 113, 24));
        lineEdit_date = new QLineEdit(SalesListForm);
        lineEdit_date->setObjectName("lineEdit_date");
        lineEdit_date->setGeometry(QRect(100, 400, 161, 24));

        retranslateUi(SalesListForm);

        QMetaObject::connectSlotsByName(SalesListForm);
    } // setupUi

    void retranslateUi(QWidget *SalesListForm)
    {
        SalesListForm->setWindowTitle(QCoreApplication::translate("SalesListForm", "Form", nullptr));
        pushButton_deleteSale->setText(QCoreApplication::translate("SalesListForm", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SalesListForm: public Ui_SalesListForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALESLISTFORM_H
