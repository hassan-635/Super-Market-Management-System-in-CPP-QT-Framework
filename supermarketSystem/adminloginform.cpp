#include "adminloginform.h"
#include "ui_adminloginform.h"
#include "adminscreen.h"
#include "login.h"
#include "otherClasses/admin.h"


#include <QMessageBox>

AdminLoginForm::AdminLoginForm(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AdminLoginForm)
{
    ui->setupUi(this);
}

AdminLoginForm::~AdminLoginForm()
{
    delete ui;
}

void AdminLoginForm::on_buttonBack_clicked()
{
    this -> close();
    mainwin = new MainWindow(this);
    mainwin -> show();
}

void AdminLoginForm::on_ButtonLogInAdmin_clicked()
{
    QString enteredUsername = ui->userNameAdmin->text();
    QString enteredPassword = ui->passwordAdmin->text();
    int status;
    Admin admin;
    status = admin.Login(enteredUsername, enteredPassword);

    if(status >= 0 && status <= 3)
    {
        QMessageBox::critical(this, "Connection Error", "Database Not Connected!!!");
    }
    else if(status == 4 )
    {
        QMessageBox::critical(this, "Query error", "Database Query Error!!!");
    }
    else if(status == 5)
    {
        QMessageBox::information(this, "User not found", "User not Found, Please Sign up or enter correct Credentials!!!");
        ui->userNameAdmin->clear();
        ui->passwordAdmin->clear();
    }
    else
    {
        this -> close();
        Admin admin(ui->userNameAdmin->text(), "", ui->passwordAdmin->text());
        AdminScreen* as;
        as = new AdminScreen(this, admin.getName());
        as -> show();
    }
}



