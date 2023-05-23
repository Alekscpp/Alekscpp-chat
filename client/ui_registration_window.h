/********************************************************************************
** Form generated from reading UI file 'registration_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_WINDOW_H
#define UI_REGISTRATION_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Registration_window
{
public:
    QLabel *label;
    QLabel *login_label;
    QLabel *pasword_label;
    QLabel *rep_pasw_label;
    QPushButton *create_btn;
    QLineEdit *login_line;
    QLineEdit *pasword_line;
    QLineEdit *rep_pasw_line;
    QLabel *log_label_2;
    QLabel *pass_label_2;

    void setupUi(QDialog *Registration_window)
    {
        if (Registration_window->objectName().isEmpty())
            Registration_window->setObjectName(QString::fromUtf8("Registration_window"));
        Registration_window->resize(280, 160);
        Registration_window->setMinimumSize(QSize(280, 160));
        Registration_window->setMaximumSize(QSize(280, 160));
        label = new QLabel(Registration_window);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 0, 211, 31));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label->setFont(font);
        login_label = new QLabel(Registration_window);
        login_label->setObjectName(QString::fromUtf8("login_label"));
        login_label->setGeometry(QRect(20, 40, 51, 16));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        login_label->setFont(font1);
        pasword_label = new QLabel(Registration_window);
        pasword_label->setObjectName(QString::fromUtf8("pasword_label"));
        pasword_label->setGeometry(QRect(20, 70, 61, 16));
        pasword_label->setFont(font1);
        rep_pasw_label = new QLabel(Registration_window);
        rep_pasw_label->setObjectName(QString::fromUtf8("rep_pasw_label"));
        rep_pasw_label->setGeometry(QRect(20, 100, 131, 21));
        rep_pasw_label->setFont(font1);
        create_btn = new QPushButton(Registration_window);
        create_btn->setObjectName(QString::fromUtf8("create_btn"));
        create_btn->setGeometry(QRect(100, 130, 81, 24));
        create_btn->setFont(font1);
        login_line = new QLineEdit(Registration_window);
        login_line->setObjectName(QString::fromUtf8("login_line"));
        login_line->setGeometry(QRect(160, 40, 113, 21));
        pasword_line = new QLineEdit(Registration_window);
        pasword_line->setObjectName(QString::fromUtf8("pasword_line"));
        pasword_line->setGeometry(QRect(160, 70, 113, 21));
        rep_pasw_line = new QLineEdit(Registration_window);
        rep_pasw_line->setObjectName(QString::fromUtf8("rep_pasw_line"));
        rep_pasw_line->setGeometry(QRect(160, 100, 113, 21));
        log_label_2 = new QLabel(Registration_window);
        log_label_2->setObjectName(QString::fromUtf8("log_label_2"));
        log_label_2->setGeometry(QRect(70, 40, 81, 20));
        QFont font2;
        font2.setPointSize(7);
        log_label_2->setFont(font2);
        pass_label_2 = new QLabel(Registration_window);
        pass_label_2->setObjectName(QString::fromUtf8("pass_label_2"));
        pass_label_2->setGeometry(QRect(80, 70, 81, 20));
        pass_label_2->setFont(font2);

        retranslateUi(Registration_window);

        QMetaObject::connectSlotsByName(Registration_window);
    } // setupUi

    void retranslateUi(QDialog *Registration_window)
    {
        Registration_window->setWindowTitle(QCoreApplication::translate("Registration_window", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("Registration_window", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265 \320\275\320\276\320\262\320\276\320\263\320\276 \320\260\320\272\320\272\320\260\321\203\320\275\321\202\320\260", nullptr));
        login_label->setText(QCoreApplication::translate("Registration_window", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        pasword_label->setText(QCoreApplication::translate("Registration_window", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        rep_pasw_label->setText(QCoreApplication::translate("Registration_window", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214:", nullptr));
        create_btn->setText(QCoreApplication::translate("Registration_window", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        log_label_2->setText(QCoreApplication::translate("Registration_window", "(\320\275\320\265 \320\274\320\265\320\275\320\265\320\265 5 \321\201\320\270\320\274\320\262)", nullptr));
        pass_label_2->setText(QCoreApplication::translate("Registration_window", "(\320\275\320\265 \320\274\320\265\320\275\320\265\320\265 5 \321\201\320\270\320\274\320\262)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registration_window: public Ui_Registration_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_WINDOW_H
