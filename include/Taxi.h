//@(#) Taxi.h

#ifndef TAXI_H_H
#define TAXI_H_H

#include "I_KomSys.h"
#include "Koordinate.h"
#include "DateTime.h"
#include "Auftrag.h"
#include <string>
#include <vector>

using namespace std;

//
class DateTime;
class Auftrag;

class Taxi
{
	
public:
    //
    Taxi(string extras, int sitze, Koordinate* standort, int id);
	//
    void auftragAbschliessen(string daten);
	//
    string getExtras();
	//
	int getId();
	//
	int getSitze();
	//
    Koordinate* getStandort();
    //
    void setStandort(Koordinate* koordinate);
	//
    void addAuftrag(Auftrag* auftrag);
    //
    vector<Auftrag*>getAuftraege();
    //
    bool isEqual(Taxi* taxi);
	
private:
	//
    vector<Auftrag*> auftraege;
	
	//
    string extras;
	
	//
	int id;
	
	//
    int sitze;
	
	//
    Koordinate* standort;
	
	
};

#endif
