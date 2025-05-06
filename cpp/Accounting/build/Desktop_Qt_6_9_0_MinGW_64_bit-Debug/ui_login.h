/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QPushButton *pushButton_login;
    QLineEdit *lineEdit_password;
    QLabel *label;
    QLineEdit *lineEdit_username;
    QPushButton *pushButton_Forget;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *pushButton_exit;
    QLabel *label_4;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(1920, 1080);
        Login->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(1920, 1080));
        centralwidget->setMaximumSize(QSize(1920, 1080));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(710, 300, 451, 501));
        widget->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(44, 88, 132);"));
        pushButton_login = new QPushButton(widget);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(140, 410, 171, 51));
        pushButton_login->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_login->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);\n"
"font: 700 14pt \"Dana\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_password = new QLineEdit(widget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(80, 250, 291, 41));
        lineEdit_password->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font-size: 12pt; "));
        lineEdit_password->setEchoMode(QLineEdit::EchoMode::Password);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 114, 171, 31));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";\n"
"background-color: rgb(85, 255, 127);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_username = new QLineEdit(widget);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(80, 140, 291, 41));
        lineEdit_username->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";"));
        lineEdit_username->setEchoMode(QLineEdit::EchoMode::Password);
        pushButton_Forget = new QPushButton(widget);
        pushButton_Forget->setObjectName("pushButton_Forget");
        pushButton_Forget->setGeometry(QRect(140, 330, 171, 31));
        pushButton_Forget->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_Forget->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Dana\";\n"
"background-color: rgb(255, 170, 255);"));
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 224, 171, 31));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 127);\n"
"font: 700 12pt \"Dana\";"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 20, 211, 51));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Dana\";\n"
"color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_login->raise();
        label->raise();
        pushButton_Forget->raise();
        label_3->raise();
        lineEdit_username->raise();
        label_2->raise();
        lineEdit_password->raise();
        pushButton_exit = new QPushButton(centralwidget);
        pushButton_exit->setObjectName("pushButton_exit");
        pushButton_exit->setGeometry(QRect(100, 960, 171, 51));
        pushButton_exit->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_exit->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Dana\";\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 10px;\n"
"background-color: rgb(198, 0, 0);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 0, 1921, 1081));
        label_4->setPixmap(QPixmap(QString::fromUtf8("ChatGPT Image May 6, 2025, 08_00_47 PM.png")));
        label_4->setScaledContents(true);
        Login->setCentralWidget(centralwidget);
        label_4->raise();
        widget->raise();
        pushButton_exit->raise();

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        pushButton_login->setText(QCoreApplication::translate("Login", "\331\210\330\261\331\210\330\257", nullptr));
        label->setText(QCoreApplication::translate("Login", "\331\206\330\247\331\205 \332\251\330\247\330\261\330\250\330\261\333\214", nullptr));
        pushButton_Forget->setText(QCoreApplication::translate("Login", "\331\201\330\261\330\247\331\205\331\210\330\264\333\214 \330\261\331\205\330\262 \330\271\330\250\331\210\330\261", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "\330\261\331\205\330\262 \330\271\330\250\331\210\330\261", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "\331\206\330\247\331\205 \330\250\330\261\331\206\330\247\331\205\331\207", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("Login", "\330\256\330\261\331\210\330\254", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
