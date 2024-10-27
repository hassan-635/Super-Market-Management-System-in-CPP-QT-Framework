#include "admin.h"
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

Admin::Admin() : User()//nullary constructor that sets undefined values of data for object
{}

Admin ::Admin(QString n, QString e, QString p) : User(n, e, p)//parameterized constructor that sets given values for data members
{}

QString Admin::getUsername()
{
    return User::loginPersonUsername;
}

dbStatus Admin::insertAdminData()//for signup of admin
{
    dbStatus status = connectToDatabase("QSQLITE", "D:/SuperMarket v1.6 (1)/SuperMarket/supermarketSystem/Database/market.db");

    // dbStatus status = connectToDatabase("QMYSQL", "127.0.0.1", 3306, "root", "", "MARKET");//database connection that returns enum index
    if(status != connected)
    {
        return status;// if database is not connected then return which problem that it is creatting
    }

    QSqlQuery query1;//first query that inserts values in database admin_data
    query1.prepare("INSERT INTO ADMIN_DATA (A_USERNAME, A_NAME, A_ID, A_EMAIL, A_PASSWORD) "
                   "VALUES (:A_USERNAME, :A_NAME, :A_ID, :A_EMAIL, :A_PASSWORD)");
    query1.bindValue(":A_USERNAME", this->username);
    query1.bindValue(":A_NAME", this->name);
    query1.bindValue(":A_ID", this->id);
    query1.bindValue(":A_EMAIL", this->email);
    query1.bindValue(":A_PASSWORD", this->password);


    if (query1.exec())
    {
        return dataInserted;
    }
    else
    {
        return dataNotInserted;
    }
}

QString Admin::getName()
{
    return this ->name;
}

QString Admin ::getId()
{
    int idInt = this ->id;
    QString idString  = QString ::number(idInt);

    return idString;
}
