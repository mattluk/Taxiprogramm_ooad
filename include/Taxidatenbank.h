//@(#) Taxidatenbank.h

#ifndef TAXIDATENBANK_H_H
#define TAXIDATENBANK_H_H

#include "Taxi.h"
#include <vector>

using namespace std;
//
class Taxidatenbank
{
	
public:
    //
    Taxidatenbank();
	//
    Taxi* getTaxi(int taxiId);
	//
    vector<Taxi*> getTaxis();
    //
    void addTaxi(string extras, int sitze, Koordinate* standort);

private:
	//
    static int idIndex;
	
	//
    vector<Taxi*> taxis;
	
};

#endif
