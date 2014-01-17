//@(#) Schichtplan.h

#ifndef SCHICHTPLAN_H_H
#define SCHICHTPLAN_H_H

#include "DateTime.h"
#include "Kundendatenbank.h"
#include "Taxidatenbank.h"
#include <vector>

using namespace std;

//
class Schichtplan
{
	
public:
    //
    Schichtplan(Taxidatenbank* taxidatenbank, Kundendatenbank* kundendatenbank);
	//
    vector<Taxi*> gibFreieTaxis(DateTime* startZeit, DateTime* endZeit);
	
private:
	//
    Taxidatenbank* taxidatenbank;

    //
    Kundendatenbank* kundendatenbank;
	
	
};

#endif
