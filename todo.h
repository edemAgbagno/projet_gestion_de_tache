#ifndef TODO_H
#define TODO_H
#include <iostream>
#include "date.h"

class todo
{
    //class qui gere les tag @todo
private:
    std::string action;
    Date d;
public:
    //constructeur
    todo();

    //accesseur
    std::string getAction() const;
    Date getDate() const;

    void setAction(const std::string &);
    void setDate(const int &,const int &,const int &); //seteur qui prend trois parametre et utilise date::fromDate pour cree une date
    void setDate(const Date &);//seteur qui prend directement une date

    //surcharge l'operateur << pour avoir une action suivie d'une date
    friend std:: ostream& operator <<(std:: ostream &, const todo &);
    //compare l'urgence des todo,aide pour sort la list
    bool operator < (const todo &);

};

#endif // TODO_H
