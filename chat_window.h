#ifndef CHAT_WINDOW_H
#define CHAT_WINDOW_H

#include "about_programm_window.h"

#include "login_wind.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE

namespace Ui { class Chat_Window; }

QT_END_NAMESPACE

class Chat_Window : public QMainWindow
{
    Q_OBJECT

public:

    QString chat_text;
    QString user_name=NULL;
    QString user_password=NULL;
    bool is_connect=false;


    Chat_Window(QWidget *parent = nullptr);
    ~Chat_Window();

signals:

    void status();
    void have_messag();

private slots:

    void Chat_Window::resizeEvent(QResizeEvent *evt);
    void on_send_btn_clicked();
    void on_new_accaunt_action_triggered();
    void on_change_account_action_triggered();
    void on_action_ab_window_triggered();
    void set_status();
    void mess_process();
    void set_style_sheet();

private:

    Login_wind* log_wind;
    about_programm_window* ab_prog;
    Ui::Chat_Window *ui;

};
#endif // CHAT_WINDOW_H
