#include "listcontact.h"
#include <iterator>

listContact::listContact()
{

}

listContact::~listContact()
{
    lContact.clear();
}

std::list<Contact>& listContact::getList()
{
    return lContact;
}

void listContact::setList(const std::list<Contact> &value)
{
    lContact = value;
    lContact.sort();
}

Contact & listContact::getContactById(unsigned k)
{
    lContact.sort();
    auto i = lContact.begin();
    if(k<lContact.size())
    {

        for (unsigned j=0; j<k && i!=lContact.end();j++)
        {
            i++;
        }
        return *i;
    }
    return *i;
}

void listContact::addContact(const Contact & c)
{
    lContact.push_back(c);
    lContact.sort();
}

void listContact::remouveContact(const Contact & c)
{
    unsigned k = 0;
    for (auto i = lContact.begin();i != lContact.end();)
    {
        if(*i == c)
        {
            lContact.erase(i);
            i = lContact.begin();
            std::advance(i,k);
            k--;
        }
        else
        {
           ++i;
        }
        k++;
    }
}

std::ostream & operator <<(std::ostream & os, listContact & lc)
{
    lc.lContact.sort();
    int j =0;
    for (auto i = lc.lContact.begin(); i!= lc.lContact.end();i++) {
        os<<j<<") créer le " <<(*i).getDCreation();
        os<<" ;; "<<*i;
        os<<" ;; avec "<<(*i).getInteractions().getList().size()<< " interaction\n";
        j++;
    }
    return os;
}


