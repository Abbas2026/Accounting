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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_productlistform
{
public:
    QTableView *table_product;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_edit;
    QPushButton *pushButton_refresh;
    QLineEdit *lineEdit_code;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_buy;
    QLineEdit *lineEdit_sell;
    QLineEdit *lineEdit_stock;
    QLabel *label_9;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_10;
    QPushButton *pushButton_menu;

    void setupUi(QWidget *productlistform)
    {
        if (productlistform->objectName().isEmpty())
            productlistform->setObjectName("productlistform");
        productlistform->resize(1920, 1080);
        productlistform->setStyleSheet(QString::fromUtf8("background-color:#040609;"));
        table_product = new QTableView(productlistform);
        table_product->setObjectName("table_product");
        table_product->setEnabled(false);
        table_product->setGeometry(QRect(360, 110, 1111, 761));
        pushButton_delete = new QPushButton(productlistform);
        pushButton_delete->setObjectName("pushButton_delete");
        pushButton_delete->setGeometry(QRect(480, 960, 80, 24));
        pushButton_delete->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Dana\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(132, 0, 0);\n"
"border-radius: 10px;\n"
""));
        pushButton_edit = new QPushButton(productlistform);
        pushButton_edit->setObjectName("pushButton_edit");
        pushButton_edit->setGeometry(QRect(660, 960, 80, 24));
        pushButton_edit->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Dana\";\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 10px;\n"
"background-color: rgb(85, 170, 255);\n"
""));
        pushButton_refresh = new QPushButton(productlistform);
        pushButton_refresh->setObjectName("pushButton_refresh");
        pushButton_refresh->setGeometry(QRect(570, 960, 80, 24));
        pushButton_refresh->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Dana\";\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 10px;\n"
"background-color: rgb(85, 0, 127);\n"
""));
        lineEdit_code = new QLineEdit(productlistform);
        lineEdit_code->setObjectName("lineEdit_code");
        lineEdit_code->setGeometry(QRect(1250, 960, 113, 24));
        lineEdit_code->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        lineEdit_code->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_name = new QLineEdit(productlistform);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setGeometry(QRect(1130, 960, 113, 24));
        lineEdit_name->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        lineEdit_name->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_buy = new QLineEdit(productlistform);
        lineEdit_buy->setObjectName("lineEdit_buy");
        lineEdit_buy->setGeometry(QRect(890, 960, 113, 24));
        lineEdit_buy->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        lineEdit_buy->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_sell = new QLineEdit(productlistform);
        lineEdit_sell->setObjectName("lineEdit_sell");
        lineEdit_sell->setGeometry(QRect(770, 960, 113, 24));
        lineEdit_sell->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        lineEdit_sell->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_stock = new QLineEdit(productlistform);
        lineEdit_stock->setObjectName("lineEdit_stock");
        lineEdit_stock->setGeometry(QRect(1010, 960, 113, 24));
        lineEdit_stock->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        lineEdit_stock->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_9 = new QLabel(productlistform);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(900, 940, 91, 21));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";\n"
"background-color: rgb(85, 255, 127);\n"
"border-radius:10px;"));
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_7 = new QLabel(productlistform);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(1140, 940, 91, 21));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";\n"
"background-color: rgb(85, 255, 127);\n"
"border-radius:10px;"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6 = new QLabel(productlistform);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(1260, 940, 91, 21));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";\n"
"background-color: rgb(85, 255, 127);\n"
"border-radius:10px;"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_8 = new QLabel(productlistform);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(1020, 940, 91, 21));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";\n"
"background-color: rgb(85, 255, 127);\n"
"border-radius:10px;"));
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_10 = new QLabel(productlistform);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(780, 940, 91, 21));
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";\n"
"background-color: rgb(85, 255, 127);\n"
"border-radius:10px;"));
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_menu = new QPushButton(productlistform);
        pushButton_menu->setObjectName("pushButton_menu");
        pushButton_menu->setGeometry(QRect(60, 990, 171, 51));
        pushButton_menu->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_menu->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Dana\";\n"
"background-color: rgb(255, 38, 49);\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 10px;\n"
""));

        retranslateUi(productlistform);

        QMetaObject::connectSlotsByName(productlistform);
    } // setupUi

    void retranslateUi(QWidget *productlistform)
    {
        productlistform->setWindowTitle(QCoreApplication::translate("productlistform", "Form", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("productlistform", "\330\255\330\260\331\201", nullptr));
        pushButton_edit->setText(QCoreApplication::translate("productlistform", "\331\210\333\214\330\261\330\247\333\214\330\264", nullptr));
        pushButton_refresh->setText(QCoreApplication::translate("productlistform", "\330\252\330\247\330\262\331\207 \330\263\330\247\330\262\333\214", nullptr));
        label_9->setText(QCoreApplication::translate("productlistform", "\331\202\333\214\331\205\330\252 \330\256\330\261\333\214\330\257", nullptr));
        label_7->setText(QCoreApplication::translate("productlistform", "\331\206\330\247\331\205 \332\251\330\247\331\204\330\247", nullptr));
        label_6->setText(QCoreApplication::translate("productlistform", "\332\251\330\257 \332\251\330\247\331\204\330\247", nullptr));
        label_8->setText(QCoreApplication::translate("productlistform", "\330\252\330\271\330\257\330\247\330\257", nullptr));
        label_10->setText(QCoreApplication::translate("productlistform", "\331\202\333\214\331\205\330\252 \331\201\330\261\331\210\330\264", nullptr));
        pushButton_menu->setText(QCoreApplication::translate("productlistform", "\330\250\330\247\330\262\332\257\330\264\330\252 \330\250\331\207 \331\205\331\206\331\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class productlistform: public Ui_productlistform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTLISTFORM_H
