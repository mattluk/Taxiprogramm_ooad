//@(#) Menue.h

#ifndef MENUE_H_H
#define MENUE_H_H

#include "Auftragssystem.h"
#include <iostream>
#include <stdlib.h>
#include <Kunde.h>
#include <Schichtplan.h>
#include <Taxi.h>

using namespace std;
//
class Hauptmenue
{
	

public:
	//
    Hauptmenue();
	int starten();
    void taxiAuftragErstellen();
    void kundenErstellung();
    void neuerKunde();
    void freieTaxis();
    void TaxisBestimmen();
	
private:
	//
    Auftragssystem* auftragssystem;
	
};

#endif
