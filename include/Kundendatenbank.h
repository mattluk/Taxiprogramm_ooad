//@(#) Kundendatenbank.h

#ifndef KUNDENDATENBANK_H_H
#define KUNDENDATENBANK_H_H

#include "Kunde.h"
#include "Adresse.h"
#include <string>
#include <vector>

using namespace std;

//
class Kundendatenbank
{
	
public:
    //
    Kundendatenbank();
	//
	Kunde* getKunde(int kundenId);
	//
    Kunde* getKunde(string vorname, string nachname, string strasse, int plz, string hausnummer);
	//
    int neuerKunde(Adresse* adresse, string vorname, string nachname, int telefonnummer, int handy, string email);

    bool istVorhanden(Kunde* kunde);
	
private:
	//
	static int idIndex;
	
	//
    vector<Kunde*> kunden;
	
	
};

#endif
