#include "contact.h"
#include <sstream>

int Contact::getID() const
{
    return ID;
}

void Contact::setID(int value)
{
    ID = value;
}

Contact::Contact()
{

}
std::string Contact::getNom() const
{
    return nom;
}

void Contact::setNom(const std::string &value)
{
    nom = value;
}

std::string Contact::getPrenom() const
{
    return prenom;
}

void Contact::setPrenom(const std::string &value)
{
    prenom = value;
}

std::string Contact::getEntreprise() const
{
    return entreprise;
}

void Contact::setEntreprise(const std::string &value)
{
    entreprise = value;
}

std::string Contact::getMail() const
{
    return mail;
}

void Contact::setMail(const std::string &value)
{
    mail = value;
}

std::string Contact::getNtel() const
{
    return Ntel;
}

void Contact::setNtel(const std::string &value)
{
    Ntel = value;
}

listInteraction & Contact::getInteractions()
{
    return interactions;
}

void Contact::setInteractions(const listInteraction &value)
{
    interactions = value;
}

Date Contact::getDCreation() const
{
    return DCreation;
}

void Contact::setDCreation(const Date &value)
{
    DCreation = value;
}

std::string Contact::getUriPhoto() const
{
    return uriPhoto;
}

void Contact::setUriPhoto(const std::string &value)
{
    uriPhoto = value;
}

bool Contact::operator ==(const Contact & c)
{
    return getNom() == c.getNom() && getPrenom() == c.getPrenom() && getNtel() == c.getNtel();
}

bool Contact::operator <(const Contact & c)
{
    return this->DCreation < c.getDCreation();
}

std::string Contact::toString()
{
    std::ostringstream s;
    s<<this;
    std::string ss = s.str();
    return ss;
}

std::ostream &operator <<(std::ostream & os, const Contact & c)
{
    os<<"Nom/Prenom : "<<c.getNom()<<" "<<c.getPrenom()<<" ; ";
    os<<"Mail : "<<c.getMail()<<" ; ";
    os<<"N°telephone : "<<c.getNtel()<<" ; ";
    os<<"Entreprise : "<<c.getEntreprise();
    return os;
}


