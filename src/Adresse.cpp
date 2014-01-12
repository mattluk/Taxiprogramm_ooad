//@(#) Adresse.cpp


#include "Adresse.h"
//
Adresse::Adresse(string strasse, string hausnummer, int plz, string stadt, Koordinate* koordinate)
{
    this->strasse = strasse;
    this->hausnummer = hausnummer;
    this->plz = plz;
    this->stadt = stadt;
    this->koordinate = koordinate;
}

//
Koordinate* Adresse::getKoordinate()
{
    return this->koordinate;
}

//
string Adresse::getStadt()
{
    return this->stadt;
}

//
int Adresse::getPlz()
{
    return this->plz;
}

//
string Adresse::getStrasse()
{
    return this->strasse;
}

//
string Adresse::getHausnummer()
{
    return this->hausnummer;
}

//
void Adresse::setStadt(string stadt)
{
	this->stadt=stadt;
}

//
void Adresse::setPlz(int plz)
{
	this->plz=plz;
}

//
void Adresse::setStrasse(string strasse)
{
	this->strasse=strasse;
}

//
void Adresse::setHausnummer(string hausnummer)
{
	this->hausnummer=hausnummer;
}

//
void Adresse::setKoordinate(Koordinate* koordinate)
{
	this->koordinate=koordinate;
}

