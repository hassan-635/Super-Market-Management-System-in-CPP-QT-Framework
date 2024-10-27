#ifndef DATE_H
#define DATE_H

#include <QString>
#include <QDate>

class Date
{
private:
    int date;
    int month;
    int year;
public:
    Date();
    Date(int, int, int);

    void setDate(int, int, int);
    int getDate();
    int getMonth();
    int getYear();

    QDate getFullDate();
};

#endif // DATE_H
