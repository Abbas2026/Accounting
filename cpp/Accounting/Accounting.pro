QT       += core gui
QT += sql
RESOURCES += fonts.qrc

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addproductform.cpp \
    adduser.cpp \
    main.cpp \
    login.cpp \
    menu.cpp \
    productlistform.cpp \
    saleform.cpp \
    saleslistform.cpp

HEADERS += \
    addproductform.h \
    adduser.h \
    login.h \
    menu.h \
    productlistform.h \
    saleform.h \
    saleslistform.h \
    styles.h

FORMS += \
    addproductform.ui \
    adduser.ui \
    login.ui \
    menu.ui \
    productlistform.ui \
    saleform.ui \
    saleslistform.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
