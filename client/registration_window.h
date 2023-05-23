#ifndef REGISTRATION_WINDOW_H
#define REGISTRATION_WINDOW_H

#include <QDialog>

namespace Ui {
class Registration_window;
}

class Registration_window : public QDialog
{
    Q_OBJECT

public:

    void set_style_sheet();

    explicit Registration_window(QWidget *parent = nullptr);
    ~Registration_window();

private slots:
    void on_create_btn_clicked();

private:
    Ui::Registration_window *ui;
};

#endif // REGISTRATION_WINDOW_H
