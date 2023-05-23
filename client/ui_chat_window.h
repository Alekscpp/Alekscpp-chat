/********************************************************************************
** Form generated from reading UI file 'chat_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_WINDOW_H
#define UI_CHAT_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chat_Window
{
public:
    QAction *action;
    QAction *action_ab_window;
    QAction *action_3;
    QAction *new_accaunt_action;
    QAction *change_account_action;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_chat;
    QLabel *label_status;
    QTextBrowser *Chat;
    QVBoxLayout *verticalLayout;
    QLabel *label_users;
    QLabel *user_list;
    QHBoxLayout *horizontalLayout_2;
    QPlainTextEdit *text_to_mes;
    QPushButton *send_btn;
    QMenuBar *menubar;
    QMenu *menu_2;

    void setupUi(QMainWindow *Chat_Window)
    {
        if (Chat_Window->objectName().isEmpty())
            Chat_Window->setObjectName(QString::fromUtf8("Chat_Window"));
        Chat_Window->resize(265, 353);
        Chat_Window->setMinimumSize(QSize(265, 215));
        Chat_Window->setMaximumSize(QSize(800, 800));
        action = new QAction(Chat_Window);
        action->setObjectName(QString::fromUtf8("action"));
        action_ab_window = new QAction(Chat_Window);
        action_ab_window->setObjectName(QString::fromUtf8("action_ab_window"));
        action_3 = new QAction(Chat_Window);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        new_accaunt_action = new QAction(Chat_Window);
        new_accaunt_action->setObjectName(QString::fromUtf8("new_accaunt_action"));
        change_account_action = new QAction(Chat_Window);
        change_account_action->setObjectName(QString::fromUtf8("change_account_action"));
        centralwidget = new QWidget(Chat_Window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_chat = new QLabel(centralwidget);
        label_chat->setObjectName(QString::fromUtf8("label_chat"));
        label_chat->setMaximumSize(QSize(800, 20));
        QFont font;
        font.setBold(true);
        label_chat->setFont(font);

        horizontalLayout->addWidget(label_chat);

        label_status = new QLabel(centralwidget);
        label_status->setObjectName(QString::fromUtf8("label_status"));
        label_status->setFont(font);

        horizontalLayout->addWidget(label_status);


        verticalLayout_2->addLayout(horizontalLayout);

        Chat = new QTextBrowser(centralwidget);
        Chat->setObjectName(QString::fromUtf8("Chat"));
        Chat->setMaximumSize(QSize(800, 800));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        Chat->setFont(font1);

        verticalLayout_2->addWidget(Chat);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_users = new QLabel(centralwidget);
        label_users->setObjectName(QString::fromUtf8("label_users"));
        label_users->setMinimumSize(QSize(85, 0));
        label_users->setMaximumSize(QSize(85, 20));
        label_users->setFont(font);

        verticalLayout->addWidget(label_users);

        user_list = new QLabel(centralwidget);
        user_list->setObjectName(QString::fromUtf8("user_list"));
        QFont font2;
        font2.setPointSize(10);
        user_list->setFont(font2);
        user_list->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(user_list);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        text_to_mes = new QPlainTextEdit(centralwidget);
        text_to_mes->setObjectName(QString::fromUtf8("text_to_mes"));
        text_to_mes->setMinimumSize(QSize(0, 27));
        text_to_mes->setMaximumSize(QSize(811, 27));
        text_to_mes->setFont(font2);

        horizontalLayout_2->addWidget(text_to_mes);

        send_btn = new QPushButton(centralwidget);
        send_btn->setObjectName(QString::fromUtf8("send_btn"));
        send_btn->setMinimumSize(QSize(64, 27));
        send_btn->setMaximumSize(QSize(64, 27));

        horizontalLayout_2->addWidget(send_btn);


        verticalLayout_3->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        Chat_Window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Chat_Window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 265, 21));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        Chat_Window->setMenuBar(menubar);

        menubar->addAction(menu_2->menuAction());
        menu_2->addAction(new_accaunt_action);
        menu_2->addAction(change_account_action);
        menu_2->addAction(action_ab_window);
        menu_2->addAction(action_3);

        retranslateUi(Chat_Window);
        QObject::connect(action_3, SIGNAL(triggered()), Chat_Window, SLOT(close()));

        QMetaObject::connectSlotsByName(Chat_Window);
    } // setupUi

    void retranslateUi(QMainWindow *Chat_Window)
    {
        Chat_Window->setWindowTitle(QCoreApplication::translate("Chat_Window", "\320\247\320\260\321\202", nullptr));
        action->setText(QCoreApplication::translate("Chat_Window", "\320\260\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        action_ab_window->setText(QCoreApplication::translate("Chat_Window", "\320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        action_3->setText(QCoreApplication::translate("Chat_Window", "\320\262\321\213\321\205\320\276\320\264", nullptr));
        new_accaunt_action->setText(QCoreApplication::translate("Chat_Window", "\320\275\320\276\320\262\321\213\320\271 \320\260\320\272\320\272\320\260\321\203\320\275\321\202", nullptr));
        change_account_action->setText(QCoreApplication::translate("Chat_Window", "\321\201\320\274\320\265\320\275\320\270\321\202\321\214 \320\260\320\272\320\272\320\260\321\203\320\275\321\202", nullptr));
        label_chat->setText(QCoreApplication::translate("Chat_Window", "\320\247\320\260\321\202:", nullptr));
        label_status->setText(QString());
        label_users->setText(QCoreApplication::translate("Chat_Window", "\321\201\320\265\320\271\321\207\320\260\321\201 \320\262 \321\201\320\265\321\202\320\270:", nullptr));
        user_list->setText(QString());
        send_btn->setText(QCoreApplication::translate("Chat_Window", "\320\276\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        menu_2->setTitle(QCoreApplication::translate("Chat_Window", "\320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chat_Window: public Ui_Chat_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_WINDOW_H
