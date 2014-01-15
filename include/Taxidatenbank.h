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

private:
	//
    static int idIndex;
	
	//
    vector<Taxi*> taxis;
	
};

#endif
