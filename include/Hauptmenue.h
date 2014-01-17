//@(#) Menue.h

#ifndef MENUE_H_H
#define MENUE_H_H

#include "Auftragssystem.h"
#include <iostream>
#include <stdlib.h>
#include <Kunde.h>

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
	
private:
	//
    Auftragssystem* auftragssystem;
	
};

#endif
