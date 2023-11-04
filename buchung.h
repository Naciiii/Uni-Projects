#ifndef BUCHUNG_H
#define BUCHUNG_H

#include <string>


class Buchung
{
public:
    Buchung();
    Buchung(std::string nummer, std::string n, std::string v);
    virtual void zeigeDetails() = 0;
protected:
std::string buchungsNummer;
std::string nachname;
std::string vorname;
};


#endif // BUCHUNG_H
