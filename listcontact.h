#ifndef LISTCONTACT_H
#define LISTCONTACT_H
#include "contact.h"

class listContact
{
    //class qui gere les list de Contact
private:

    std::list <Contact>  lContact;

public:
    //constructeur
    listContact();
    //destructeur
    ~listContact();

    //accesseur
    std::list<Contact> & getList(); //retourner une referance est plus pratique
    void setList(const std::list<Contact> &value); //met aussi en ordre la list par priorité des todo

    //retourn une referance interaction precise de la list ,si c'est imposible retourne la premiere interaction
    Contact & getContactById(unsigned );


    //ajout un todo a la list
    void addContact(const Contact &);//met aussi en ordre la list par priorité des todo
    void remouveContact(const Contact &);

    //surcharge l'operateur << pour avoir tout les istInteraction de la list afficher du plus anciennement modifier au plus récemment modifié
    friend std::ostream &operator <<(std:: ostream &, listContact &);
};

#endif // LISTCONTACT_H
