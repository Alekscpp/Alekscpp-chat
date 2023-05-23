/********************************************************************************
** Form generated from reading UI file 'about_program_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_PROGRAM_WINDOW_H
#define UI_ABOUT_PROGRAM_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_about_program_window
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *about_program_window)
    {
        if (about_program_window->objectName().isEmpty())
            about_program_window->setObjectName(QString::fromUtf8("about_program_window"));
        about_program_window->resize(680, 385);
        about_program_window->setMinimumSize(QSize(680, 385));
        about_program_window->setMaximumSize(QSize(680, 385));
        label = new QLabel(about_program_window);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 651, 51));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(about_program_window);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(290, 80, 121, 31));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label_2->setFont(font1);
        label_3 = new QLabel(about_program_window);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 120, 201, 201));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/res/Avtor.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(about_program_window);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(270, 330, 131, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        label_4->setFont(font2);

        retranslateUi(about_program_window);

        QMetaObject::connectSlotsByName(about_program_window);
    } // setupUi

    void retranslateUi(QDialog *about_program_window)
    {
        about_program_window->setWindowTitle(QCoreApplication::translate("about_program_window", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("about_program_window", "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \321\201\320\276\320\267\320\264\320\260\320\275\320\260 \320\262 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\265 \320\270\320\267\321\203\321\207\320\265\320\275\320\270\321\217 \321\201\320\265\321\202\320\265\320\262\320\276\320\263\320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("about_program_window", "\320\220\320\262\321\202\320\276\321\200:", nullptr));
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("about_program_window", "SASHOK14101", nullptr));
    } // retranslateUi

};

namespace Ui {
    class about_program_window: public Ui_about_program_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_PROGRAM_WINDOW_H
