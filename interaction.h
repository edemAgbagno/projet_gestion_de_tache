#ifndef INTERACTION_H
#define INTERACTION_H
#include <iostream>
#include "date.h"
#include "listtodo.h"
class Interaction
{
private:
    std::string contenu;
    Date dateModif;
    listTodo lt;
public:
    //costructeur
    Interaction();
    Interaction(std::string &,listTodo &);
    //accesseur
    Date getDateModif() const;
    std::string getContenu() const;
    //retourn une reference sur la list pour faciliter le travaill
    listTodo & getListTodo();

    void setContenu(const std::string &);
    void setListTodo(const listTodo &);

    //permet de metre a joure la date de modification
    void updatDate();
    void updatDateTo(const int,const int,const int);

    void addToListTodo(const todo &);
    //compare les date de modification des interaction ,aide pour sort la list
    bool operator < (const Interaction &);
    
    friend std::ostream &operator<<(std::ostream &, Interaction &);
};

#endif // INTERACTION_H
