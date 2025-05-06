/********************************************************************************
** Form generated from reading UI file 'productlistform.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTLISTFORM_H
#define UI_PRODUCTLISTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_productlistform
{
public:
    QTableView *tableView;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_edit;
    QPushButton *pushButton_refresh;
    QLineEdit *lineEdit_code;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_buy;
    QLineEdit *lineEdit_sell;
    QLineEdit *lineEdit_stock;
    QPushButton *pushButton_menu;

    void setupUi(QWidget *productlistform)
    {
        if (productlistform->objectName().isEmpty())
            productlistform->setObjectName("productlistform");
        productlistform->resize(1347, 870);
        tableView = new QTableView(productlistform);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(250, 130, 881, 471));
        pushButton_delete = new QPushButton(productlistform);
        pushButton_delete->setObjectName("pushButton_delete");
        pushButton_delete->setGeometry(QRect(310, 800, 80, 24));
        pushButton_edit = new QPushButton(productlistform);
        pushButton_edit->setObjectName("pushButton_edit");
        pushButton_edit->setGeometry(QRect(920, 790, 80, 24));
        pushButton_refresh = new QPushButton(productlistform);
        pushButton_refresh->setObjectName("pushButton_refresh");
        pushButton_refresh->setGeometry(QRect(630, 790, 80, 24));
        lineEdit_code = new QLineEdit(productlistform);
        lineEdit_code->setObjectName("lineEdit_code");
        lineEdit_code->setGeometry(QRect(930, 650, 113, 24));
        lineEdit_name = new QLineEdit(productlistform);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setGeometry(QRect(750, 650, 113, 24));
        lineEdit_buy = new QLineEdit(productlistform);
        lineEdit_buy->setObjectName("lineEdit_buy");
        lineEdit_buy->setGeometry(QRect(560, 650, 113, 24));
        lineEdit_sell = new QLineEdit(productlistform);
        lineEdit_sell->setObjectName("lineEdit_sell");
        lineEdit_sell->setGeometry(QRect(380, 650, 113, 24));
        lineEdit_stock = new QLineEdit(productlistform);
        lineEdit_stock->setObjectName("lineEdit_stock");
        lineEdit_stock->setGeometry(QRect(220, 650, 113, 24));
        pushButton_menu = new QPushButton(productlistform);
        pushButton_menu->setObjectName("pushButton_menu");
        pushButton_menu->setGeometry(QRect(40, 800, 80, 24));

        retranslateUi(productlistform);

        QMetaObject::connectSlotsByName(productlistform);
    } // setupUi

    void retranslateUi(QWidget *productlistform)
    {
        productlistform->setWindowTitle(QCoreApplication::translate("productlistform", "Form", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("productlistform", "\330\255\330\260\331\201", nullptr));
        pushButton_edit->setText(QCoreApplication::translate("productlistform", "\331\210\333\214\330\261\330\247\333\214\330\264", nullptr));
        pushButton_refresh->setText(QCoreApplication::translate("productlistform", "\330\252\330\247\330\262\331\207 \330\263\330\247\330\262\333\214", nullptr));
        pushButton_menu->setText(QCoreApplication::translate("productlistform", "\331\205\331\206\331\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class productlistform: public Ui_productlistform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTLISTFORM_H
