//@(#) Taxi.cpp


#include "Taxi.h"
//
Taxi::Taxi(string extras, int sitze, int id)
{
    this->id = id;
    this->extras = extras;
    this->sitze = sitze;
}

//
int Taxi::getSitze()
{
    return this->sitze;
}

//
Koordinate* Taxi::getStandort()
{
    return this->standort;
}

//
string Taxi::getExtras()
{
    return this->extras;
}

//
int Taxi::getId()
{
    return this->id;
}

//
bool Taxi::getBelegt()
{
    return this->belegt;
}

//
DateTime* Taxi::getStartZeit()
{
    return this->startZeit;
}

//
DateTime* Taxi::getEndZeit()
{
    return this->endZeit;
}

//
void Taxi::setAuftrag(Auftrag* auftrag)
{
    this->auftrag = auftrag;
}

//
void Taxi::auftragAbschliessen(string daten)
{
    //TODO: auftrag abschliesen...
}

