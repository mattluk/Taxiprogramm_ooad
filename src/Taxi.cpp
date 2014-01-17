//@(#) Taxi.cpp


#include "Taxi.h"
//
Taxi::Taxi(string extras, int sitze, Koordinate *standort, int id)
{
    this->id = id;
    this->extras = extras;
    this->sitze = sitze;
    this->auftraege = vector<Auftrag*>();
    this->standort = standort;
}

//
bool Taxi::isEqual(Taxi *taxi) {
    if (this->id != taxi->getId())
        return false;

    return true;
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
void Taxi::addAuftrag(Auftrag* auftrag)
{
    this->auftraege.push_back(auftrag);
}

//
void Taxi::auftragAbschliessen(string daten)
{
    //TODO: auftrag abschliesen...
}

//
vector<Auftrag*> Taxi::getAuftraege() {
    return this->auftraege;
}
