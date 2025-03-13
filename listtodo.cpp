#include "listtodo.h"
#include <iostream>
#include <list>
listTodo::listTodo()
{

}

listTodo::~listTodo()
{
    ltodos.clear();
}

std::list<todo> & listTodo::getList()
{
    return ltodos;
}

todo &listTodo::getTodoById(unsigned k)
{
    ltodos.sort();
    auto i = ltodos.begin();
    if(k<ltodos.size())
    {

        for (unsigned j=0; j<k && i!=ltodos.end();j++)
        {
            i++;
        }
        return *i;
    }
    return *i;
}


void listTodo::setlist(const std::list<todo> & l)
{
    this->ltodos = l;
    ltodos.sort();
}

void listTodo::addTodo(const todo & t)
{
    ltodos.push_back(t);
    ltodos.sort();
}

void listTodo::remouveTodoById(unsigned k)
{
    auto i = ltodos.begin();
    for (unsigned j=0; j<k && i!=ltodos.end();j++)
    {
        i++;
    }
    this->ltodos.erase(i);
}

std::ostream & operator <<(std::ostream & os, listTodo & l)
{
    listTodo lt = l;
    lt.ltodos.sort();
    for (auto i = lt.ltodos.begin(); i!= lt.ltodos.end();i++) {
        os<<*i<<"\n";
    }
    return os;
}

