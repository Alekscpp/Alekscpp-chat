/********************************************************************************
** Form generated from reading UI file 'login_wind.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_WIND_H
#define UI_LOGIN_WIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login_wind
{
public:
    QLabel *label;
    QLabel *login_label;
    QLabel *password_label;
    QLineEdit *login_line;
    QLineEdit *pasword_line;
    QPushButton *login_btn;
    QPushButton *create_new_acc_btn;

    void setupUi(QDialog *Login_wind)
    {
        if (Login_wind->objectName().isEmpty())
            Login_wind->setObjectName(QString::fromUtf8("Login_wind"));
        Login_wind->resize(230, 120);
        Login_wind->setMinimumSize(QSize(230, 120));
        Login_wind->setMaximumSize(QSize(230, 120));
        label = new QLabel(Login_wind);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 0, 101, 31));
        label->setMinimumSize(QSize(101, 31));
        label->setMaximumSize(QSize(101, 31));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label->setFont(font);
        login_label = new QLabel(Login_wind);
        login_label->setObjectName(QString::fromUtf8("login_label"));
        login_label->setGeometry(QRect(10, 30, 49, 16));
        login_label->setMinimumSize(QSize(49, 16));
        login_label->setMaximumSize(QSize(49, 16));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        login_label->setFont(font1);
        password_label = new QLabel(Login_wind);
        password_label->setObjectName(QString::fromUtf8("password_label"));
        password_label->setGeometry(QRect(10, 60, 49, 16));
        password_label->setMinimumSize(QSize(49, 16));
        password_label->setMaximumSize(QSize(49, 16));
        password_label->setFont(font1);
        login_line = new QLineEdit(Login_wind);
        login_line->setObjectName(QString::fromUtf8("login_line"));
        login_line->setGeometry(QRect(62, 30, 141, 21));
        login_line->setMinimumSize(QSize(141, 21));
        login_line->setMaximumSize(QSize(141, 21));
        pasword_line = new QLineEdit(Login_wind);
        pasword_line->setObjectName(QString::fromUtf8("pasword_line"));
        pasword_line->setGeometry(QRect(62, 60, 141, 21));
        pasword_line->setMinimumSize(QSize(141, 21));
        pasword_line->setMaximumSize(QSize(141, 21));
        login_btn = new QPushButton(Login_wind);
        login_btn->setObjectName(QString::fromUtf8("login_btn"));
        login_btn->setGeometry(QRect(140, 90, 80, 24));
        login_btn->setMinimumSize(QSize(80, 24));
        login_btn->setMaximumSize(QSize(80, 24));
        QFont font2;
        font2.setBold(true);
        login_btn->setFont(font2);
        create_new_acc_btn = new QPushButton(Login_wind);
        create_new_acc_btn->setObjectName(QString::fromUtf8("create_new_acc_btn"));
        create_new_acc_btn->setGeometry(QRect(10, 90, 121, 24));
        create_new_acc_btn->setFont(font2);

        retranslateUi(Login_wind);

        QMetaObject::connectSlotsByName(Login_wind);
    } // setupUi

    void retranslateUi(QDialog *Login_wind)
    {
        Login_wind->setWindowTitle(QCoreApplication::translate("Login_wind", "\320\222\321\205\320\276\320\264", nullptr));
        label->setText(QCoreApplication::translate("Login_wind", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        login_label->setText(QCoreApplication::translate("Login_wind", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        password_label->setText(QCoreApplication::translate("Login_wind", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        login_btn->setText(QCoreApplication::translate("Login_wind", "\320\222\321\205\320\276\320\264", nullptr));
        create_new_acc_btn->setText(QCoreApplication::translate("Login_wind", "\320\235\320\276\320\262\321\213\320\271 \320\260\320\272\320\272\320\260\321\203\320\275\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login_wind: public Ui_Login_wind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_WIND_H
