#ifndef LISTINTERACTION_H
#define LISTINTERACTION_H
#include <iostream>
#include "interaction.h"
#include <list>


class listInteraction
{
    //class qui gere les list de Interaction
private:
    std::list <Interaction> listInter;

public:
    //constructeur
    listInteraction();
    //destructeur
    ~listInteraction();

    //accesseur
    std::list <Interaction> & getList() ; //retourner une referance est plus pratique

    //retourn une referance interaction precise de la list ,si c'est imposible retourne la premiere interaction
    Interaction & getInteractionById(unsigned );

    void setlist(const std::list <Interaction> &) ;//met aussi en ordre la list par priorité des todo
    //ajout un todo a la list
    void addInteraction(const Interaction &);//met aussi en ordre la list par priorité des todo
    void remouveInteractionById(unsigned);

    //surcharge l'operateur << pour avoir tout les istInteraction de la list afficher du plus anciennement modifier au plus récemment modifié
    friend std::ostream &operator <<(std:: ostream &, listInteraction &);
};

#endif // LISTINTERACTION_H
