QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

INCLUDEPATH += "E:\C++\Libs\websocketpp-master\websocketpp\config"
INCLUDEPATH += "E:\C++\Libs\websocketpp-master\websocketpp"
INCLUDEPATH += "E:\C++\Libs\websocketpp-master"
INCLUDEPATH += "E:\C++\Libs\boost_1_80_0"

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    about_programm_window.cpp \
    function.cpp \
    login_wind.cpp \
    main.cpp \
    chat_window.cpp \
    registration_window.cpp

HEADERS += \
    about_programm_window.h \
    chat_window.h \
    function.h \
    login_wind.h \
    registration_window.h \
    websock_chat.h

FORMS += \
    about_programm_window.ui \
    chat_window.ui \
    login_wind.ui \
    registration_window.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
