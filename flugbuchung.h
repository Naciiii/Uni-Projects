#ifndef FLUGBUCHUNG_H
#define FLUGBUCHUNG_H
#include "buchung.h"
#include <QDate>

class FlugBuchung: public Buchung
{
public:
    FlugBuchung();
    void zeigeDetails() override;
private:
std::string fluglinie;
std::string sitzPlatz;
std::string von;
std::string nach;
QDate* datum;


};

#endif // FLUGBUCHUNG_H
