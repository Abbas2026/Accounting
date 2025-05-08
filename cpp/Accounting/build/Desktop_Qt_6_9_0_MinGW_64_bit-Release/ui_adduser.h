/********************************************************************************
** Form generated from reading UI file 'adduser.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSER_H
#define UI_ADDUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddUser
{
public:
    QWidget *widget;
    QLineEdit *lineEdit_phone;
    QLabel *label_username;
    QPushButton *pushButton_addUser;
    QLineEdit *lineEdit_username;
    QLabel *label_code;
    QLabel *label_phone;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_password;
    QLabel *label_password;
    QLabel *label_widget;
    QPushButton *pushButton_menu;

    void setupUi(QWidget *AddUser)
    {
        if (AddUser->objectName().isEmpty())
            AddUser->setObjectName("AddUser");
        AddUser->resize(1920, 1080);
        AddUser->setStyleSheet(QString::fromUtf8("background-color:#040609;"));
        widget = new QWidget(AddUser);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(420, 80, 721, 631));
        widget->setStyleSheet(QString::fromUtf8("			background-color: #10161f;\n"
"            color: white;\n"
"            border-radius: 18px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        lineEdit_phone = new QLineEdit(widget);
        lineEdit_phone->setObjectName("lineEdit_phone");
        lineEdit_phone->setGeometry(QRect(220, 340, 291, 41));
        lineEdit_phone->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        lineEdit_phone->setEchoMode(QLineEdit::EchoMode::Normal);
        lineEdit_phone->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_username = new QLabel(widget);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(530, 260, 71, 21));
        pushButton_addUser = new QPushButton(widget);
        pushButton_addUser->setObjectName("pushButton_addUser");
        pushButton_addUser->setGeometry(QRect(300, 530, 131, 41));
        pushButton_addUser->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_addUser->setStyleSheet(QString::fromUtf8("          background-color: #45aef5 ;\n"
"            color: white;\n"
"            border-radius: 10px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        lineEdit_username = new QLineEdit(widget);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setEnabled(true);
        lineEdit_username->setGeometry(QRect(220, 250, 291, 41));
        lineEdit_username->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        lineEdit_username->setEchoMode(QLineEdit::EchoMode::Normal);
        lineEdit_username->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_code = new QLabel(widget);
        label_code->setObjectName("label_code");
        label_code->setGeometry(QRect(528, 170, 61, 21));
        label_phone = new QLabel(widget);
        label_phone->setObjectName("label_phone");
        label_phone->setGeometry(QRect(520, 350, 49, 21));
        lineEdit_name = new QLineEdit(widget);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setGeometry(QRect(220, 160, 291, 41));
        lineEdit_name->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        lineEdit_name->setEchoMode(QLineEdit::EchoMode::Normal);
        lineEdit_name->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_password = new QLineEdit(widget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(220, 430, 291, 41));
        lineEdit_password->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        lineEdit_password->setEchoMode(QLineEdit::EchoMode::Normal);
        lineEdit_password->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_password = new QLabel(widget);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(540, 440, 61, 21));
        label_widget = new QLabel(widget);
        label_widget->setObjectName("label_widget");
        label_widget->setGeometry(QRect(290, 50, 151, 51));
        label_widget->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Dana\";\n"
"color: rgb(255, 255, 255);"));
        label_widget->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_menu = new QPushButton(AddUser);
        pushButton_menu->setObjectName("pushButton_menu");
        pushButton_menu->setGeometry(QRect(100, 740, 171, 51));
        pushButton_menu->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_menu->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Dana\";\n"
"background-color: rgb(255, 38, 49);\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 10px;\n"
""));

        retranslateUi(AddUser);

        QMetaObject::connectSlotsByName(AddUser);
    } // setupUi

    void retranslateUi(QWidget *AddUser)
    {
        AddUser->setWindowTitle(QCoreApplication::translate("AddUser", "Form", nullptr));
        label_username->setText(QCoreApplication::translate("AddUser", "\331\206\330\247\331\205 \332\251\330\247\330\261\330\250\330\261\333\214", nullptr));
        pushButton_addUser->setText(QCoreApplication::translate("AddUser", "\330\253\330\250\330\252", nullptr));
        label_code->setText(QCoreApplication::translate("AddUser", "\331\206\330\247\331\205 \332\251\330\247\331\205\331\204", nullptr));
        label_phone->setText(QCoreApplication::translate("AddUser", "\330\252\331\204\331\201\331\206", nullptr));
        label_password->setText(QCoreApplication::translate("AddUser", "\330\261\331\205\330\262 \330\271\330\250\331\210\330\261", nullptr));
        label_widget->setText(QCoreApplication::translate("AddUser", "\330\247\331\201\330\262\331\210\330\257\331\206 \332\251\330\247\330\261\330\250\330\261", nullptr));
        pushButton_menu->setText(QCoreApplication::translate("AddUser", "\330\250\330\247\330\262\332\257\330\264\330\252 \330\250\331\207 \331\205\331\206\331\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddUser: public Ui_AddUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H
