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

// DateTime splittet date und time in Substrings
DateTime::DateTime(string date, string time) {
    this->tag = atoi(date.substr(0, 2).c_str());
    this->monat = atoi(date.substr(3, 2).c_str());
    this->jahr = atoi(date.substr(6, 4).c_str());
    this->stunde = atoi(time.substr(0, 2).c_str());
    this->minuten = atoi(time.substr(3, 2).c_str());
    this->sekunden = atoi(time.substr(6, 2).c_str());
}

//das Datum wird in einen String umgewandelt
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
//die Zeit wird in einen String umgewandelt
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

string DateTime::toString() {
    return this->dateToString() + " " + this->timeToString();
}

//
bool DateTime::isEqual(DateTime* dateTime) {
    if (this->jahr != dateTime->getJahr())
        return false;

    if (this->monat != dateTime->getMonat())
        return false;

    if (this->tag != dateTime->getTag())
        return false;

    if (this->stunde != dateTime->getStunde())
        return false;

    if (this->minuten != dateTime->getMinuten())
        return false;

    if (this->sekunden != dateTime->getSekunden())
        return false;

    return true;
}

//
bool DateTime::isAfter(DateTime *dateTime) {
    if (this->jahr > dateTime->getJahr())
        return true;
    else if (this->jahr < dateTime->getJahr())
        return false;

    if (this->monat > dateTime->getMonat())
        return true;
    else if (this->monat < dateTime->getMonat())
        return false;

    if (this->tag > dateTime->getTag())
        return true;
    else if (this->tag < dateTime->getTag())
        return false;

    if (this->stunde > dateTime->getStunde())
        return true;
    else if (this->stunde < dateTime->getStunde())
        return false;

    if (this->minuten > dateTime->getMinuten())
        return true;
    else if (this->minuten < dateTime->getMinuten())
        return false;

    if (this->sekunden > dateTime->getSekunden())
        return true;
    else if (this->sekunden < dateTime->getSekunden())
        return false;

    return false;
}

//
bool DateTime::isBefore(DateTime *dateTime) {
    if (this->isEqual(dateTime))
        return false;
    if (this->isAfter(dateTime))
        return false;

    return true;
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

DateTime* DateTime::addMinuten(int minuten) {
    DateTime* returnDate = new DateTime(this->jahr, this->monat, this->tag, this->stunde, this->minuten, this->sekunden);
    while (returnDate->getMinuten() != 0) {
        returnDate->incMinuten();
        minuten--;
    }
    return returnDate;
}

void DateTime::incHour() {
    this->stunde++;
    if (this->stunde > 23) {
        this->incDay();
        this->stunde = 0;
    }
}

void DateTime::incMinuten() {
    this->minuten++;
    if (this->minuten > 59) {
        this->incHour();
        this->minuten = 0;
    }
}

bool DateTime::istSchaltjahr() {
    if (this->jahr % 400 == 0) {
        return true;
    }
    if ((this->jahr % 4 == 0) && (this->jahr % 100 != 0)) {
        return true;
    }
    return false;
}

void DateTime::incDay() {
    this->tag++;
    if (this->monat == 2 && istSchaltjahr()) {
        if (tag > 29) {
            incMonth();
            tag = 1;
        }
    } else if (this->monat == 2) {
        if (tag > 28) {
            incMonth();
            tag = 1;
        }
    } else if (this->monat == (1 | 3 | 5 | 7 | 8 | 10 | 12)) {
        if (tag > 31) {
            incMonth();
            tag = 1;
        }
    } else {
        if (tag > 30) {
            incMonth();
            tag = 1;
        }
    }
}

void DateTime::incMonth() {
    this->monat++;
    if (this->monat > 12) {
        this->incYear();
        this->monat = 1;
    }
}

void DateTime::incYear() {
    this->jahr++;
}
