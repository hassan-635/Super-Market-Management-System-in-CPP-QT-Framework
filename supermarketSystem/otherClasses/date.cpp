#include "date.h"
#include <QDate>

Date::Date() : date(0), month(0), year(0)
{}

Date ::Date(int date, int month, int year) : date(date), month(month), year(year)
{}

void Date::setDate(int date, int month, int year)
{
    this-> date = date;
    this -> month =  month;
    this -> year = year;
}

int Date::getDate()
{
    return this -> date;
}

int Date ::getMonth()
{
    return this -> month;
}

int Date ::getYear()
{
    return this -> year;
}

QDate Date ::getFullDate()
{


    QDate _date;
    _date.setDate(this->getYear(), this->getMonth(), this->getDate());

    return _date;
}

