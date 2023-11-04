#include "hotelbuchung.h"
#include "iostream"

using namespace  std;

HotelBuchung::HotelBuchung(std::string buchungsNummer,std::string nachname,
    std::string vorname ,std::string h, QDate* an, QDate* ab, char z)
    : Buchung(buchungsNummer, nachname, vorname)
{
    hotelName = h;
    ankunft = an;
    abreise = ab;
    zimmerTyp = z;
}

HotelBuchung::~HotelBuchung()
{
    delete ankunft;
    delete abreise;
}

void HotelBuchung::zeigeDetails()
{
}
