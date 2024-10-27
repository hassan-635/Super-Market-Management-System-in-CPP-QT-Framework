#ifndef USER_H
#define USER_H

#include "friendFunctions.h"

#include <QString>



class User
{
protected:
    static QString loginPersonUsername;
    static QString loginPersonPassword;
    QString username;
    QString name;
    QString email;
    QString password;
    static int id;
public:

    User();
    User(QString, QString, QString);
    static int getId();
   virtual int Login(const QString&, const QString&);
    QString getUsername();
    QString getPassword();
    static  void setLoginPersonData(QString, QString);

    friend dbStatus connectToDatabase(const QString&, const QString&, int, const QString&, const QString&, const QString&);
    friend dbStatus connectToDatabase(const QString&, const QString&);

    ~User();
};

#endif // USER_H
