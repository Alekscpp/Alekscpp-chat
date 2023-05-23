#include "login_wind.h"

#include "ui_login_wind.h"

#include "websock_chat.h"


void Login_wind::set_style_sheet()
{
    ui->label->setStyleSheet("color: rgb(255,212,3);");
    ui->login_label->setStyleSheet("color: rgb(255,212,3);");
    ui->password_label->setStyleSheet("color: rgb(255,212,3);");
    ui->login_btn->setStyleSheet("background-color: #4a7dcf");
    ui->create_new_acc_btn->setStyleSheet("background: rgb(255,212,3);"
                                          "border-radius: 7px;");
    ui->login_btn->setStyleSheet("background: rgb(255,212,3);"
                                       "border-radius: 7px;");
    this->setWindowIcon(QIcon(":/res/icon_chat.png"));

    QPixmap bkgnd(":/res/background.png");
    bkgnd = bkgnd.scaled(size(), Qt::IgnoreAspectRatio);
    QPalette pall;
    pall.setBrush(QPalette::Background, bkgnd);
    setPalette(pall);
}

Login_wind::Login_wind(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login_wind)
{
    ui->setupUi(this);

    set_style_sheet();
}

Login_wind::Login_wind(QWidget *parent, QString name, QString password):
    QDialog(parent),
    ui(new Ui::Login_wind)
{
    ui->setupUi(this);
    ui->login_line->setText(QString(name.begin(),name.size()-2));
    ui->pasword_line->setText(password);

    set_style_sheet();
}

Login_wind::~Login_wind()
{
    delete ui;
}




void Login_wind::on_create_new_acc_btn_clicked()
{
    close();
    reg_win=new Registration_window(this);
    reg_win->setModal(true);
    reg_win->show();
}


void Login_wind::on_login_btn_clicked()
{
    chat_wind->user_password=ui->pasword_line->text();
    text_to_send="#Logmess#"+ui->login_line->text()+"\n"+ui->pasword_line->text();
    have_message_to_send=true;
    close();

}

