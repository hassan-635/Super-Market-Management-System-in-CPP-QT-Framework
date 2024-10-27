#include "employeeloginform.h"
#include "ui_employeeloginform.h"
#include "employeescreen.h"
#include "otherClasses/employee.h"
#include "login.h"

#include <QMessageBox>

EmployeeLoginForm::EmployeeLoginForm(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EmployeeLoginForm)
{
    ui->setupUi(this);
}

EmployeeLoginForm::~EmployeeLoginForm()
{
    delete ui;
}

void EmployeeLoginForm::on_buttonBack_clicked()
{
    this -> close();
    QMainWindow* mainwin;
    mainwin = new MainWindow(this);
    mainwin -> show();
}



void EmployeeLoginForm::on_ButtonLogIn_clicked()
{
    QString enteredUsername = ui->userName->text();
    QString enteredPassword = ui->password->text();
    int status;
    Employee emp;
    status = emp.Login(enteredUsername, enteredPassword);

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
        ui->userName->clear();
        ui->password->clear();
    }
    else
    {
        this -> close();
        // Employee emp(ui->userName->text(), "", ui->password->text());
        EmployeeScreen* es;
        es = new EmployeeScreen(this, ui->userName->text());
        es -> show();
    }

}

