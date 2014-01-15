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
DateTime::DateTime(string date, string time) {
    this->tag = atoi(date.substr(0, 2).c_str());
    this->monat = atoi(date.substr(3, 2).c_str());
    this->jahr = atoi(date.substr(6, 4).c_str());
    this->stunde = atoi(time.substr(0, 2).c_str());
    this->minuten = atoi(time.substr(3, 2).c_str());
    this->sekunden = atoi(time.substr(6, 2).c_str());
}

//
string DateTime::dateToString() {
    stringstream tagS;
    stringstream monatS;
    stringstream jahrS;
    if (this->tag < 10)
        tagS << "0" << this->tag;
    else
        tagS << this->tag;

    if (this->monat << 10)
        monatS << "0" << this->monat;
    else
        monatS << this->monat;

    jahrS << this->jahr;
    return (tagS.str() + "." + monatS.str() + "." + jahrS.str());
}

string DateTime::timeToString() {
    stringstream stundeS;
    stringstream minutenS;
    stringstream sekundenS;

    if (this->stunde < 10)
        stundeS << "0" << this->stunde;
    else
        stundeS << this->stunde;

    if (this->minuten < 10)
        minutenS << "0" << this->minuten;
    else
        minutenS << this->minuten;

    if (this->sekunden < 10)
        sekundenS << "0" << this->sekunden;
    else
        sekundenS << this->sekunden;

    return (stundeS.str() + ":" + minutenS.str() + ":" + sekundenS.str());
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

