#include "todo.h"
#include <iostream>
#include "date.h"
todo::todo()
{

}

std::string todo::getAction() const
{
    return this->action;
}

Date todo::getDate() const
{
    return this->d;
}

void todo::setAction(const std::string & r)
{
    this->action = r;
}

void todo::setDate(const int & j, const int & m, const int & a)
{
    this->d.fromDate(j,m,a);
}

void todo::setDate(const Date & b)
{
    this->d = b;
}

bool todo::operator <(const todo & t)
{
    return this->d<t.getDate();
}

std::ostream & operator<<(std::ostream & os, const todo & t)
{
    os<< "@todo "<<t.getAction();
    if(t.getDate().isToday())
    {
        os<< " @date"<<" aujourd'hui";
    }
    else
    {
        os<< " @date "<<t.getDate();
    }
    return os;
}
