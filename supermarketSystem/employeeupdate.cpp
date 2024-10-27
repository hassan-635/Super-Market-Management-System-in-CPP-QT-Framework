#include "employeeupdate.h"
#include "ui_employeeupdate.h"
#include "adminscreen.h"
#include "otherClasses/friendFunctions.h"

#include <QDate>
#include <QMessageBox>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>

employeeUpdate::employeeUpdate(QWidget *parent, QString un)
    : QDialog(parent)
    , ui(new Ui::employeeUpdate)
{
    ui->setupUi(this);
    QString  uname = un;
    ui->label_2->setText(uname);
}

employeeUpdate::~employeeUpdate()
{
    delete ui;
}

void employeeUpdate::on_buttonClear_clicked()
{
    ui->NewEmail->clear();
    ui->NewSalary->clear();
    ui->newEmpHireDate->clear();
    ui->empUsername->clear();
}


void employeeUpdate::on_buttonBack_clicked()
{
    AdminScreen* as;
    this -> close();
    as = new AdminScreen(this, ui->label_2->text());
    as -> show();
}


void employeeUpdate::on_buttonSave_clicked()
{
    QString empUsername, enteredEmail, enteredSalary;
    QDate enteredDate;

    empUsername = ui->empUsername->text();
    enteredEmail= ui->NewEmail->text();
    enteredSalary = ui->NewSalary->text();
    enteredDate = ui->newEmpHireDate->date();

    QString enteredDateString = enteredDate.toString();

    bool ok;

    enteredSalary.toUInt(&ok);

    if(ok)
    {
        dbStatus status = connectToDatabase("QSQLITE", "D:/SuperMarket v1.6 (1)/SuperMarket/supermarketSystem/Database/market.db");

        if(status!=connected)
        {
            QMessageBox::critical(this, "Connection Error", "Database Not Connected!!!");
        }

        QString queryString1 = "UPDATE EMPLOYEE_DATA SET E_EMAIL = :enteredEmail WHERE A_USERNAME = :adminUsername AND E_USERNAME = :empUsername;";
        QString queryString2 = "UPDATE EMPLOYEE_DATA SET E_SALARY = :enteredSalary WHERE A_USERNAME = :adminUsername AND E_USERNAME = :empUsername;";
        QString queryString3 = "UPDATE EMPLOYEE_DATA SET E_HIREDATE = :enteredDateString WHERE A_USERNAME = :adminUsername AND E_USERNAME = :empUsername;";

        QSqlQuery query1, query2, query3;

        query1.prepare(queryString1);
        query1.bindValue(":enteredEmail", enteredEmail);
        query1.bindValue(":adminUsername", ui->label_2->text());
        query1.bindValue(":empUsername", empUsername);

        query2.prepare(queryString2);
        query2.bindValue(":enteredSalary", enteredSalary);
        query2.bindValue(":adminUsername", ui->label_2->text());
        query2.bindValue(":empUsername", empUsername);

        query3.prepare(queryString3);
        query3.bindValue(":enteredDateString", enteredDateString);
        query3.bindValue(":adminUsername", ui->label_2->text());
        query3.bindValue(":empUsername", empUsername);

        if(query1.exec())
        {
            if(query2.exec())
            {
                if(query3.exec())
                {
                    ui->NewEmail->clear();
                    ui->NewSalary->clear();
                    ui->empUsername->clear();
                    ui->newEmpHireDate->clear();
                }
                else
                {
                    qDebug()<<"Error query 3";
                }
            }
            else
            {
                qDebug()<<"Error query 2";
            }
        }
        else
        {
            qDebug()<<"Error query 1";
        }

        QMessageBox::information(this, "Data Inserted", "Data Inserted Successfully!!!");
    }
    else
    {
        QMessageBox::critical(this, "Invalid Data", "Please Enter valid Data");
        ui->newEmpHireDate->clear();
        ui->NewEmail->clear();
        ui->NewSalary->clear();
        ui->empUsername->clear();
    }
}

