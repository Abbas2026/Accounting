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
#include <QtWidgets/QLabel>
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
    QPushButton *pushButton_menu;
    QLabel *label_widget;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;

    void setupUi(QWidget *SalesListForm)
    {
        if (SalesListForm->objectName().isEmpty())
            SalesListForm->setObjectName("SalesListForm");
        SalesListForm->resize(1920, 1080);
        SalesListForm->setStyleSheet(QString::fromUtf8("background-color:#040609;"));
        tableView_sales = new QTableView(SalesListForm);
        tableView_sales->setObjectName("tableView_sales");
        tableView_sales->setEnabled(true);
        tableView_sales->setGeometry(QRect(280, 90, 1101, 661));
        tableView_sales->setStyleSheet(QString::fromUtf8(""));
        pushButton_deleteSale = new QPushButton(SalesListForm);
        pushButton_deleteSale->setObjectName("pushButton_deleteSale");
        pushButton_deleteSale->setGeometry(QRect(360, 800, 121, 24));
        pushButton_deleteSale->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_deleteSale->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Dana\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(132, 0, 0);\n"
"border-radius: 10px;\n"
""));
        lineEdit_code = new QLineEdit(SalesListForm);
        lineEdit_code->setObjectName("lineEdit_code");
        lineEdit_code->setEnabled(false);
        lineEdit_code->setGeometry(QRect(1200, 800, 113, 24));
        lineEdit_code->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        lineEdit_code->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_name = new QLineEdit(SalesListForm);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setEnabled(false);
        lineEdit_name->setGeometry(QRect(1080, 800, 113, 24));
        lineEdit_name->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        lineEdit_name->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_quantity = new QLineEdit(SalesListForm);
        lineEdit_quantity->setObjectName("lineEdit_quantity");
        lineEdit_quantity->setEnabled(false);
        lineEdit_quantity->setGeometry(QRect(960, 800, 113, 24));
        lineEdit_quantity->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        lineEdit_quantity->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_price = new QLineEdit(SalesListForm);
        lineEdit_price->setObjectName("lineEdit_price");
        lineEdit_price->setEnabled(false);
        lineEdit_price->setGeometry(QRect(840, 800, 113, 24));
        lineEdit_price->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        lineEdit_price->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_total = new QLineEdit(SalesListForm);
        lineEdit_total->setObjectName("lineEdit_total");
        lineEdit_total->setEnabled(false);
        lineEdit_total->setGeometry(QRect(720, 800, 113, 24));
        lineEdit_total->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        lineEdit_total->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_date = new QLineEdit(SalesListForm);
        lineEdit_date->setObjectName("lineEdit_date");
        lineEdit_date->setEnabled(false);
        lineEdit_date->setGeometry(QRect(490, 800, 221, 24));
        lineEdit_date->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        pushButton_menu = new QPushButton(SalesListForm);
        pushButton_menu->setObjectName("pushButton_menu");
        pushButton_menu->setGeometry(QRect(40, 780, 171, 51));
        pushButton_menu->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_menu->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Dana\";\n"
"background-color: rgb(255, 38, 49);\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 10px;\n"
""));
        label_widget = new QLabel(SalesListForm);
        label_widget->setObjectName("label_widget");
        label_widget->setGeometry(QRect(700, 30, 241, 51));
        label_widget->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Dana\";\n"
"color: rgb(255, 255, 255);"));
        label_widget->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label = new QLabel(SalesListForm);
        label->setObjectName("label");
        label->setGeometry(QRect(550, 781, 91, 21));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";\n"
"background-color: rgb(85, 255, 127);\n"
"border-radius:10px;"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6 = new QLabel(SalesListForm);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(1210, 781, 91, 21));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";\n"
"background-color: rgb(85, 255, 127);\n"
"border-radius:10px;"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_7 = new QLabel(SalesListForm);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(1090, 781, 91, 21));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";\n"
"background-color: rgb(85, 255, 127);\n"
"border-radius:10px;"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_8 = new QLabel(SalesListForm);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(970, 781, 91, 21));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";\n"
"background-color: rgb(85, 255, 127);\n"
"border-radius:10px;"));
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_9 = new QLabel(SalesListForm);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(850, 781, 91, 21));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";\n"
"background-color: rgb(85, 255, 127);\n"
"border-radius:10px;"));
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_10 = new QLabel(SalesListForm);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(730, 781, 91, 21));
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";\n"
"background-color: rgb(85, 255, 127);\n"
"border-radius:10px;"));
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tableView_sales->raise();
        pushButton_deleteSale->raise();
        pushButton_menu->raise();
        label_widget->raise();
        label->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        lineEdit_date->raise();
        lineEdit_total->raise();
        lineEdit_price->raise();
        lineEdit_quantity->raise();
        lineEdit_name->raise();
        lineEdit_code->raise();

        retranslateUi(SalesListForm);

        QMetaObject::connectSlotsByName(SalesListForm);
    } // setupUi

    void retranslateUi(QWidget *SalesListForm)
    {
        SalesListForm->setWindowTitle(QCoreApplication::translate("SalesListForm", "Form", nullptr));
        pushButton_deleteSale->setText(QCoreApplication::translate("SalesListForm", "\330\255\330\260\331\201 \331\201\330\247\332\251\330\252\331\210\330\261", nullptr));
        lineEdit_total->setText(QString());
        pushButton_menu->setText(QCoreApplication::translate("SalesListForm", "\330\250\330\247\330\262\332\257\330\264\330\252 \330\250\331\207 \331\205\331\206\331\210", nullptr));
        label_widget->setText(QCoreApplication::translate("SalesListForm", "\331\201\330\247\332\251\330\252\331\210\330\261\331\207\330\247\333\214 \331\201\330\261\331\210\330\264", nullptr));
        label->setText(QCoreApplication::translate("SalesListForm", "\330\262\331\205\330\247\331\206 \330\253\330\250\330\252", nullptr));
        label_6->setText(QCoreApplication::translate("SalesListForm", "\332\251\330\257 \332\251\330\247\331\204\330\247", nullptr));
        label_7->setText(QCoreApplication::translate("SalesListForm", "\331\206\330\247\331\205 \332\251\330\247\331\204\330\247", nullptr));
        label_8->setText(QCoreApplication::translate("SalesListForm", "\330\252\330\271\330\257\330\247\330\257", nullptr));
        label_9->setText(QCoreApplication::translate("SalesListForm", "\331\202\333\214\331\205\330\252 ", nullptr));
        label_10->setText(QCoreApplication::translate("SalesListForm", "\331\205\330\254\331\205\331\210\330\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SalesListForm: public Ui_SalesListForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALESLISTFORM_H
