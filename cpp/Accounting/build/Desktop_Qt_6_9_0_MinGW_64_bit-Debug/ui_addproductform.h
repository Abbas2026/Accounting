/********************************************************************************
** Form generated from reading UI file 'addproductform.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPRODUCTFORM_H
#define UI_ADDPRODUCTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddProductForm
{
public:
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_code;
    QLineEdit *lineEdit_buy;
    QLineEdit *lineEdit_sell;
    QLineEdit *lineEdit_stock;
    QLabel *label_name;
    QLabel *label_code;
    QLabel *label_buy;
    QLabel *label_sell;
    QLabel *label_stock;
    QPushButton *btn_addProduct;

    void setupUi(QWidget *AddProductForm)
    {
        if (AddProductForm->objectName().isEmpty())
            AddProductForm->setObjectName("AddProductForm");
        AddProductForm->resize(1267, 879);
        lineEdit_name = new QLineEdit(AddProductForm);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setGeometry(QRect(880, 170, 113, 24));
        lineEdit_code = new QLineEdit(AddProductForm);
        lineEdit_code->setObjectName("lineEdit_code");
        lineEdit_code->setGeometry(QRect(880, 230, 113, 24));
        lineEdit_buy = new QLineEdit(AddProductForm);
        lineEdit_buy->setObjectName("lineEdit_buy");
        lineEdit_buy->setGeometry(QRect(880, 290, 113, 24));
        lineEdit_sell = new QLineEdit(AddProductForm);
        lineEdit_sell->setObjectName("lineEdit_sell");
        lineEdit_sell->setGeometry(QRect(880, 350, 113, 24));
        lineEdit_stock = new QLineEdit(AddProductForm);
        lineEdit_stock->setObjectName("lineEdit_stock");
        lineEdit_stock->setGeometry(QRect(880, 410, 113, 24));
        label_name = new QLabel(AddProductForm);
        label_name->setObjectName("label_name");
        label_name->setGeometry(QRect(1060, 180, 71, 16));
        label_code = new QLabel(AddProductForm);
        label_code->setObjectName("label_code");
        label_code->setGeometry(QRect(1060, 240, 71, 16));
        label_buy = new QLabel(AddProductForm);
        label_buy->setObjectName("label_buy");
        label_buy->setGeometry(QRect(1060, 296, 71, 20));
        label_sell = new QLabel(AddProductForm);
        label_sell->setObjectName("label_sell");
        label_sell->setGeometry(QRect(1060, 360, 71, 16));
        label_stock = new QLabel(AddProductForm);
        label_stock->setObjectName("label_stock");
        label_stock->setGeometry(QRect(1060, 420, 71, 16));
        btn_addProduct = new QPushButton(AddProductForm);
        btn_addProduct->setObjectName("btn_addProduct");
        btn_addProduct->setGeometry(QRect(900, 480, 80, 24));

        retranslateUi(AddProductForm);

        QMetaObject::connectSlotsByName(AddProductForm);
    } // setupUi

    void retranslateUi(QWidget *AddProductForm)
    {
        AddProductForm->setWindowTitle(QCoreApplication::translate("AddProductForm", "Form", nullptr));
        label_name->setText(QCoreApplication::translate("AddProductForm", "\331\206\330\247\331\205 \332\251\330\247\331\204\330\247", nullptr));
        label_code->setText(QCoreApplication::translate("AddProductForm", "\332\251\330\257 \332\251\330\247\331\204\330\247", nullptr));
        label_buy->setText(QCoreApplication::translate("AddProductForm", "\331\202\333\214\331\205\330\252 \330\256\330\261\333\214\330\257", nullptr));
        label_sell->setText(QCoreApplication::translate("AddProductForm", "\331\202\333\214\331\205\330\252 \331\201\330\261\331\210\330\264", nullptr));
        label_stock->setText(QCoreApplication::translate("AddProductForm", "\330\252\330\271\330\257\330\247\330\257", nullptr));
        btn_addProduct->setText(QCoreApplication::translate("AddProductForm", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddProductForm: public Ui_AddProductForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPRODUCTFORM_H
