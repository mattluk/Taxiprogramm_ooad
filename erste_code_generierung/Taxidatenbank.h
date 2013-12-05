//@(#) Taxidatenbank.h

#ifndef TAXIDATENBANK_H_H
#define TAXIDATENBANK_H_H

#include "vector"
#include "Taxi.h"

using namespace std;
//
class Taxidatenbank
{
	
public:
	//
	Taxi getTaxi(int taxiId);
	//
	std::vector<Taxi*> getTaxis();
	
private:
	//
	static int idIndex;
	
	//
	std::vector<Taxi*> taxis;
	
	
};

#endif
