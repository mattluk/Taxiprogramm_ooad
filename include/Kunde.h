//@(#) Kunde.h

#ifndef KUNDE_H_H
#define KUNDE_H_H

#include "Adresse.h"
#include <string>

using namespace std;

//
class Kunde
{
	
public:
    Kunde();
    //
    Kunde(Adresse* adresse, string email, int handy, string nachname, int telefonnummer, string vorname);
    //
    Adresse* getAdresse();
	//
    string getEmail();
	//
	int getHandy();
	//
	int getId();
	//
    string getNachname();
	//
	int getTelefonnummer();
	//
    string getVorname();
	//
    void setAdresse(Adresse* adresse);
	//
    void setEmail(string email);
	//
	void setHandy(int handy);
	//
    void setNachname(string nachname);
	//
	void setTelefonnummer(int telefonnummer);
	//
    void setVorname(string vorname);

    bool isEqual(Kunde* kunde);
	
private:
	//
    Adresse* adresse;
	
	//
    string email;
	
	//
	int handy;
	
	//
	int id;
	
	//
    string nachname;
	
	//
	int telefonnummer;
	
	//
    string vorname;
	
	
};

#endif
