//@(#) Auftragssystem.h

#ifndef AUFTRAGSSYSTEM_H_H
#define AUFTRAGSSYSTEM_H_H

#include "Taxi.h"
#include "DateTime.h"
#include "Adresse.h"
#include "Auftrag.h"
#include "Schichtplan.h"
#include "Status.h"
#include "Kundendatenbank.h"
#include "Taxidatenbank.h"
#include "Karte.h"
#include <string>
#include <vector>
#include <sstream>

using namespace std;

//
class Auftragssystem
{
	
public:
    //
    Auftragssystem();
	//
    string alleAuftraegeToString();
	//
    vector<Taxi *> gibPassendeTaxis(int sitze, DateTime* startZeit, Adresse* abholpunkt, Adresse *ziel);
	//
    Kunde* kundeVorhanden(string vorname, string nachname, string strasse, int plz, string hausnummer);
	//
    void neuerAuftrag(int kundenId, int taxiId, int anzahlPersonen, string anforderungen, Adresse* fahrziel, Adresse* abholpunkt, DateTime* abholzeit);
	//
    void neuerKunde(Adresse* adresse, string vorname, string nachname, int telefonnummer, int handy, string email);
    //
    Taxidatenbank* getTaxidatenbank();
    //
    Kundendatenbank* getKundendatenbank();
	
private:
	//
    vector<Auftrag*> auftraege;
	
	//
    Schichtplan* schichtplan;
	
	//
    Taxidatenbank* taxidatenbank;
	
	//
    Kundendatenbank* kundendatenbank;

    //
    Karte* karte;

    //
    static int auftragIdIndex;
};

#endif
