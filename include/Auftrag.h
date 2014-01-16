//@(#) Auftrag.h

#ifndef AUFTRAG_H_H
#define AUFTRAG_H_H

#include "Adresse.h"
#include "DateTime.h"
#include "Kunde.h"
#include "Taxi.h"
#include <string>

using namespace std;

//
class Taxi;
class DateTime;

class Auftrag
{
	
public:
    //
    Auftrag(Adresse* abholpunkt, DateTime* abholzeit, string anforderungen, int anzahlPersonen, DateTime* berechneteEndzeit,
            double berechneterFahrpreis, double fahrpreis, Adresse* fahrziel, Kunde* kunde, Taxi* taxi, DateTime* endzeit);
	//
	Adresse* getAbholpunkt();
	//
	DateTime* getAbholzeit();
	//
    string getAnforderungen();
	//
	int getAnzahlPersonen();
	//
    DateTime* getBerechneteEndzeit();
	//
	double getBerechneterFahrpreis();
	//
	double getFahrpreis();
	//
    DateTime* getEndzeit();
	//
	Adresse* getFahrziel();
	//
	Kunde* getKunde();
	//
	Taxi* getTaxi();
	//
	void setAbholpunkt(Adresse* abholpunkt);
	//
	void setAbholzeit(DateTime* abholzeit);
	//
    void setAnforderungen(string andorderungen);
	//
    void setBerechneteEndzeit(DateTime* endzeit);
	//
	void setBerechneterFahrpreis(double berechneterFahrpreis);
	//
	void setFahrpreis(double fahrpreis);
	//
    void setEndzeit(DateTime* endzeit);
	//
	void setFahrziel(Adresse* fahrziel);
	//
	void setKunde(Kunde* kunde);
	//
	void setTaxi(Taxi* taxi);
	//
    void setAnzahlPersonen(int anzahlPersonen);
	
private:
	//
    Adresse* abholpunkt;
	
	//
	DateTime* abholzeit;
	
	//
    string anforderungen;
	
	//
	int anzahlPersonen;
	
	//
    DateTime* berechneteEndzeit;
	
	//
	double berechneterFahrpreis;
	
	//
	double fahrpreis;
	
	//
    Adresse* fahrziel;
	
	//
    Kunde* kunde;
	
	//
    Taxi* taxi;
	
	//
    DateTime* endzeit;
};

#endif
