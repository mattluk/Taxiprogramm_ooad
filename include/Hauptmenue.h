//@(#) Menue.h

#ifndef MENUE_H_H
#define MENUE_H_H

#include "Auftragssystem.h"
#include <iostream>

using namespace std;
//
class Hauptmenue
{
	

public:
	//
    Hauptmenue();
	int starten();
    void taxiAuftragErstellen();
	
private:
	//
    Auftragssystem* auftragssystem;
	
	
};

#endif
