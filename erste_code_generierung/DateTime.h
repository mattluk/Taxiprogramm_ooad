//@(#) DateTime.h

#ifndef DATETIME_H_H
#define DATETIME_H_H

#include "Taxi.h"
#include "string"
//
class DateTime
{
	
public:
	//
	int getJahr();
	//
	int getMinuten();
	//
	int getMonat();
	//
	int getSekunden();
	//
	int getStunde();
	//
	int getTag();
	//
	void setDate(std::string date);
	//
	void setJahr(int jahr);
	//
	void setMinuten(int minuten);
	//
	void setMonat(int monat);
	//
	void setSekunden(int sekunden);
	//
	void setStunde(int stunde);
	//
	void setTag(int tag);
	//
	std::string toString();
	
private:
	//
	int jahr;
	
	//
	int minuten;
	
	//
	int monat;
	
	//
	int sekunden;
	
	//
	int stunde;
	
	//
	int tag;
	
	
};

#endif
