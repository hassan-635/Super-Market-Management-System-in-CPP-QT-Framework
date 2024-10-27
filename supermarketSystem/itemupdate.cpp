#include "itemupdate.h"
#include "employeescreen.h"
#include "ui_itemupdate.h"
#include "otherClasses/friendFunctions.h"

#include <QMessageBox>

ItemUpdate::ItemUpdate(QWidget *parent, const QString& un)
    : QDialog(parent)
    , ui(new Ui::ItemUpdate)
{
    ui->setupUi(this);
    QString uname = un;
    ui->label->setText(uname);
}

ItemUpdate::~ItemUpdate()
{
    delete ui;
}

void ItemUpdate::on_buttonBack_clicked()
{
    this -> close();
    EmployeeScreen* es;
    es = new EmployeeScreen(this, ui->label->text());
    es -> show();
}


void ItemUpdate::on_buttonClear_clicked()
{
    ui->itemCode->clear();
    ui->itemPrice->clear();
    ui->itemQuantity->clear();
}


void ItemUpdate::on_buttonSave_clicked()
{
    QString newQuantity = ui->itemQuantity->text();
    QString newPrice = ui->itemPrice->text();
    QString code = ui->itemCode->text();

    bool ok, ok2;
    newQuantity.toUInt(&ok);
    newPrice.toUInt(&ok2);

    if(ok)
    {
        if(ok2)
        {
           dbStatus status = connectToDatabase("QSQLITE", "D:/SuperMarket v1.6 (1)/SuperMarket/supermarketSystem/Database/market.db");
                if(status!=connected)
                {
                    QMessageBox::critical(this, "Connection Error", "Database Not Connected!!!");
                }

                QString queryString1 = "UPDATE ITEMS_DATA SET I_QUANTITY = :newQuantity WHERE E_USERNAME = :euname AND I_CODE = :icode;";
                QString queryString2 = "UPDATE ITEMS_DATA SET I_PRICE = :newPrice WHERE E_USERNAME = :euname AND I_CODE = :icode;";



                QSqlQuery query1, query2;

                query1.prepare(queryString1);
                query1.bindValue(":newQuantity", newQuantity);
                query1.bindValue(":euname", ui->label->text());
                query1.bindValue(":icode", code);

                query2.prepare(queryString2);
                query2.bindValue(":newPrice", newPrice);
                query2.bindValue(":euname", ui->label->text());
                query2.bindValue(":icode", code);

                if(query1.exec())
                {
                    if(query2.exec())
                    {
                        ui->itemCode->clear();
                        ui->itemPrice->clear();
                        ui->itemQuantity->clear();
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

                QMessageBox::information(this, "Data Inserted", "DAta Inserted Successfully!!!");
            }

            else
            {
                QMessageBox::critical(this, "Invalid Data", "Please Enter valid Data");
                ui->itemCode->clear();
                ui->itemPrice->clear();
                ui->itemQuantity->clear();
            }
        }
        else
        {
        QMessageBox::critical(this, "Invalid Data", "Please Enter valid Data");
        ui->itemCode->clear();
        ui->itemPrice->clear();
        ui->itemQuantity->clear();
        }
}

