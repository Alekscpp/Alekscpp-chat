#ifndef ABOUT_PROGRAMM_WINDOW_H
#define ABOUT_PROGRAMM_WINDOW_H

#include <QDialog>

namespace Ui {
class about_programm_window;
}

class about_programm_window : public QDialog
{
    Q_OBJECT

public:
    void set_style_sheet();
    explicit about_programm_window(QWidget *parent = nullptr);
    ~about_programm_window();

private:
    Ui::about_programm_window *ui;
};

#endif // ABOUT_PROGRAMM_WINDOW_H
