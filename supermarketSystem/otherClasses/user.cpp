 #include "user.h"
#include "friendFunctions.h"

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>


void saveId();
int checkId();

QString User::loginPersonUsername = "";
QString User::loginPersonPassword = "";

User::User() : name("not set"), email("not set"), password("not set")
{
    id++;
    QString str_id = QString::number(id);
    username = name + str_id;
    setLoginPersonData(username, password);
    saveId();
}

User ::User(QString n, QString e, QString p) : name(n), email(e), password(p)
{
    id++;
    QString str_id = QString ::number(id);
    username = name + str_id;
    setLoginPersonData(username, p);
    saveId();
}

void User::setLoginPersonData(QString uname, QString pwd)
{
    User::loginPersonUsername = uname;
    User::loginPersonPassword = pwd;
}

int User::id = checkId();

int User ::getId()
{
    return id;
}

void saveId()
{
    QFile File("lastID.txt");
    if(File.open(QIODevice::WriteOnly))
    {
        QTextStream stream(&File);
        stream<<User::getId();
    }
    File.close();
}

int checkId()
{
    QFile File("lastID.txt");
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



QString User::getUsername()
{
    return loginPersonUsername;
}

QString User::getPassword()
{
    return loginPersonPassword;
}

User::~User()
{}


int User::Login(const QString& uname, const QString& pwd)//uname : username and pwd means password
{
    dbStatus status = connectToDatabase("QSQLITE", "D:/SuperMarket v1.6 (1)/SuperMarket/supermarketSystem/Database/market.db");
    if(status != connected)
    {
        return status;//0, 1, 2, 3 due to the enumerator
    }

    QString database_uname = uname;
    QString database_pwd = pwd;


    QSqlQuery query;
    query.prepare("SELECT A_USERNAME, A_PASSWORD FROM ADMIN_DATA WHERE A_USERNAME = :uname AND A_PASSWORD = :pwd");
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








