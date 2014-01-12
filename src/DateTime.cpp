//@(#) DateTime.cpp


#include "DateTime.h"
//
DateTime::DateTime(int jahr, int monat, int tag, int stunde, int minuten, int sekunden)
{
    this->jahr = jahr;
    this->monat = monat;
    this->tag = tag;
    this->stunde = stunde;
    this->minuten = minuten;
    this->sekunden = sekunden;
}

//
int DateTime::getTag()
{
    return this->tag;
}

//
int DateTime::getMonat()
{
    return this->monat;
}

//
int DateTime::getJahr()
{
    return this->jahr;
}

//
int DateTime::getStunde()
{
    return this->stunde;
}

//
int DateTime::getMinuten()
{
    return this->minuten;
}

//
int DateTime::getSekunden()
{
    return this->sekunden;
}

//
void DateTime::setTag(int tag)
{
    this->tag = tag;
}

//
void DateTime::setMonat(int monat)
{
    this->monat = monat;
}

//
void DateTime::setJahr(int jahr)
{
    this->jahr = jahr;
}

//
void DateTime::setStunde(int stunde)
{
    this->stunde = stunde;
}

//
void DateTime::setMinuten(int minuten)
{
    this->minuten = minuten;
}

//
void DateTime::setSekunden(int sekunden)
{
    this->sekunden = sekunden;
}

//
void DateTime::setDate(string date)
{
    //TODO: string "date" aufloesen und alle attribute einzeln setzen(Ein format festlegen z.B. dd.mm.yyyy)
}

//
string DateTime::toString()
{
    //TODO: Datum zu string und zurueckgeben
}

