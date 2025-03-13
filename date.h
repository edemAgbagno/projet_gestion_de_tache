#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <ctime>
class Date
{
    //class qui gere les date
private:
    struct tm * d;
    int joure;
    int mois;
    int annee;
public:
    Date();
    //accesseur
    int getJoure() const;
    int getMois() const;
    int getAnnee() const;
    
    /*permet de changer la date
    mieu que d'utiliser des seteur car elle fait des transformation sure les parametre
    on peut avoir une date même en donnant des valeur insensé*/
    void fromDate(const int j,const int m,const int a);

    //verifie si la date est celle d'aujourd'hui
    bool isToday() const;
    
    //surcharge l'operateur << pour sortire une date sous la forme joure/mois/annee
    friend std:: ostream& operator <<(std:: ostream &, const Date &);
    //compare deux date
    bool operator < (const Date &);
    std::string toString();
};

#endif // DATE_H
