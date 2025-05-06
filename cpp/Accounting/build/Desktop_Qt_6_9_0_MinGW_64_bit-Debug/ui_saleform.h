/********************************************************************************
** Form generated from reading UI file 'saleform.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALEFORM_H
#define UI_SALEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SaleForm
{
public:
    QLineEdit *lineEdit_code;
    QLineEdit *lineEdit_productName;
    QLineEdit *lineEdit_sellPrice;
    QLineEdit *lineEdit_quantity;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_checkProduct;
    QPushButton *pushButton_submitSale;

    void setupUi(QWidget *SaleForm)
    {
        if (SaleForm->objectName().isEmpty())
            SaleForm->setObjectName("SaleForm");
        SaleForm->resize(1082, 685);
        lineEdit_code = new QLineEdit(SaleForm);
        lineEdit_code->setObjectName("lineEdit_code");
        lineEdit_code->setGeometry(QRect(730, 40, 113, 24));
        lineEdit_productName = new QLineEdit(SaleForm);
        lineEdit_productName->setObjectName("lineEdit_productName");
        lineEdit_productName->setGeometry(QRect(730, 410, 113, 24));
        lineEdit_productName->setReadOnly(true);
        lineEdit_sellPrice = new QLineEdit(SaleForm);
        lineEdit_sellPrice->setObjectName("lineEdit_sellPrice");
        lineEdit_sellPrice->setGeometry(QRect(730, 460, 113, 24));
        lineEdit_sellPrice->setReadOnly(true);
        lineEdit_quantity = new QLineEdit(SaleForm);
        lineEdit_quantity->setObjectName("lineEdit_quantity");
        lineEdit_quantity->setGeometry(QRect(730, 510, 113, 24));
        label = new QLabel(SaleForm);
        label->setObjectName("label");
        label->setGeometry(QRect(850, 40, 49, 16));
        label_2 = new QLabel(SaleForm);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(880, 420, 49, 16));
        label_3 = new QLabel(SaleForm);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(850, 460, 81, 20));
        label_4 = new QLabel(SaleForm);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(880, 510, 49, 16));
        pushButton_checkProduct = new QPushButton(SaleForm);
        pushButton_checkProduct->setObjectName("pushButton_checkProduct");
        pushButton_checkProduct->setGeometry(QRect(750, 80, 80, 24));
        pushButton_submitSale = new QPushButton(SaleForm);
        pushButton_submitSale->setObjectName("pushButton_submitSale");
        pushButton_submitSale->setGeometry(QRect(750, 610, 80, 24));

        retranslateUi(SaleForm);

        QMetaObject::connectSlotsByName(SaleForm);
    } // setupUi

    void retranslateUi(QWidget *SaleForm)
    {
        SaleForm->setWindowTitle(QCoreApplication::translate("SaleForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("SaleForm", "\332\251\330\257 \332\251\330\247\331\204\330\247", nullptr));
        label_2->setText(QCoreApplication::translate("SaleForm", "\331\206\330\247\331\205 \332\251\330\247\331\204\330\247", nullptr));
        label_3->setText(QCoreApplication::translate("SaleForm", "\331\202\333\214\331\205\330\252 \331\201\330\261\331\210\330\264", nullptr));
        label_4->setText(QCoreApplication::translate("SaleForm", "\330\252\330\271\330\257\330\247\330\257", nullptr));
        pushButton_checkProduct->setText(QCoreApplication::translate("SaleForm", "\330\252\330\247\333\214\333\214\330\257", nullptr));
        pushButton_submitSale->setText(QCoreApplication::translate("SaleForm", "\331\201\330\261\331\210\330\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaleForm: public Ui_SaleForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALEFORM_H
