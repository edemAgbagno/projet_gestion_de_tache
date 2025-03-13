#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include "date.h"
#include "todo.h"
#include "listtodo.h"
#include "interaction.h"
#include "listinteraction.h"
#include "contact.h"
#include "listcontact.h"
#include "qsqldata.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QSQLData interfaceSQL ;
    listContact lc;
    interfaceSQL.getListContact(lc);
    std::cout << lc <<std::endl;


/*
    //instansiation
    listTodo l;
    Date d;
    todo t;
    todo v;
    todo k;
    Interaction i1;
    Interaction i2;
    Interaction i3;

    listInteraction lt;

    Contact c1;
    Contact c2;
    Contact c3;

    listContact lc;

    d.fromDate(1,3,2002);

    //remplisage des todo
    t.setAction("hello world");
    t.setDate(2,10,2021);
    v.setAction("hello world");
    v.setDate(15,10,2021);
    k.setAction("hello world");
    k.setDate(1,10,2021);

    //remplisage de listtodo
    l.addTodo(t);
    l.addTodo(v);

    //affectation d'une listtodo a une interaction
    i1.setListTodo(l);
    i2.setListTodo(l);
    //ajout d'un todo a l'interaction
    i1.addToListTodo(k);

    //remplisage du contenue d'une interaction
    i1.setContenu("hello il faut manger");
    i2.setContenu("hello il faut dormire");

    //ajout des interaction a la listInteraction
    lt.addInteraction(i1);
    lt.addInteraction(i2);

    lt.getInteractionById(1).updatDateTo(1,2,2003);
    //modification par accesseur
    lt.getInteractionById(0).getListTodo().getTodoById(2).setDate(1,1,2002);

    //affichage
    std::cout << lt<<std::endl;
    std::cout << lt.getInteractionById(0)<<std::endl;
    std::cout << lt.getInteractionById(1)<<std::endl;

    //creation d'un contact
    c1.setInteractions(lt);
    c1.setNom("Dahmouni");
    c1.setPrenom("Amine");
    c1.setNtel("0758748300");
    c1.setEntreprise("Aramco");
    c1.setMail("a");

    c2 = c1;
    c2.setDCreation(d);
    c2.setMail("b");
    c2.setNom("karim");

    c3 = c1;

    //ajouter un contact a la list
    lc.addContact(c1);
    lc.addContact(c2);
    lc.addContact(c3);

    //lc.remouveContact(c1);
    //afichage de  listcontact et de contact
    std::cout << c1 <<std::endl;
    std::cout << lc <<std::endl;
*/

    w.show();

    return a.exec();
}
