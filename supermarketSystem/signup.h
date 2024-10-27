#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
// #include "login.h"

namespace Ui {
class signUp;
}

class signUp : public QDialog
{
    Q_OBJECT

public:
    explicit signUp(QWidget *parent = nullptr);
    ~signUp();

private slots:


    void on_buttonBack_clicked();

    void on_ButtonSignUp_clicked();

private:
    Ui::signUp *ui;
};

#endif // SIGNUP_H
