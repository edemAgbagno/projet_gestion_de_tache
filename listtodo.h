#ifndef LISTTODO_H
#define LISTTODO_H

#include <iostream>
#include "todo.h"
#include <list>


class listTodo
{
private:
    //class qui gere les list de todo
    std::list <todo>  ltodos;

public:
    //constructeur
    listTodo();
    //destructeur
    ~listTodo();
    //accesseur
    std::list <todo> & getList() ;
    //retourn une referance de todo de la list ,si c'est imposible retourne le premier todo
    todo & getTodoById(unsigned );

    void setlist(const std::list <todo> &) ;//met aussi en ordre la list par priorité des todo
    //ajout un todo a la list
    void addTodo(const todo &);//met aussi en ordre la list par priorité des todo
    void remouveTodoById(unsigned);

    //surcharge l'operateur << pour avoir tout les todo de la list afficher par ordre de prioriter
    friend std::ostream & operator <<(std:: ostream &, listTodo &);
};



#endif // LISTTODO_H
