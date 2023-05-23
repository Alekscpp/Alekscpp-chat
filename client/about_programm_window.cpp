#include "about_programm_window.h"
#include "ui_about_programm_window.h"
#include "websock_chat.h"

about_programm_window::about_programm_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about_programm_window)
{
    ui->setupUi(this);

    set_style_sheet();
}

about_programm_window::~about_programm_window(){
    delete ui;
}
void about_programm_window::set_style_sheet(){
    ui->label->setStyleSheet("color: rgb(255,212,3);");
    this->setWindowIcon(QIcon(":/res/icon_chat.png"));
    QPixmap bkgnd(":/res/background.png");
    bkgnd = bkgnd.scaled(size(), Qt::IgnoreAspectRatio);
    QPalette pall = palette();
    pall.setBrush(QPalette::Background, bkgnd);
    setPalette(pall);
}
