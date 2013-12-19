//@(#) TaxiKomSys.h

#ifndef TAXIKOMSYS_H_H
#define TAXIKOMSYS_H_H

#include "I_KomSys.h"
#include "string"
#include "ePayment.h"

using namespace std;
//
class TaxiKomSys: I_KomSys
{
	
public:
	//
	void auftragSetzen(std::string daten);
	//
	std::string getStandort();
	
private:
	//
	std::string abholpunkt;
	
	//
	std::string abholzeit;
	
	//
	int aktiverKundeID;
	
	//
	std::string anforderungen;
	
	//
	int anzahlPersonen;
	
	//
	double fahrpreis;
	
	//
	std::string fahrzeit;
	
	//
	std::string fahrziel;
	
	//
	std::string kundenName;
	
	//
	ePayment epayment;
	
	
};

#endif
