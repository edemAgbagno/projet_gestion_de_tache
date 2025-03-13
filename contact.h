#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include "date.h"
#include <list>
#include "interaction.h"
#include "listinteraction.h"

//nom, prénom, entreprise, mail, téléphone, photo, date de création
class Contact
{
private:
    int ID;
    std::string nom;
    std::string prenom;
    std::string entreprise;
    std::string mail;
    std::string Ntel;
    listInteraction interactions;
    Date DCreation;
    std::string uriPhoto;

public:
    //constructeur
    Contact();
    //accesseur
    int getID() const;
    std::string getNom() const;
    std::string getPrenom() const;
    std::string getEntreprise() const;
    std::string getMail() const;
    std::string getNtel() const;
    listInteraction & getInteractions();
    Date getDCreation() const;
    std::string getUriPhoto() const;

    void setID(int value);
    void setNom(const std::string &value);
    void setPrenom(const std::string &value);
    void setEntreprise(const std::string &value);
    void setMail(const std::string &value);
    void setNtel(const std::string &value);
    void setInteractions(const listInteraction &value);
    void setDCreation(const Date &value);
    void setUriPhoto(const std::string &value);

    //surcharge l'operateur << pour avoir une les info d'un contact
    friend std::ostream &operator <<(std::ostream &, const Contact &);
    //compare deux Contact si ils sont la meme persone
    bool operator == (const  Contact &);
    //compare deux Contact par la date de creation pour utiliser le sort
    bool operator < (const Contact &);
    std::string toString();
};

#endif // CONTACT_H
