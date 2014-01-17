//@(#) DateTime.h

#ifndef DATETIME_H_H
#define DATETIME_H_H

#include "Taxi.h"
#include <string>
#include <stdlib.h>
#include <iostream>
#include <sstream>

using namespace std;

//
class DateTime
{
	
public:
    //
    DateTime(int jahr, int monat, int tag, int stunde, int minuten, int sekunden);
    //
    DateTime(string date, string time);
	//
    string dateToString();
    //
    string timeToString();
    //
    string toString();
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
    bool isEqual(DateTime* dateTime);
    //
    bool isAfter(DateTime* dateTime);
    //
    bool isBefore(DateTime* dateTime);
    //
    DateTime* addMinuten(int minuten);
    //
    void incDay();
    //
    void incMonth();
    //
    void incYear();
    //
    void incHour();
    //
    void incMinuten();
    //
    bool istSchaltjahr();

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
