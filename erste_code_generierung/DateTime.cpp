//@(#) DateTime.cpp


#include "DateTime.h"
//
int DateTime::getTag()
{
	return 0;
}

//
int DateTime::getMonat()
{
	return 0;
}

//
int DateTime::getJahr()
{
	return 0;
}

//
int DateTime::getStunde()
{
	return 0;
}

//
int DateTime::getMinuten()
{
	return 0;
}

//
int DateTime::getSekunden()
{
	return 0;
}

//
void DateTime::setTag(int tag)
{
	this->tag=tag;
}

//
void DateTime::setMonat(int monat)
{
	this->monat=monat;
}

//
void DateTime::setJahr(int jahr)
{
	this->jahr=jahr;
}

//
void DateTime::setStunde(int stunde)
{
	this->stunde=stunde;
}

//
void DateTime::setMinuten(int minuten)
{
	this->minuten=minuten;
}

//
void DateTime::setSekunden(int sekunden)
{
	this->sekunden=sekunden;
}

//
void DateTime::setDate(std::string date)
{
	//this->setDate=date;  so funktioniert es!
	//this->date=date;	   so nicht!
}

//
std::string DateTime::toString()
{
	return std::string();
}

