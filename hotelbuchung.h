#ifndef HOTELBUCHUNG_H
#define HOTELBUCHUNG_H
#include "buchung.h"
#include <QDate>

class HotelBuchung: public Buchung
{
public:
    HotelBuchung(std::string buchungsNummer,std::string nachname,
    std::string vorname ,std::string h, QDate* an, QDate* ab, char z);
    ~HotelBuchung();
    void zeigeDetails() override;
private:
std::string hotelName;
QDate* ankunft;
QDate* abreise;
char zimmerTyp;
};

#endif // HOTELBUCHUNG_H
