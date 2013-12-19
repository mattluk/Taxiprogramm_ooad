//@(#) Adresse.cpp


#include "Adresse.h"
//
Koordinate Adresse::getKoordinate()
{
	return Koordinate();
}

//
std::string Adresse::getStadt()
{
	return std::string();
}

//
int Adresse::getPlz()
{
	return 0;
}

//
std::string Adresse::getStrasse()
{
	return std::string();
}

//
std::string Adresse::getHausnummer()
{
	return std::string();
}

//
void Adresse::setStadt(std::string stadt)
{
	this->stadt=stadt;
}

//
void Adresse::setPlz(int plz)
{
	this->plz=plz;
}

//
void Adresse::setStrasse(std::string strasse)
{
	this->strasse=strasse;
}

//
void Adresse::setHausnummer(std::string hausnummer)
{
	this->hausnummer=hausnummer;
}

//
void Adresse::setKoordinate(Koordinate koordinate)
{
	this->koordinate=koordinate;
}

