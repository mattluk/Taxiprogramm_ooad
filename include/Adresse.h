//@(#) Adresse.h

#ifndef ADRESSE_H_H
#define ADRESSE_H_H

#include "string"
#include "Koordinate.h"
//
class Adresse
{
	
public:
	//
	std::string getHausnummer();
	//
	Koordinate getKoordinate();
	//
	int getPlz();
	//
	std::string getStadt();
	//
	std::string getStrasse();
	//
	void setHausnummer(std::string hausnummer);
	//
	void setKoordinate(Koordinate koordinate);
	//
	void setPlz(int plz);
	//
	void setStadt(std::string stadt);
	//
	void setStrasse(std::string strasse);
	
private:
	//
	std::string hausnummer;
	
	//
	int plz;
	
	//
	std::string stadt;
	
	//
	std::string strasse;
	
	//
	Koordinate koordinate;
	
	
};

#endif
