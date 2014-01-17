//@(#) Adresse.h

#ifndef ADRESSE_H_H
#define ADRESSE_H_H

#include <string>
#include "Koordinate.h"

using namespace std;

//
class Adresse
{
	
public:
    //
    Adresse(string strasse, string hausnummer, int plz, string stadt);
    //
    Adresse(string strasse, string hausnummer, int plz, string stadt, Koordinate* koordinate);
	//
    string getHausnummer();
	//
    Koordinate* getKoordinate();
	//
	int getPlz();
	//
    string getStadt();
	//
    string getStrasse();
	//
    void setHausnummer(string hausnummer);
	//
    void setKoordinate(Koordinate* koordinate);
	//
	void setPlz(int plz);
	//
    void setStadt(string stadt);
	//
    void setStrasse(string strasse);

    bool isEqual(Adresse* adresse);
	
private:
	//
    string hausnummer;
	
	//
	int plz;
	
	//
    string stadt;
	
	//
    string strasse;
	
	//
    Koordinate* koordinate;
	
	
};

#endif
