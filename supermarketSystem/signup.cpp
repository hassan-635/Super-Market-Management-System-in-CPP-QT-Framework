#include <QString>
#include <QMainWindow>
#include <QMessageBox>

#include "signup.h"
#include "ui_signup.h"
#include "login.h"
#include "otherClasses/admin.h"

signUp::signUp(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signUp)
{
    ui->setupUi(this);
}

signUp::~signUp()
{
    delete ui;
}

void signUp::on_buttonBack_clicked()   //to go back to mainwindow
{
    this -> close();
    QMainWindow* mainwin;
    mainwin = new MainWindow(this);
    mainwin -> show();
}

void signUp::on_ButtonSignUp_clicked() //to sign up entered data
{
    QString name = ui ->name->text();
    QString email = ui->email->text();
    QString password = ui->password->text();
    QString cpassword = ui->confirmpassword->text();


    // QMessageBox msg;
    // msg.setStyleSheet("color: #4382EC;"
    //                   "background-color: #E2EEFF;"
    //                   "font-weight: bold;");


    int lname, lemail, lpassword;

    lname = name.length();
    lemail = email.length();
    lpassword = password.length();

    if(lname <= 30 && lname >= 3 && lemail <=30 && lemail>=10 && lpassword<=30 && lpassword>=3)
    {
        if(password == cpassword)
        {
            Admin admin(name, email, password);
            dbStatus status = admin.insertAdminData();
            switch (status)
            {
            case notConnected:
                QMessageBox::critical(this, "Connection Error", "Database not Connected");
                ui->name->clear();
                ui->email->clear();
                ui->password->clear();
                ui->confirmpassword->clear();
                // msg.setIcon(QMessageBox::Critical);
                // msg.setText("Database Not Connected!!!");
                // msg.setWindowTitle("Connection Error");
                // msg.exec();
                break;
            case dataInserted:
                QMessageBox::information(this, "Data Inserted", "Data Inserted Succesfully\nYour Username is : "+admin.getUsername());
                ui->name->clear();
                ui->email->clear();
                ui->password->clear();
                ui->confirmpassword->clear();
                // msg.setIcon(QMessageBox::Information);
                // msg.setText("Database Successfully Entered!!!");
                // msg.setWindowTitle("Data Entered");
                // msg.exec();
                break;
            case dataNotInserted:
                QMessageBox::critical(this, "Data Insertion Error", "Data no Inserted");
                ui->name->clear();
                ui->email->clear();
                ui->password->clear();
                ui->confirmpassword->clear();
                // msg.setIcon(QMessageBox::Critical);
                // msg.setText("Data Not Inserted!!!");
                // msg.setWindowTitle("Insertion Error");
                // msg.exec();
                break;
            default:
                break;
            }
            ui->name->clear();
            ui->email->clear();
            ui->password->clear();
            ui->confirmpassword->clear();
        }
        else
        {
            QMessageBox::critical(this, "Password!!!", "Passwords don't match");
            // msg.setIcon(QMessageBox::Critical);
            // msg.setText("Password not matching!!!");
            // msg.setWindowTitle("Password Error");
            // msg.exec();
            ui->password->clear();
            ui->confirmpassword->clear();
        }
    }
    else
    {
        QMessageBox::critical(this, "Invalid Data", "Please Enter Valid Data");
        ui->name->clear();
        ui->email->clear();
        ui->password->clear();
        ui->confirmpassword->clear();
        // msg.setIcon(QMessageBox::Critical);
        // msg.setText("Please Enter Valid Data!!!");
        // msg.setWindowTitle("Invalid Data");
        // msg.exec();
    }

}

