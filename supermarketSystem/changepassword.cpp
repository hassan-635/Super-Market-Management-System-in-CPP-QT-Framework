#include "changepassword.h"
#include "adminscreen.h"
#include "ui_changepassword.h"
#include "otherClasses/friendFunctions.h"
#include "otherClasses/user.h"

#include <QMessageBox>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>

ChangePassword::ChangePassword(QWidget *parent, QString un)
    : QDialog(parent)
    , ui(new Ui::ChangePassword)
{
    ui->setupUi(this);
    QString uname = un;
    ui->label_2->setText(uname);
    qDebug()<<uname;
}

ChangePassword::~ChangePassword()
{
    delete ui;
}

void ChangePassword::on_buttonBack_clicked()
{
    this -> close();
    AdminScreen* as;
    as = new AdminScreen(this, ui->label_2->text());
    as -> show();
}


void ChangePassword::on_empPass_clicked()
{
    QString enteredUsername = ui->username->text();
    QString enteredPassword = ui->NewPassword->text();
    QString enteredConfirmPassword = ui->ConfirmNewPassword->text();

    if(enteredPassword == enteredConfirmPassword)
    {
        // dbStatus status = connectToDatabase("QMYSQL", "127.0.0.1", 3306, "root", "", "MARKET");

         dbStatus status = connectToDatabase("QSQLITE", "D:/SuperMarket v1.6 (1)/SuperMarket/supermarketSystem/Database/market.db");

        if(status!=connected)
        {
            QMessageBox::critical(this, "Connection Error", "Database Not Connected!!!");
        }

        QString queryString = "UPDATE EMPLOYEE_DATA SET E_PASSWORD = :enteredPassword WHERE A_USERNAME = :adminUsername AND E_USERNAME = :enteredUsername";
        QSqlQuery query;

        query.prepare(queryString);
        query.bindValue(":enteredPassword", enteredPassword);
        query.bindValue(":adminUsername", ui->label_2->text());
        query.bindValue(":enteredUsername", enteredUsername);

        if(query.exec())
        {
            qDebug()<<"Data Succesfully changed";
            ui->ConfirmNewPassword->clear();
            ui->NewPassword->clear();
            // ui->adminConfirmation->clear();
            ui->username->clear();
        }
        else
        {
            QMessageBox::critical(this, "Password Unchanged", "Password Updation Failed!!!\nPlease Check Validation of entered Data!!!");
        }

    }
    else
    {
        QMessageBox::critical(this, "Password Unmatched", "Please Enter same Password!!!");
        ui->username->clear();
        ui->NewPassword->clear();
        ui->ConfirmNewPassword->clear();
        // ui->adminConfirmation->clear();
    }
}

void ChangePassword::on_adminPass_clicked()
{
    QString enteredUsername = ui->username->text();
    QString enteredPassword = ui->NewPassword->text();
    QString enteredConfirmPassword = ui->ConfirmNewPassword->text();

    if(enteredPassword == enteredConfirmPassword && enteredUsername == ui->label_2->text())
    {
        // dbStatus status = connectToDatabase("QMYSQL", "127.0.0.1", 3306, "root", "", "MARKET");

        dbStatus status = connectToDatabase("QSQLITE", "D:/SuperMarket v1.6 (1)/SuperMarket/supermarketSystem/Database/market.db");


        if(status!=connected)
        {
            QMessageBox::critical(this, "Connection Error", "Database Not Connected!!!");
        }

        QString queryString = "UPDATE ADMIN_DATA SET A_PASSWORD = :enteredPassword WHERE A_USERNAME = :adminUsername";
        QSqlQuery query;

        query.prepare(queryString);
        query.bindValue(":enteredPassword", enteredPassword);
        query.bindValue(":adminUsername", ui->label_2->text());
        // query.bindValue(":adminPassword", ui->adminConfirmation->text());

        if(query.exec())
        {
            qDebug()<<"Data Succesfully changed";
            ui->ConfirmNewPassword->clear();
            ui->NewPassword->clear();
            // ui->adminConfirmation->clear();
            ui->username->clear();
        }
        else
        {
            QMessageBox::critical(this, "Password Unchanged", "Password Updation Failed!!!\nPlease Check Validation of entered Data!!!");
        }

    }
    else
    {
        QMessageBox::critical(this, "Password Unmatched", "Please Enter same Password!!!");
        ui->username->clear();
        ui->NewPassword->clear();
        ui->ConfirmNewPassword->clear();
        // ui->adminConfirmation->clear();
    }
}

