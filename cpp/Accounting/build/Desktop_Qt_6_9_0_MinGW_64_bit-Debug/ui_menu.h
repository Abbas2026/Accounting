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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName("Menu");
        Menu->resize(938, 648);
        pushButton = new QPushButton(Menu);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(670, 70, 80, 24));
        pushButton_2 = new QPushButton(Menu);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(670, 170, 80, 24));
        pushButton_3 = new QPushButton(Menu);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(660, 270, 111, 24));

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Menu", "\330\253\330\250\330\252 \332\251\330\247\331\204\330\247", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Menu", "\331\201\330\261\331\210\330\264 \332\251\330\247\331\204\330\247", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Menu", "\331\210\333\214\330\261\330\247\333\214\330\264 \331\210 \330\255\330\260\331\201 \332\251\330\247\331\204\330\247\331\207\330\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
