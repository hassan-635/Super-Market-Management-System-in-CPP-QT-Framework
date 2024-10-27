#include "shopremoval.h"
#include "adminscreen.h"
#include "ui_shopremoval.h"
#include "otherClasses/admin.h"

#include <QMessageBox>
#include <QSqlDatabase>
#include <QtSql>
#include <QSql>
#include <QSqlError>
#include <QSqlQuery>

ShopRemoval::ShopRemoval(QWidget *parent, const QString& un)
    : QDialog(parent)
    , ui(new Ui::ShopRemoval)
{
    QString uname = un;
    ui->setupUi(this);
    ui->label->setText(uname);
}

ShopRemoval::~ShopRemoval()
{
    delete ui;
}

void ShopRemoval::on_buttonBack_clicked()
{
    QString uname = ui->label->text();
    this -> close();
    AdminScreen* as;
    as = new AdminScreen(this, uname);
    as -> show();
}


void ShopRemoval::on_buttonClear_clicked()
{
    ui->shopID->clear();
    // ui->adminPassword->clear();
    ui->adminUname->clear();
    ui->empUsername->clear();
}


void ShopRemoval::on_buttonDelete_clicked()
{
    QString sId = ui->shopID->text();
    bool ok;
   int  intShopId = sId.toInt(&ok);
    QString adminUsername = ui->adminUname->text();
    QString adminCurrent = ui->label->text();
    QString empUsername = ui->empUsername->text();
    Admin admin(adminCurrent, "", "");


    if(ok)
   {
        QString query = "SELECT A_PASSWORD FROM SHOP_DATA WHERE A_USERNAME = :username";

        QSqlQuery q;
        q.prepare(query);
        q.bindValue(":username", adminCurrent);

        if (q.exec()) {
            if (q.next()) {
                // pwd = q.value(0).toString();
            } else {
                // handle no result found
            }
        } else {
            // handle query execution error
            qDebug() << q.lastError();
        }

        if(adminUsername == adminCurrent)
        {
            QString query1 = "DELETE FROM ITEMS_DATA WHERE E_USERNAME = :empUsername";
            QString query2 = "DELETE FROM EMPLOYEE_DATA WHERE A_USERNAME = :adminUsername AND S_ID = :intShopId";
            QString query3 = "DELETE FROM SHOP_DATA WHERE S_ID = :intShopId AND A_USERNAME = :adminUsername";

            QSqlQuery q1, q2, q3;

            q1.prepare(query1);
            // q1.bindValue(":intShopId", intShopId);
            q1.bindValue(":empUsername", empUsername);
            q2.prepare(query2);
            q2.bindValue(":adminUsername", adminUsername);
            q2.bindValue(":intShopId", intShopId);
            q3.prepare(query3);
            q3.bindValue(":intShopId", intShopId);
            q3.bindValue(":adminUsername", adminUsername);

            if(q1.exec())
            {
                if(q2.exec())
                {
                    if(q3.exec())
                    {
                        QMessageBox::information(this, "Data Deleted", "Shop and Employee Removed Successfully!!!");
                    }
                    else
                    {
                        qDebug()<<"error query 3";
                        qDebug()<<q3.lastError().text();
                    }
                }
                else
                {
                    qDebug()<<"error query 2";
                }
            }
            else
            {
                qDebug()<<"error query 1";
            }
        }

    else
    {
        QMessageBox::critical(this, "Incorrect Data", "Please Enter Correct Data");
    }

        // ui->adminPassword->clear();
         ui->adminUname->clear();
        ui->shopID->clear();
         ui->empUsername->clear();
    }
}

