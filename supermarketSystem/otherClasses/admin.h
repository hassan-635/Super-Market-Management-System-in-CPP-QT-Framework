#ifndef ADMIN_H
#define ADMIN_H

#include "user.h"
#include "friendFunctions.h"

#include <QString>
#include <QDate>

class Admin : public User
{
public:
    Admin();
    Admin(QString, QString, QString);

    dbStatus insertAdminData();
    QString getUsername();
    QString getName();
    QString getId();

    friend dbStatus connectToDatabase(const QString&, const QString&, int, const QString&, const QString&);
    friend dbStatus connectToDatabase(const QString&, const QString&);

    friend class Employee;
};

#endif // ADMIN_H
