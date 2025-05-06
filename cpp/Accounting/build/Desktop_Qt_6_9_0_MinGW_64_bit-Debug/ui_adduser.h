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
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_phone;
    QLineEdit *lineEdit_password;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_addUser;
    QPushButton *pushButton_menu;

    void setupUi(QWidget *AddUser)
    {
        if (AddUser->objectName().isEmpty())
            AddUser->setObjectName("AddUser");
        AddUser->resize(1103, 674);
        lineEdit_name = new QLineEdit(AddUser);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setGeometry(QRect(780, 200, 113, 24));
        lineEdit_username = new QLineEdit(AddUser);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(780, 250, 113, 24));
        lineEdit_phone = new QLineEdit(AddUser);
        lineEdit_phone->setObjectName("lineEdit_phone");
        lineEdit_phone->setGeometry(QRect(780, 300, 113, 24));
        lineEdit_password = new QLineEdit(AddUser);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(780, 350, 113, 24));
        label = new QLabel(AddUser);
        label->setObjectName("label");
        label->setGeometry(QRect(930, 200, 49, 16));
        label_2 = new QLabel(AddUser);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(930, 250, 49, 16));
        label_3 = new QLabel(AddUser);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(930, 300, 49, 16));
        label_4 = new QLabel(AddUser);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(930, 350, 49, 16));
        pushButton_addUser = new QPushButton(AddUser);
        pushButton_addUser->setObjectName("pushButton_addUser");
        pushButton_addUser->setGeometry(QRect(800, 400, 80, 24));
        pushButton_menu = new QPushButton(AddUser);
        pushButton_menu->setObjectName("pushButton_menu");
        pushButton_menu->setGeometry(QRect(290, 480, 80, 24));

        retranslateUi(AddUser);

        QMetaObject::connectSlotsByName(AddUser);
    } // setupUi

    void retranslateUi(QWidget *AddUser)
    {
        AddUser->setWindowTitle(QCoreApplication::translate("AddUser", "Form", nullptr));
        label->setText(QCoreApplication::translate("AddUser", "\331\206\330\247\331\205 \332\251\330\247\331\205\331\204", nullptr));
        label_2->setText(QCoreApplication::translate("AddUser", "\331\206\330\247\331\205 \332\251\330\247\330\261\330\250\330\261\333\214", nullptr));
        label_3->setText(QCoreApplication::translate("AddUser", "\330\252\331\204\331\201\331\206", nullptr));
        label_4->setText(QCoreApplication::translate("AddUser", "\330\261\331\205\330\262 \330\271\330\250\331\210\330\261", nullptr));
        pushButton_addUser->setText(QCoreApplication::translate("AddUser", "\330\247\331\201\330\262\331\210\330\257\331\206", nullptr));
        pushButton_menu->setText(QCoreApplication::translate("AddUser", "\331\205\331\206\331\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddUser: public Ui_AddUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H
