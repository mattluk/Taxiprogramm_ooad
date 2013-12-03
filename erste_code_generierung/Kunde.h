//@(#) Kunde.h

#ifndef KUNDE_H_H
#define KUNDE_H_H

#include "string"
#include "Adresse.h"
//
class Kunde
{
	
public:
	//
	Adresse getAdresse();
	//
	std::string getEmail();
	//
	int getHandy();
	//
	int getId();
	//
	std::string getNachname();
	//
	int getTelefonnummer();
	//
	std::string getVorname();
	//
	void setAdresse(Adresse adresse);
	//
	void setEmail(std::string email);
	//
	void setHandy(int handy);
	//
	void setNachname(std::string nachname);
	//
	void setTelefonnummer(int telefonnummer);
	//
	void setVorname(std::string vorname);             //std hat gefehlt
	
private:
	//
	Adresse adresse;
	
	//
	std::string email;
	
	//
	int handy;
	
	//
	int id;
	
	//
	std::string nachname;
	
	//
	int telefonnummer;
	
	//
	std::string vorname;
	
	
};

#endif
