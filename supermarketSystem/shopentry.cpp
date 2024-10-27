#include "shopentry.h"
#include "adminscreen.h"
#include "ui_shopentry.h"
#include "otherClasses/admin.h"
#include "otherClasses/employee.h"

#include <QString>
#include <QDate>
#include <QMessageBox>

ShopEntry::ShopEntry(QWidget *parent, const QString &un)
    : QDialog(parent)
    , ui(new Ui::ShopEntry)
{
    ui->setupUi(this);
    QString uname = un;
    ui->label->setText(uname);
}

ShopEntry::~ShopEntry()
{
    delete ui;
}

void ShopEntry::on_buttonBack_clicked()
{
    this -> close();
    AdminScreen* as;
    as = new AdminScreen(this, ui->label->text());
    as -> show();
}


void ShopEntry::on_buttonClear_clicked()
{
    ui->shopID->clear();
    ui->shopName->clear();
    ui->empEmail->clear();
    ui->empName->clear();
    ui->empPassword->clear();
    ui->empHireDate->clear();
    ui->empSalary->clear();
}


void ShopEntry::on_buttonSave_clicked()
{
    QString  enteredShopId, enteredShopName, enteredEmpEmail, enteredEmpName, enteredEmpPassword,enteredEmpSalary;
    QDate enteredEmpHireDate;


    enteredShopId = ui->shopID->text();
    enteredShopName = ui->shopName->text();
    enteredEmpEmail = ui->empEmail->text();
    enteredEmpName = ui ->empName->text();
    enteredEmpPassword = ui->empPassword->text();
    enteredEmpSalary = ui->empSalary->text();
    enteredEmpHireDate = ui->empHireDate->date();

    bool ok, ok2;
    int sid = enteredShopId.toInt(&ok);
    int salary = enteredEmpSalary.toInt(&ok2);

    if(ok && ok2)
    {
        QString un = ui->label->text();
        Employee emp(enteredEmpName, enteredEmpPassword, enteredEmpEmail, salary, enteredEmpHireDate, sid, enteredShopName, enteredEmpName);
        dbStatus check =emp.shopEntry(un);

        switch(check)
        {
        case notConnected:
            QMessageBox::critical(this, "Connection Error", "Database Not Connected");
            break;
        case dataInserted:
            QMessageBox::information(this, "Data Entered", "Data Entered Successfully");
             break;
        case dataNotInserted:
            QMessageBox::critical(this, "Error", "Data Insertion Failure");
            break;
        default:
            break;
        }

        ui->empHireDate->clear();
        ui->empEmail->clear();
        ui->empName->clear();
        ui->empPassword->clear();
        ui->empSalary->clear();
        ui->shopID->clear();
        ui->shopName->clear();

    }
    else
    {
        QMessageBox::critical(this, "Employee Registeration Failed!!!", "Please Enter valid Shop ID or Employee Salary!!!");
    }

}
