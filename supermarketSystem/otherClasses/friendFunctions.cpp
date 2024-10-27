#include "friendFunctions.h"
//for mysql
dbStatus connectToDatabase(const QString& driver, const QString& hostName, int port, const QString& userName, const QString& password, const QString& databaseName)
{
    QSqlDatabase db = QSqlDatabase::addDatabase(driver);
    db.setHostName(hostName);
    db.setPort(port);
    db.setUserName(userName);
    db.setPassword(password);
    db.setDatabaseName(databaseName);

    if (db.open())
    {
        return connected;
    }
    else
    {
        return notConnected;
    }
}

//for sqlite

dbStatus connectToDatabase(const QString& driver, const QString& path)
{
    QSqlDatabase db = QSqlDatabase::addDatabase(driver);
    db.setDatabaseName(path);

    if(db.open())
    {
        return connected;
    }
    else
    {
        return notConnected;
    }
}
