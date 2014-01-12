//@(#) Taxi.h

#ifndef TAXI_H_H
#define TAXI_H_H

#include "I_KomSys.h"
#include "Koordinate.h"
#include "DateTime.h"
#include "Auftrag.h"
#include <string>

using namespace std;

//
class DateTime;
class Auftrag;

class Taxi
{
	
public:
    //
    Taxi(string extras, int sitze, int id);
	//
    void auftragAbschliessen(string daten);
	//
	bool getBelegt();
	//
	DateTime* getEndZeit();
	//
    string getExtras();
	//
	int getId();
	//
	int getSitze();
	//
	Koordinate* getStandort();
	//
	DateTime* getStartZeit();
	//
    void setAuftrag(Auftrag* auftrag);
	
private:
	//
    Auftrag* auftrag;
	
	//
	bool belegt;
	
	//
	DateTime* endZeit;
	
	//
    string extras;
	
	//
	int id;
	
	//
	int sitze;
	
	//
	DateTime* startZeit;
	
	//
    Koordinate* standort;
	
	
};

#endif
