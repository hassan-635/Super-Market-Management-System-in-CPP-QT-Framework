
#include "employee.h"
// #include "admin.h"
#include "user.h"
#include "friendFunctions.h"

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QString>
#include <QFile>
#include<QDebug>
#include <QDate>
#include <QString>

int checkItemId();

void saveItemId(int id)
{
    QFile File("lastItemID.txt");
    if(File.open(QIODevice::WriteOnly))
    {
        QTextStream stream(&File);
        stream<<id;//id problem save in file and retrieve from file
    }
    File.close();
}

int checkItemId()
{
    QFile File("lastItemID.txt");
    QString strData;
    int data;
    bool ok;
    if(File.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&File);
        while(stream.atEnd() == 0)
        {
            strData  = stream.readAll();
        }
    }

    data = strData.toInt(&ok);

    return data;
}

Employee::Employee() : User()
{}

Employee ::Employee(QString name, QString pwd, QString email, int sal, QDate hireDate, int sId, QString sname, QString ename) : User(name, email, pwd),
    salary(sal), empHireDate(hireDate), shopId(sId), shopName(sname), empName(ename)
{}

dbStatus Employee::shopEntry(const QString& un)
{
    // dbStatus status  = connectToDatabase("QMYSQL", "127.0.0.1", 3306, "root", "", "MARKET");

    dbStatus status = connectToDatabase("QSQLITE", "D:/SuperMarket v1.6 (1)/SuperMarket/supermarketSystem/Database/market.db");

    if(status != connected)
    {
        return notConnected;
    }

    QString hdate = empHireDate.toString();

    QSqlQuery query1;

    QString uname = un;
    query1.prepare("INSERT INTO SHOP_DATA (S_ID, S_NAME, A_USERNAME, E_USERNAME) VALUES (?, ?, ?, ?)");
    query1.addBindValue(this -> shopId);
    query1.addBindValue(this -> shopName);
    query1.addBindValue(uname);
    query1.addBindValue(this -> username);

    if (!query1.exec())
    {
        qDebug() << "Error in query1: " << query1.lastError().text();
        return dataNotInserted;
    }
    QSqlQuery query2;
    query2.prepare("INSERT INTO EMPLOYEE_DATA (E_USERNAME, E_ID, E_NAME, E_PASSWORD, E_EMAIL, E_SALARY, E_HIREDATE, A_USERNAME, S_ID)"
                   "VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?)");
    query2.addBindValue(this->username);
    query2.addBindValue(this -> id);
    query2.addBindValue(this -> name);
    query2.addBindValue(this -> password);
    query2.addBindValue(this -> email);
    query2.addBindValue(this -> salary);
    query2.addBindValue(hdate);
    query2.addBindValue(uname);
    query2.addBindValue(this -> shopId);

    if (!query2.exec())
    {
        qDebug() << "Error in query2: " << query2.lastError().text();
        return dataNotInserted;
    }

    return dataInserted;
}

int Employee::Login(const QString& uname, const QString& pwd)//uname : username and pwd means password
{
    dbStatus status = connectToDatabase("QSQLITE", "D:/SuperMarket v1.6 (1)/SuperMarket/supermarketSystem/Database/market.db");
    if(status != connected)
    {
        return status;//0, 1, 2, 3 due to the enumerator
    }

    QString database_uname = uname;
    QString database_pwd = pwd;


    QSqlQuery query;
    query.prepare("SELECT E_USERNAME, E_PASSWORD FROM EMPLOYEE_DATA WHERE E_USERNAME = :uname AND E_PASSWORD = :pwd");
    query.bindValue(":uname", database_uname);
    query.bindValue(":pwd", database_pwd);

    if(!query.exec())
    {
        return 4;//4 if query has any error
    }

    if(query.next())
    {
        return 6;
    }
    else
    {
        return 5;//5 if the user is not present
    }
}

dbStatus Employee::insertItemData(const QString& iname, const QString& iprice, const QString& iquantity, const QString& un)
{
    dbStatus status = connectToDatabase("QSQLITE", "D:/SuperMarket v1.6 (1)/SuperMarket/supermarketSystem/Database/market.db");

    if(status != connected)
    {
        return notConnected;
    }

    QSqlQuery query;

    QString itemName = iname;
    QString itemPrice = iprice;
    QString itemquantity = iquantity;
    QString uname = un;

    int itemId = checkItemId();
    saveItemId(checkItemId()+1);
    QString id = QString::number(itemId);

    QString code = itemName + id;

    query.prepare("INSERT INTO ITEMS_DATA (I_CODE, I_ID, I_NAME, I_QUANTITY, I_PRICE, S_ID, E_USERNAME) VALUES (?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue(code);
    query.addBindValue(itemId);
    query.addBindValue(itemName);
    query.addBindValue(itemquantity);
    query.addBindValue(itemPrice);
    query.addBindValue(this->shopId);
    query.addBindValue(uname);

    if (!query.exec())
    {
        qDebug() << "Error in query1: " << query.lastError().text();
        return dataNotInserted;
    }

    return dataInserted;
}


