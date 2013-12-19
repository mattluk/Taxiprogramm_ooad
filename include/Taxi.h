//@(#) Taxi.h

#ifndef TAXI_H_H
#define TAXI_H_H

#include "I_KomSys.h"
#include "Koordinate.h"
#include "DateTime.h"
#include "Auftrag.h"
#include "string"
//
class DateTime;
class Auftrag;

class Taxi
{
	
public:
	//
	void auftragAbschliessen(std::string daten);
	//
	bool getBelegt();
	//
	DateTime* getEndZeit();
	//
	std::string getExtras();			//std hinzugefuegt
	//
	int getId();
	//
	int getSitze();
	//
	Koordinate* getStandort();
	//
	DateTime* getStartZeit();
	//
	void setAuftrag(Auftrag auftrag);
	
private:
	//
	Auftrag * auftraeg;					//schreibfehler
	
	//
	bool belegt;
	
	//
	DateTime* endZeit;
	
	//
	std::string extras;
	
	//
	int id;
	
	//
	int sitze;
	
	//
	DateTime* startZeit;
	
	//
	Koordinate standort;
	
	
};

#endif
