//@(#) Schichtplan.h

#ifndef SCHICHTPLAN_H_H
#define SCHICHTPLAN_H_H

#include "DateTime.h"
#include "vector"
#include "Kundendatenbank.h"
#include "Taxidatenbank.h"
//
class Schichtplan
{
	
public:
	//
	std::vector<Taxi*> gibFreieTaxis(DateTime* startZeit, DateTime* endZeit);
	//
	void setKundendatenbank(Kundendatenbank* kundendatenbank);
	
private:
	//
	std::vector<Taxi*> belegteTaxis;
	
	//
	Taxidatenbank * taxidatenbank;
	
	
};

#endif
