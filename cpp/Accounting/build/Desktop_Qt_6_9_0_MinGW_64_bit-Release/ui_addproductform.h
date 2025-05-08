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
    QWidget *widget;
    QLineEdit *lineEdit_stock;
    QLabel *label_3;
    QLineEdit *lineEdit_sell;
    QLabel *label_2;
    QPushButton *btn_addProduct;
    QLineEdit *lineEdit_name;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *lineEdit_code;
    QLineEdit *lineEdit_buy;
    QLabel *label_7;
    QLabel *label_6;
    QPushButton *pushButton_menu;

    void setupUi(QWidget *AddProductForm)
    {
        if (AddProductForm->objectName().isEmpty())
            AddProductForm->setObjectName("AddProductForm");
        AddProductForm->resize(1920, 1080);
        AddProductForm->setStyleSheet(QString::fromUtf8("background-color:#040609;"));
        widget = new QWidget(AddProductForm);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(420, 80, 731, 691));
        widget->setStyleSheet(QString::fromUtf8("			background-color: #10161f;\n"
"            color: white;\n"
"            border-radius: 18px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        lineEdit_stock = new QLineEdit(widget);
        lineEdit_stock->setObjectName("lineEdit_stock");
        lineEdit_stock->setGeometry(QRect(220, 500, 291, 41));
        lineEdit_stock->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        lineEdit_stock->setEchoMode(QLineEdit::EchoMode::Normal);
        lineEdit_stock->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(520, 410, 151, 31));
        lineEdit_sell = new QLineEdit(widget);
        lineEdit_sell->setObjectName("lineEdit_sell");
        lineEdit_sell->setEnabled(true);
        lineEdit_sell->setGeometry(QRect(220, 410, 291, 41));
        lineEdit_sell->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        lineEdit_sell->setEchoMode(QLineEdit::EchoMode::Normal);
        lineEdit_sell->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(540, 150, 49, 16));
        btn_addProduct = new QPushButton(widget);
        btn_addProduct->setObjectName("btn_addProduct");
        btn_addProduct->setGeometry(QRect(300, 600, 131, 41));
        btn_addProduct->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btn_addProduct->setStyleSheet(QString::fromUtf8("          background-color: #45aef5 ;\n"
"            color: white;\n"
"            border-radius: 10px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        lineEdit_name = new QLineEdit(widget);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setEnabled(true);
        lineEdit_name->setGeometry(QRect(220, 140, 291, 41));
        lineEdit_name->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        lineEdit_name->setEchoMode(QLineEdit::EchoMode::Normal);
        lineEdit_name->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(540, 240, 49, 16));
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(530, 510, 49, 16));
        lineEdit_code = new QLineEdit(widget);
        lineEdit_code->setObjectName("lineEdit_code");
        lineEdit_code->setGeometry(QRect(220, 230, 291, 41));
        lineEdit_code->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        lineEdit_code->setEchoMode(QLineEdit::EchoMode::Normal);
        lineEdit_code->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_buy = new QLineEdit(widget);
        lineEdit_buy->setObjectName("lineEdit_buy");
        lineEdit_buy->setEnabled(true);
        lineEdit_buy->setGeometry(QRect(220, 320, 291, 41));
        lineEdit_buy->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        lineEdit_buy->setEchoMode(QLineEdit::EchoMode::Normal);
        lineEdit_buy->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(530, 320, 131, 31));
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(290, 50, 151, 51));
        label_6->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Dana\";\n"
"color: rgb(255, 255, 255);"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_menu = new QPushButton(AddProductForm);
        pushButton_menu->setObjectName("pushButton_menu");
        pushButton_menu->setGeometry(QRect(60, 770, 171, 51));
        pushButton_menu->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_menu->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Dana\";\n"
"background-color: rgb(255, 38, 49);\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 10px;\n"
""));

        retranslateUi(AddProductForm);

        QMetaObject::connectSlotsByName(AddProductForm);
    } // setupUi

    void retranslateUi(QWidget *AddProductForm)
    {
        AddProductForm->setWindowTitle(QCoreApplication::translate("AddProductForm", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("AddProductForm", "\331\202\333\214\331\205\330\252 \331\201\330\261\331\210\330\264(\330\252\331\210\331\205\330\247\331\206)", nullptr));
        label_2->setText(QCoreApplication::translate("AddProductForm", "\331\206\330\247\331\205 \332\251\330\247\331\204\330\247", nullptr));
        btn_addProduct->setText(QCoreApplication::translate("AddProductForm", "\330\253\330\250\330\252", nullptr));
        label->setText(QCoreApplication::translate("AddProductForm", "\332\251\330\257 \332\251\330\247\331\204\330\247", nullptr));
        label_4->setText(QCoreApplication::translate("AddProductForm", "\330\252\330\271\330\257\330\247\330\257", nullptr));
        label_7->setText(QCoreApplication::translate("AddProductForm", "\331\202\333\214\331\205\330\252 \330\256\330\261\333\214\330\257(\330\252\331\210\331\205\330\247\331\206)", nullptr));
        label_6->setText(QCoreApplication::translate("AddProductForm", "\330\253\330\250\330\252 \332\251\330\247\331\204\330\247", nullptr));
        pushButton_menu->setText(QCoreApplication::translate("AddProductForm", "\330\250\330\247\330\262\332\257\330\264\330\252 \330\250\331\207 \331\205\331\206\331\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddProductForm: public Ui_AddProductForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPRODUCTFORM_H
