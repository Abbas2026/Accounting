/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QWidget *widget;
    QPushButton *pushButton_exit;
    QPushButton *pushButton_login;
    QPushButton *pushButton_logout;
    QPushButton *pushButton_adduser;
    QPushButton *pushButton_sellpr;
    QPushButton *pushButton_salelist;
    QPushButton *pushButton_editpr;
    QLabel *label_2;

    void setupUi(QWidget *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName("Menu");
        Menu->resize(1920, 1080);
        Menu->setMinimumSize(QSize(0, 0));
        Menu->setMaximumSize(QSize(1920, 1080));
        Menu->setStyleSheet(QString::fromUtf8("			background-color: #10161f;"));
        widget = new QWidget(Menu);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(1230, 0, 311, 1080));
        widget->setStyleSheet(QString::fromUtf8("background-color:#1d2633;\n"
""));
        pushButton_exit = new QPushButton(widget);
        pushButton_exit->setObjectName("pushButton_exit");
        pushButton_exit->setGeometry(QRect(70, 750, 171, 51));
        pushButton_exit->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_exit->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Dana\";\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 10px;\n"
"background-color: rgb(198, 0, 0);"));
        pushButton_login = new QPushButton(widget);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(70, 150, 171, 51));
        pushButton_login->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_login->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);\n"
"font: 700 14pt \"Dana\";\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 10px;\n"
""));
        pushButton_logout = new QPushButton(widget);
        pushButton_logout->setObjectName("pushButton_logout");
        pushButton_logout->setGeometry(QRect(70, 650, 171, 51));
        pushButton_logout->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_logout->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Dana\";\n"
"background-color: rgb(255, 38, 49);\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 10px;\n"
""));
        pushButton_adduser = new QPushButton(widget);
        pushButton_adduser->setObjectName("pushButton_adduser");
        pushButton_adduser->setGeometry(QRect(70, 550, 171, 51));
        pushButton_adduser->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_adduser->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);\n"
"font: 700 14pt \"Dana\";\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 10px;\n"
""));
        pushButton_sellpr = new QPushButton(widget);
        pushButton_sellpr->setObjectName("pushButton_sellpr");
        pushButton_sellpr->setGeometry(QRect(70, 250, 171, 51));
        pushButton_sellpr->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_sellpr->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);\n"
"font: 700 14pt \"Dana\";\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 10px;\n"
""));
        pushButton_salelist = new QPushButton(widget);
        pushButton_salelist->setObjectName("pushButton_salelist");
        pushButton_salelist->setGeometry(QRect(70, 450, 171, 51));
        pushButton_salelist->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_salelist->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);\n"
"font: 700 14pt \"Dana\";\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 10px;\n"
""));
        pushButton_editpr = new QPushButton(widget);
        pushButton_editpr->setObjectName("pushButton_editpr");
        pushButton_editpr->setGeometry(QRect(70, 350, 171, 51));
        pushButton_editpr->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_editpr->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);\n"
"font: 700 14pt \"Dana\";\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 10px;\n"
""));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 40, 151, 51));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Dana\";\n"
"color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Form", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("Menu", "\330\256\330\261\331\210\330\254 \330\247\330\262 \330\250\330\261\331\206\330\247\331\205\331\207", nullptr));
        pushButton_login->setText(QCoreApplication::translate("Menu", "\330\253\330\250\330\252 \332\251\330\247\331\204\330\247", nullptr));
        pushButton_logout->setText(QCoreApplication::translate("Menu", "\330\256\330\261\331\210\330\254 \330\247\330\262 \330\255\330\263\330\247\330\250 \332\251\330\247\330\261\330\250\330\261\333\214", nullptr));
        pushButton_adduser->setText(QCoreApplication::translate("Menu", "\330\247\331\201\330\262\331\210\330\257\331\206 \332\251\330\247\330\261\330\250\330\261", nullptr));
        pushButton_sellpr->setText(QCoreApplication::translate("Menu", "\331\201\330\261\331\210\330\264 \332\251\330\247\331\204\330\247", nullptr));
        pushButton_salelist->setText(QCoreApplication::translate("Menu", "\331\201\330\247\332\251\330\252\331\210\330\261\331\207\330\247\333\214 \331\201\330\261\331\210\330\264 ", nullptr));
        pushButton_editpr->setText(QCoreApplication::translate("Menu", "\331\210\333\214\330\261\330\247\333\214\330\264 \332\251\330\247\331\204\330\247\331\207\330\247", nullptr));
        label_2->setText(QCoreApplication::translate("Menu", "\331\205\331\206\331\210 \330\250\330\261\331\206\330\247\331\205\331\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
