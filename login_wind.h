#ifndef LOGIN_WIND_H
#define LOGIN_WIND_H

#include <QDialog>

#include "registration_window.h"

namespace Ui {
class Login_wind;
}

class Login_wind : public QDialog
{
    Q_OBJECT

public:
    void set_style_sheet();

    explicit Login_wind(QWidget *parent = nullptr);
    Login_wind(QWidget *parent,QString name,QString pasword);
    ~Login_wind();

private slots:

    void on_create_new_acc_btn_clicked();

    void on_login_btn_clicked();

private:
    Registration_window* reg_win;
    Ui::Login_wind *ui;
};

#endif // LOGIN_WIND_H
