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
    Auftrag(Adresse* abholpunkt, DateTime* abholzeit, string anforderungen, int anzahlPersonen, DateTime* berechneteFahrzeit,
            double berechneterFahrpreis, double fahrpreis, Adresse* fahrziel, Kunde* kunde, Taxi* taxi, DateTime* fahrzeit);
	//
	Adresse* getAbholpunkt();
	//
	DateTime* getAbholzeit();
	//
    string getAnforderungen();
	//
	int getAnzahlPersonen();
	//
	DateTime* getBerechneteFahrzeit();
	//
	double getBerechneterFahrpreis();
	//
	double getFahrpreis();
	//
	DateTime* getFahrzeit();
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
	void setBerechneteFahrzeit(DateTime* fahrzeit);
	//
	void setBerechneterFahrpreis(double berechneterFahrpreis);
	//
	void setFahrpreis(double fahrpreis);
	//
	void setFahrzeit(DateTime* fahrzeit);
	//
	void setFahrziel(Adresse* fahrziel);
	//
	void setKunde(Kunde* kunde);
	//
	void setTaxi(Taxi* taxi);
	//
	void setVAnzahlPersonen(int anzahlPersonen);
	
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
	DateTime* berechneteFahrzeit;
	
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
    DateTime* fahrzeit;
};

#endif
