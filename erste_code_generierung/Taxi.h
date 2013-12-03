//@(#) Taxi.h

#ifndef TAXI_H_H
#define TAXI_H_H

#include "I_KomSys.h"
#include "Koordinate.h"
#include "DateTime.h"
#include "Auftrag.h"
#include "string"
//
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
	::string getExtras();
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
	Auftrag * auftraeg;
	
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
