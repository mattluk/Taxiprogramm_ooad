//@(#) Auftragssystem.h

#ifndef AUFTRAGSSYSTEM_H_H
#define AUFTRAGSSYSTEM_H_H

#include "Taxi.h"
#include "DateTime.h"
#include "string"
#include "Adresse.h"
#include "Auftrag.h"
#include "Schichtplan.h"
#include "Status.h"
#include "Kundendatenbank.h"
#include "Taxidatenbank.h"
//
class Auftragssystem
{
	
public:
	//
	std::string alleAuftraegeToString();
	//
	std::string gibPassendeTaxis(int sitze, DateTime* startZeit, DateTime* endZeit, Adresse* abholpunkt);
	//
	std::string kundeVorhanden(std::string vorname, std::string nachname, std::string strasse, std::string hausnummer);
	//
	void neuerAuftrag(int kundenId, int taxiId, int anzahlPersonen, std::string anforderungen, std::string fahrziel, std::string abholpunkt, std::string abholzeit);
	//
	int neuerKunde(Adresse* adresse, std::string vorname, std::string nachname, int telefonnummer, int handy, std::string email);
	
private:
	//
	std::vector<Auftrag*>* auftraege;
	
	//
	Schichtplan schichtplan;
	
	//
	Status status;
	
	//
	Taxidatenbank * taxidatenbank;
	
	//
	Kundendatenbank kundendatenbank;
	
	
};

#endif
