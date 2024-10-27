#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "user.h"
#include "admin.h"

#include <QDate>
#include <QString>

class Employee : public User
{
private:
    int salary;
    QDate empHireDate;
    int shopId;
    QString shopName;
    QString empName;
public:
    Employee();
    Employee(QString, QString, QString, int, QDate, int, QString, QString);

    int Login(const QString& uname, const QString& pwd) override;

   dbStatus shopEntry(const QString&);
    dbStatus insertItemData(const QString&, const QString&, const QString&, const QString&);

    friend class Admin;
};

#endif // EMPLOYEE_H
