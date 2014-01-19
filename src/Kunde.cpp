//@(#) Kunde.cpp


#include "Kunde.h"
//Konstruktor wird aufgerufen
Kunde::Kunde(Adresse *adresse, string email, int handy, string nachname, int telefonnummer, string vorname,int id)
{
    this->adresse = adresse;
    this->email = email;
    this->handy = handy;
    this->nachname = nachname;
    this->telefonnummer = telefonnummer;
    this->vorname = vorname;
    this->id = id;
}
//
int Kunde::getId()
{
    return this->id;
}

//
string Kunde::getVorname()
{
    return this->vorname;
}

//
string Kunde::getNachname()
{
    return this->nachname;
}

//
int Kunde::getTelefonnummer()
{
    return this->telefonnummer;
}

//
int Kunde::getHandy()
{
    return this->handy;
}

//
string Kunde::getEmail()
{
    return this->email;
}

//
Adresse* Kunde::getAdresse()
{
    return this->adresse;
}

//
void Kunde::setVorname(string vorname)
{
	this->vorname=vorname;
}

//
void Kunde::setNachname(string nachname)
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
void Kunde::setEmail(string email)
{
	this->email=email;
}

//
void Kunde::setAdresse(Adresse* adresse)
{
	this->adresse=adresse;
}

