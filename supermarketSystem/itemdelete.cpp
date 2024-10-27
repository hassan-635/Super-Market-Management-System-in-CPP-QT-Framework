#include "itemdelete.h"
#include "employeescreen.h"
#include "ui_itemdelete.h"
#include "otherClasses/friendFunctions.h"

#include <QMessageBox>

ItemDelete::ItemDelete(QWidget *parent, const QString& un)
    : QDialog(parent)
    , ui(new Ui::ItemDelete)
{
    ui->setupUi(this);
    QString uname = un;
    ui->label->setText(uname);
}

ItemDelete::~ItemDelete()
{
    delete ui;
}

void ItemDelete::on_buttonClear_clicked()
{
    ui->itemCode->clear();
    ui->employeeUsername->clear();
}


void ItemDelete::on_buttonBack_clicked()
{
    this -> close();
    EmployeeScreen* es;
    es = new EmployeeScreen(this, ui->label->text());
    es -> show();
}


void ItemDelete::on_buttonDelete_clicked()
{
    QString code = ui->itemCode->text();
    QString uname = ui->employeeUsername->text();

    if(uname == ui->label->text())
    {
        QString query = "DELETE FROM ITEMS_DATA WHERE I_CODE = :code AND E_USERNAME = :uname;";
        QSqlQuery q1;
        q1.prepare(query);

        q1.bindValue(":code", code);
        q1.bindValue(":uname", uname);

        if(q1.exec())
        {
            QMessageBox::information(this, "Deleted", "Item Removed Successfully!!!");
            ui->itemCode->clear();
            ui->employeeUsername->clear();
        }
        else
        {
            QMessageBox::critical(this, "Incorrect Item Code", "Please Enter Correct Item Code!!!");
            ui->itemCode->clear();
            ui->employeeUsername->clear();
        }
    }
    else
    {
        QMessageBox::critical(this, "Invalid Username", "Please Enter valid username!!!");
        ui->itemCode->clear();
        ui->employeeUsername->clear();
    }

}


