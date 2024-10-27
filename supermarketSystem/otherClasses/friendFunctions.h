#ifndef FRIENDFUNCTIONS_H
#define FRIENDFUNCTIONS_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>

enum dbStatus
{
    connected,
    notConnected,
    dataInserted,
    dataNotInserted
};

// enum EmployeeRecordStatus
// {
//     dbConnected,
//     dbNotConnected,
//     error1,
//     error2,
//     error3,
//     dataEntered,
//     dataNotEntered
// };


dbStatus connectToDatabase(const QString&, const QString&, int, const QString&, const QString&, const QString&);
dbStatus connectToDatabase(const QString&, const QString&);

#endif



