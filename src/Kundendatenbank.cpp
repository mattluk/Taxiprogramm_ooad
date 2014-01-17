//@(#) Kundendatenbank.cpp


#include "Kundendatenbank.h"
//
Kundendatenbank::Kundendatenbank()
{

}

//
Kunde Kundendatenbank::getKunde(string vorname, string nachname, string strasse, int plz, string hausnummer)
{
    //TODO: getKunde
      return Kunde(NULL," ", 0,"",0,"");
}

//
int Kundendatenbank::neuerKunde(Adresse* adresse, string vorname, string nachname, int telefonnummer, int handy, string email)
{
    //TODO: neuer kunde
    return 0;
}

//
Kunde* Kundendatenbank::getKunde(int kundenId)
{
    //TODO::getkunde
    return 0;
}

bool Kundendatenbank::istVorhanden(Kunde* kunde)
{
    return false;
}
