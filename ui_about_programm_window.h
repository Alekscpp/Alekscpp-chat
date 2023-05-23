/********************************************************************************
** Form generated from reading UI file 'about_programm_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_PROGRAMM_WINDOW_H
#define UI_ABOUT_PROGRAMM_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_about_programm_window
{
public:
    QLabel *label;

    void setupUi(QDialog *about_programm_window)
    {
        if (about_programm_window->objectName().isEmpty())
            about_programm_window->setObjectName(QString::fromUtf8("about_programm_window"));
        about_programm_window->resize(680, 385);
        about_programm_window->setMinimumSize(QSize(680, 385));
        about_programm_window->setMaximumSize(QSize(680, 385));
        label = new QLabel(about_programm_window);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 651, 301));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        label->setFont(font);

        retranslateUi(about_programm_window);

        QMetaObject::connectSlotsByName(about_programm_window);
    } // setupUi

    void retranslateUi(QDialog *about_programm_window)
    {
        about_programm_window->setWindowTitle(QCoreApplication::translate("about_programm_window", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("about_programm_window", "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \321\201\320\276\320\267\320\264\320\260\320\275\320\260 \320\262 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\265 \320\270\320\267\321\203\321\207\320\265\320\275\320\270\321\217 \321\201\320\265\321\202\320\265\320\262\320\276\320\263\320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217, \n"
" \320\275\320\260 \320\277\321\200\320\270\320\274\320\265\321\200\320\265 \321\200\320\260\320\261\320\276\321\202\321\213 \320\262\320\265\320\261\321\201\320\276\320\272\320\265\321\202\320\276\320\262, \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\321\217 \320\261\320\270\320\261\320\273\320\270\320\276\321\202\320\265\320\272\321\203 websocketpp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class about_programm_window: public Ui_about_programm_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_PROGRAMM_WINDOW_H
