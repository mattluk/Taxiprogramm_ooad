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
    string gibPassendeTaxis(int sitze, DateTime* startZeit, DateTime* endZeit, Adresse* abholpunkt);
	//
    string kundeVorhanden(string vorname, string nachname, string strasse, string hausnummer);
	//
    void neuerAuftrag(int kundenId, int taxiId, int anzahlPersonen, string anforderungen, Adresse* fahrziel, Adresse* abholpunkt, DateTime* abholzeit);
	//
    int neuerKunde(Adresse* adresse, string vorname, string nachname, int telefonnummer, int handy, string email);
	
private:
	//
    vector<Auftrag*> auftraege;
	
	//
    Schichtplan* schichtplan;
	
	//
	Status status;
	
	//
    Taxidatenbank* taxidatenbank;
	
	//
	Kundendatenbank kundendatenbank;

    //
    Karte* karte;
};

#endif
