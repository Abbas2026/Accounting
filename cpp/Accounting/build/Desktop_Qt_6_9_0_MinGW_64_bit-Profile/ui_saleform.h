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
    QPushButton *pushButton_exit;
    QWidget *widget;
    QLineEdit *lineEdit_quantity;
    QLabel *label_sellprice;
    QLineEdit *lineEdit_sellPrice;
    QLabel *label_name;
    QPushButton *pushButton_submitSale;
    QLineEdit *lineEdit_productName;
    QLabel *label_code;
    QLabel *label_quantity;
    QLineEdit *lineEdit_code;
    QPushButton *pushButton_checkProduct;
    QLineEdit *lineEdit_total;
    QLabel *label_total;
    QLabel *label_widget;
    QPushButton *pushButton_logout;

    void setupUi(QWidget *SaleForm)
    {
        if (SaleForm->objectName().isEmpty())
            SaleForm->setObjectName("SaleForm");
        SaleForm->resize(1920, 1080);
        SaleForm->setMinimumSize(QSize(1920, 1080));
        SaleForm->setMaximumSize(QSize(1920, 1080));
        SaleForm->setStyleSheet(QString::fromUtf8("background-color:#040609;"));
        pushButton_exit = new QPushButton(SaleForm);
        pushButton_exit->setObjectName("pushButton_exit");
        pushButton_exit->setGeometry(QRect(40, 750, 221, 51));
        pushButton_exit->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_exit->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Dana\";\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 10px;\n"
"background-color: rgb(198, 0, 0);"));
        widget = new QWidget(SaleForm);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(420, 80, 731, 691));
        widget->setStyleSheet(QString::fromUtf8("			background-color: #10161f;\n"
"            color: white;\n"
"            border-radius: 18px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        lineEdit_quantity = new QLineEdit(widget);
        lineEdit_quantity->setObjectName("lineEdit_quantity");
        lineEdit_quantity->setGeometry(QRect(220, 440, 291, 41));
        lineEdit_quantity->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        lineEdit_quantity->setEchoMode(QLineEdit::EchoMode::Normal);
        lineEdit_quantity->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_sellprice = new QLabel(widget);
        label_sellprice->setObjectName("label_sellprice");
        label_sellprice->setGeometry(QRect(520, 370, 151, 31));
        lineEdit_sellPrice = new QLineEdit(widget);
        lineEdit_sellPrice->setObjectName("lineEdit_sellPrice");
        lineEdit_sellPrice->setEnabled(false);
        lineEdit_sellPrice->setGeometry(QRect(220, 370, 291, 41));
        lineEdit_sellPrice->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        lineEdit_sellPrice->setEchoMode(QLineEdit::EchoMode::Normal);
        lineEdit_sellPrice->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_name = new QLabel(widget);
        label_name->setObjectName("label_name");
        label_name->setGeometry(QRect(540, 310, 49, 16));
        pushButton_submitSale = new QPushButton(widget);
        pushButton_submitSale->setObjectName("pushButton_submitSale");
        pushButton_submitSale->setGeometry(QRect(300, 590, 131, 41));
        pushButton_submitSale->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_submitSale->setStyleSheet(QString::fromUtf8("          background-color: #45aef5 ;\n"
"            color: white;\n"
"            border-radius: 10px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        lineEdit_productName = new QLineEdit(widget);
        lineEdit_productName->setObjectName("lineEdit_productName");
        lineEdit_productName->setEnabled(false);
        lineEdit_productName->setGeometry(QRect(220, 300, 291, 41));
        lineEdit_productName->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        lineEdit_productName->setEchoMode(QLineEdit::EchoMode::Normal);
        lineEdit_productName->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_code = new QLabel(widget);
        label_code->setObjectName("label_code");
        label_code->setGeometry(QRect(540, 130, 49, 16));
        label_quantity = new QLabel(widget);
        label_quantity->setObjectName("label_quantity");
        label_quantity->setGeometry(QRect(530, 450, 49, 16));
        lineEdit_code = new QLineEdit(widget);
        lineEdit_code->setObjectName("lineEdit_code");
        lineEdit_code->setGeometry(QRect(220, 120, 291, 41));
        lineEdit_code->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        lineEdit_code->setEchoMode(QLineEdit::EchoMode::Normal);
        lineEdit_code->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_checkProduct = new QPushButton(widget);
        pushButton_checkProduct->setObjectName("pushButton_checkProduct");
        pushButton_checkProduct->setGeometry(QRect(300, 190, 131, 41));
        pushButton_checkProduct->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_checkProduct->setStyleSheet(QString::fromUtf8("          background-color: #45aef5 ;\n"
"            color: white;\n"
"            border-radius: 10px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        lineEdit_total = new QLineEdit(widget);
        lineEdit_total->setObjectName("lineEdit_total");
        lineEdit_total->setEnabled(false);
        lineEdit_total->setGeometry(QRect(220, 510, 291, 41));
        lineEdit_total->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        lineEdit_total->setEchoMode(QLineEdit::EchoMode::Normal);
        lineEdit_total->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_total = new QLabel(widget);
        label_total->setObjectName("label_total");
        label_total->setGeometry(QRect(530, 520, 101, 21));
        label_widget = new QLabel(widget);
        label_widget->setObjectName("label_widget");
        label_widget->setGeometry(QRect(290, 30, 151, 51));
        label_widget->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Dana\";\n"
"color: rgb(255, 255, 255);"));
        label_widget->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_logout = new QPushButton(SaleForm);
        pushButton_logout->setObjectName("pushButton_logout");
        pushButton_logout->setGeometry(QRect(40, 670, 221, 51));
        pushButton_logout->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_logout->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Dana\";\n"
"background-color: rgb(255, 38, 49);\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 10px;\n"
""));

        retranslateUi(SaleForm);

        QMetaObject::connectSlotsByName(SaleForm);
    } // setupUi

    void retranslateUi(QWidget *SaleForm)
    {
        SaleForm->setWindowTitle(QCoreApplication::translate("SaleForm", "Form", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("SaleForm", "\330\256\330\261\331\210\330\254", nullptr));
        label_sellprice->setText(QCoreApplication::translate("SaleForm", "\331\202\333\214\331\205\330\252 \331\201\330\261\331\210\330\264(\330\252\331\210\331\205\330\247\331\206)", nullptr));
        label_name->setText(QCoreApplication::translate("SaleForm", "\331\206\330\247\331\205 \332\251\330\247\331\204\330\247", nullptr));
        pushButton_submitSale->setText(QCoreApplication::translate("SaleForm", "\331\201\330\261\331\210\330\264", nullptr));
        label_code->setText(QCoreApplication::translate("SaleForm", "\332\251\330\257 \332\251\330\247\331\204\330\247", nullptr));
        label_quantity->setText(QCoreApplication::translate("SaleForm", "\330\252\330\271\330\257\330\247\330\257", nullptr));
        pushButton_checkProduct->setText(QCoreApplication::translate("SaleForm", "\330\252\330\247\333\214\333\214\330\257", nullptr));
        label_total->setText(QCoreApplication::translate("SaleForm", "\331\205\330\254\331\205\331\210\330\271(\330\252\331\210\331\205\330\247\331\206)", nullptr));
        label_widget->setText(QCoreApplication::translate("SaleForm", "\330\253\330\250\330\252 \331\201\330\261\331\210\330\264", nullptr));
        pushButton_logout->setText(QCoreApplication::translate("SaleForm", "\330\256\330\261\331\210\330\254 \330\247\330\262 \330\255\330\263\330\247\330\250 \332\251\330\247\330\261\330\250\330\261\333\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaleForm: public Ui_SaleForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALEFORM_H
