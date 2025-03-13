#include "listinteraction.h"
#include <iostream>
#include "interaction.h"
#include <list>

listInteraction::listInteraction()
{

}

listInteraction::~listInteraction()
{
    listInter.clear();
}

std::list<Interaction> & listInteraction::getList()
{
    return listInter;
}

Interaction & listInteraction::getInteractionById(unsigned k)
{

    listInter.sort();
    auto i = listInter.begin();
    if(k<listInter.size())
    {

        for (unsigned j=0; j<k && i!=listInter.end();j++)
        {
            i++;
        }
        return *i;
    }
    return *i;
}

void listInteraction::setlist(const std::list<Interaction> & l)
{
    listInter = l;
    listInter.sort();
}

void listInteraction::addInteraction(const Interaction & i)
{
    listInter.push_back(i);
    listInter.sort();
}

void listInteraction::remouveInteractionById(unsigned k)
{
    auto i = listInter.begin();
    for (unsigned j=0; j<k && i!=listInter.end();j++)
    {
        i++;
    }
    this->listInter.erase(i);

}

std::ostream &operator <<(std::ostream & os, listInteraction & li)
{
    li.listInter.sort();
    int j =0;
    for (auto i = li.listInter.begin(); i!= li.listInter.end();i++) {
        os<<j<<") dernier modification le " <<(*i).getDateModif();
        os<<" ;; interaction : ";
        os<<(*i).getContenu();
        os<<";; avec "<<(*i).getListTodo().getList().size()<<" @todo\n";
        j++;
    }
    return os;
}
