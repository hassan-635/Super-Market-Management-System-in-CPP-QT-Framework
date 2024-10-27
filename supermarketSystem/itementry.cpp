#include "itementry.h"
#include "ui_itementry.h"
#include "employeescreen.h"
#include "otherClasses/employee.h"


#include <QMessageBox>


ItemEntry::ItemEntry(QWidget *parent, const QString& un)
    : QDialog(parent)
    , ui(new Ui::ItemEntry)
{
    ui->setupUi(this);
    QString uname = un;
    ui->label->setText(uname);
}

ItemEntry::~ItemEntry()
{
    delete ui;
}

void ItemEntry::on_buttonBack_clicked()
{
    this -> close();
    EmployeeScreen* es;
    es = new EmployeeScreen(this, ui->label->text());
    es -> show();
}


void ItemEntry::on_buttonClear_clicked()
{
    ui->itemName->clear();
    ui->itemPrice->clear();
    ui->itemQuantity->clear();
}


void ItemEntry::on_buttonSave_clicked()
{
    QString enteredName, enteredPrice, enteredQuantity;
    enteredName = ui->itemName->text();
    enteredPrice = ui->itemPrice->text();
    enteredQuantity = ui->itemQuantity->text();

    bool ok, ok2;

    enteredPrice.toDouble(&ok);
    enteredQuantity.toUInt(&ok2);

    if(ok)
    {
        if(ok2)
        {
            QDate date;
            date.setDate(2024, 1, 1);
            Employee emp(ui->label->text(), "", "", 0, date, 0, "", ui->label->text());
            dbStatus ins = emp.insertItemData(enteredName, enteredPrice, enteredQuantity, ui->label->text());

            if(ins == dataInserted)
            {
                QMessageBox::information(this, "Inserted", "Data Inserted Successfully!!!");
                ui->itemName->clear();
                ui->itemPrice->clear();
                ui->itemQuantity->clear();
            }
            else
            {
                QMessageBox::critical(this, "Error", "Data Insertion failed");
            }
        }
        else
        {
                QMessageBox::critical(this, "Invalid Data", "Please Enter valid Data!!!");
                ui->itemName->clear();
                ui->itemPrice->clear();
                ui->itemQuantity->clear();
        }
    }
    else
    {
        QMessageBox::critical(this, "Invalid Data", "Please Enter valid Data!!!");
        ui->itemName->clear();
        ui->itemPrice->clear();
        ui->itemQuantity->clear();
    }
}

