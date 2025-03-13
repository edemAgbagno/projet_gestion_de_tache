#include "interaction.h"

Interaction::Interaction()
{

}

Interaction::Interaction(std::string & c, listTodo & l)
{
    contenu = c;
    lt = l;
}

Date Interaction::getDateModif() const
{
    return  dateModif;
}

std::string Interaction::getContenu() const
{
    return contenu;
}

listTodo & Interaction::getListTodo()
{
    return lt;
}

void Interaction::setContenu(const std::string & t)
{
    contenu = t;
    updatDate();
}

void Interaction::setListTodo(const listTodo & l)
{
    lt = l;
    updatDate();
}

void Interaction::updatDate()
{
    Date b;
    this->dateModif = b;
}

void Interaction::updatDateTo(const int j, const int m, const int a)
{
    dateModif.fromDate(j , m , a);
}

void Interaction::addToListTodo(const todo & t)
{
    updatDate();
    lt.addTodo(t);
}

bool Interaction::operator <(const Interaction & d)
{
    return dateModif<d.getDateModif();
}

std::ostream & operator <<(std::ostream & os, Interaction & i)
{
    os<<i.getContenu()<<"\n";
    os<<i.lt;
    return os;
}

