#include "date.h"
#include <ctime>
#include <sstream>
Date::Date()
{
    time_t n = time(0);
    this->d = localtime(&n);
    joure = d->tm_mday;
    mois = d->tm_mon+1;
    annee = d->tm_year+1900;
}

int Date::getJoure() const
{
    return joure;
}

int Date::getMois() const
{
    return mois;
}

int Date::getAnnee() const
{
    return annee;
}

void Date::fromDate(const int j, const int m, const int a)
{
    time_t nt;
    struct tm nd;
    nd.tm_gmtoff=0;
    nd.tm_hour=1;
    nd.tm_isdst = 0;
    nd.tm_sec = 0;
    nd.tm_min = 0;
    nd.tm_mday = j;
    nd.tm_mon = m - 1;
    nd.tm_year = a - 1900;
    nt = mktime(&nd);
    this->d = localtime(&nt);
    joure = d->tm_mday;
    mois = d->tm_mon+1;
    annee = d->tm_year+1900;
}

bool Date::isToday() const
{
    Date dt;
    return (getJoure() == dt.getJoure() && getMois() == dt.getMois() && getAnnee() == dt.getAnnee());
}

bool Date::operator <(const Date & d)
{
    if(annee<d.getAnnee())
        return true;
    else if (annee == d.getAnnee()) {
        if (mois<d.getMois())
        {
            return true;
        }
        else if (mois == d.getMois()) {
            if (joure<d.joure) {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }

    }
    else
    {
        return false;
    }

}

std::string Date::toString()
{
    std::ostringstream s;
    s<<this;
    std::string ss = s.str();
    return ss;

}

std:: ostream& operator <<(std:: ostream & os, const Date & d)
{
    os<< d.getJoure()<<"/"<<d.getMois()<<"/"<<d.getAnnee();
    return os;
}
