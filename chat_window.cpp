#include"websock_chat.h"
#include "ui_chat_window.h"
#include "chat_window.h"

Chat_Window::Chat_Window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Chat_Window)
{
    connect(this,SIGNAL(have_messag()),this,SLOT(mess_process()));
    connect(this,SIGNAL(status()),this,SLOT(set_status()));

    ui->setupUi(this);
    ui->text_to_mes->setReadOnly(true);

    QFile user_data_file("user_data.txt");
    user_data_file.open(QIODevice::ReadWrite);
    user_data_file.seek(0);
    QByteArray name=user_data_file.readLine();
    user_name=QString::fromUtf8(name);
    QByteArray password=user_data_file.readLine();
    user_password=QString::fromUtf8(password);
    user_data_file.close();

    if(user_name==NULL){
        log_wind=new Login_wind(this);
        log_wind->setModal(true);
        log_wind->show();
    }else{
        log_wind=new Login_wind(this,user_name,user_password);
        log_wind->setModal(true);
        log_wind->show();
    }
    set_style_sheet();
}

Chat_Window::~Chat_Window()
{

    delete ui;

}


void Chat_Window::on_send_btn_clicked()
{
    text_to_send=user_name+"("+QTime::currentTime().toString()+") "+ui->text_to_mes->toPlainText();
    have_message_to_send=true;
    ui->text_to_mes->clear();
}

void Chat_Window::mess_process()
{

    if(received_mes.mid(0,7)=="#LogOk#"){
            user_name=received_mes.mid(7);
            QMessageBox::information(this,"Авторизация","Вы вошли как "+user_name);
            setWindowTitle(" Чат "+user_name);
            ui->text_to_mes->setReadOnly(false);

            QFile user_data_file("user_data.txt");
            user_data_file.open(QIODevice::WriteOnly| QIODevice::Text);
            user_data_file.write(user_name.toLocal8Bit()+"\n");
            user_data_file.write(user_password.toLocal8Bit());
            user_data_file.close();
        }
    if(received_mes.mid(0,9)=="#OnlUser#"){
        ui->user_list->setText(received_mes.mid(9));
    }else
    if(received_mes=="#LogError#"){
        QMessageBox::warning(this,"Авторизация","Неправильный логин или пароль");
        log_wind=new Login_wind(this);
        log_wind->setModal(true);
        log_wind->show();
    }else if(received_mes=="#RegError#"){
        QMessageBox::warning(this,"Регистрация","Пользователь с таким именем уже существует!");
        Registration_window *reg_win=new Registration_window(this);
        reg_win->setModal(true);
        reg_win->show();
    }else{
        chat_text+=(received_mes+"\n");
        ui->Chat->setText(chat_text);
        QTextCursor cursor = ui->Chat->textCursor();
        cursor.movePosition(QTextCursor::End);
        ui->Chat->setTextCursor(cursor);
    }
}

void Chat_Window::on_new_accaunt_action_triggered(){
    Registration_window* reg_win;
    reg_win=new Registration_window(this);
    reg_win->setModal(true);
    reg_win->show();
}


void Chat_Window::on_change_account_action_triggered(){
    log_wind=new Login_wind(this);
    log_wind->setModal(true);
    log_wind->show();
}

void Chat_Window::set_status(){
    if(!is_connect){
        ui->label_status->setText("offline");
        ui->label_status->setStyleSheet("color: red;");
    }else{
        ui->label_status->setText("online");
        ui->label_status->setStyleSheet("color: green;");
    }

}
void Chat_Window::Chat_Window::resizeEvent(QResizeEvent *evt){
    QPixmap bkgnd(":/res/background.png");
    bkgnd = bkgnd.scaled(size(), Qt::IgnoreAspectRatio);
    QPalette pall = palette(); //copy current, not create new
    pall.setBrush(QPalette::Background, bkgnd);
    setPalette(pall);
    QMainWindow::resizeEvent(evt);
}
void Chat_Window::set_style_sheet(){
    ui->Chat->setStyleSheet("background-color: black;"
                                "color: rgb(255,212,3);");
    ui->text_to_mes->setStyleSheet("background-color: black;"
                                "color: white;");
    ui->send_btn->setStyleSheet("background: rgb(255,212,3);"
                                "border-radius: 7px;");
    ui->user_list->setStyleSheet("color: rgb(255,212,3);");
    ui->label_users->setStyleSheet("color: rgb(255,212,3);");
    ui->label_chat->setStyleSheet("color: rgb(255,212,3);");
    ui->menubar->setStyleSheet("background-color: black;"
                                 "color: rgb(255,212,3);");
    this->setWindowIcon(QIcon(":/res/icon_chat.png"));
    ui->label_status->setText("offline");
    ui->label_status->setStyleSheet("color: red;");
}

void Chat_Window::on_action_ab_window_triggered(){
    ab_prog=new about_programm_window;
    ab_prog->show();
}

