#include "registration_window.h"
#include "ui_registration_window.h"
#include "websock_chat.h"

void Registration_window::set_style_sheet()
{
    ui->label->setStyleSheet("color: rgb(255,212,3);");
    ui->log_label_2->setStyleSheet("color: rgb(255,212,3);");
    ui->pass_label_2->setStyleSheet("color: rgb(255,212,3);");
    ui->login_label->setStyleSheet("color: rgb(255,212,3);");
    ui->pasword_label->setStyleSheet("color: rgb(255,212,3);");
    ui->rep_pasw_label->setStyleSheet("color: rgb(255,212,3);");
    ui->create_btn->setStyleSheet("background: rgb(255,212,3);"
                                  "border-radius: 7px;");

    QPixmap bkgnd(":/res/background.png");
    bkgnd = bkgnd.scaled(size(), Qt::IgnoreAspectRatio);
    QPalette pall ;
    pall.setBrush(QPalette::Background, bkgnd);
    setPalette(pall);

    this->setWindowIcon(QIcon(":/res/icon_chat.png"));
}

Registration_window::Registration_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Registration_window)
{
    ui->setupUi(this);
    ui->login_line->setMaxLength(15);
    ui->pasword_line->setMaxLength(15);
    ui->rep_pasw_line->setMaxLength(15);

    set_style_sheet();
}

Registration_window::~Registration_window()
{
    delete ui;
}

void Registration_window::on_create_btn_clicked()
{
   if(ui->login_line->text()==NULL||ui->pasword_line->text()==NULL||ui->rep_pasw_line->text()==NULL){

        QMessageBox::warning(this,"Регистрация","Заполните все поля!");
        ui->login_line->clear();
        ui->pasword_line->clear();
        ui->rep_pasw_line->clear();
   }else if((ui->pasword_line->text()==ui->rep_pasw_line->text())&(ui->pasword_line->text().size()>4)&(ui->login_line->text().size()>4)){
       text_to_send="#Regmess#"+ui->login_line->text()+"\n"+ui->pasword_line->text();
       have_message_to_send=true;

       close();
   }else{
       if(ui->login_line->text().size()<=4){
           QMessageBox::warning(this,"Регистрация","Имя пользователя короче 5 символов");
           ui->login_line->clear();
           ui->pasword_line->clear();
           ui->rep_pasw_line->clear();
       }else{
       QMessageBox::warning(this,"Регистрация","Пароли не совпадают или корояе 5 символов!");
       ui->pasword_line->clear();
       ui->rep_pasw_line->clear();
       }
   }


}

