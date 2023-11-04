#ifndef REISEBUERO_H
#define REISEBUERO_H
#include "buchung.h"
#include "vector"
class Reisebuero
{
public:
    Reisebuero();
    void benutzerDialog();
private:
std::vector <Buchung*> buchungen;
};

#endif // REISEBUERO_H
