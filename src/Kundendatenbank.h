//@(#) Kundendatenbank.h

#ifndef KUNDENDATENBANK_H_H
#define KUNDENDATENBANK_H_H

#include "string"
#include "Kunde.h"
#include "Adresse.h"
//
class Kundendatenbank
{
	
public:
	//
	Kunde* getKunde(int kundenId);
	//
	Kunde getKunde(std::string vorname, std::string nachname, std::string strasse, int plz, std::string hausnummer);
	//
	int neuerKunde(Adresse* adresse, std::string vorname, std::string nachname, int telefonnummer, int handy, std::string email);
	
private:
	//
	static int idIndex;
	
	//
	Kunde kunden;
	
	
};

#endif
