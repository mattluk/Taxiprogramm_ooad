//@(#) Kunde.cpp


#include "Kunde.h"
//
int Kunde::getId()
{
	return 0;
}

//
std::string Kunde::getVorname()
{
	return std::string();
}

//
std::string Kunde::getNachname()
{
	return std::string();
}

//
int Kunde::getTelefonnummer()
{
	return 0;
}

//
int Kunde::getHandy()
{
	return 0;
}

//
std::string Kunde::getEmail()
{
	return std::string();
}

//
Adresse Kunde::getAdresse()
{
	return Adresse();
}

//
void Kunde::setVorname(std::string vorname)			//std hat gefehlt
{
	this->vorname=vorname;
}

//
void Kunde::setNachname(std::string nachname)
{
	this->nachname=nachname;
}

//
void Kunde::setTelefonnummer(int telefonnummer)
{
	this->telefonnummer=telefonnummer;
}

//
void Kunde::setHandy(int handy)
{
	this->handy=handy;
}

//
void Kunde::setEmail(std::string email)
{
	this->email=email;
}

//
void Kunde::setAdresse(Adresse adresse)
{
	this->adresse=adresse;
}
