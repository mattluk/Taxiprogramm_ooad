//@(#) Schichtplan.cpp


#include "Schichtplan.h"
//
Schichtplan::Schichtplan(Taxidatenbank *taxidatenbank, Kundendatenbank *kundendatenbank)
{
    this->taxidatenbank = taxidatenbank;
    this->kundendatenbank = kundendatenbank;
}

//
vector<Taxi*> Schichtplan::gibFreieTaxis(DateTime* startZeit, DateTime* endZeit)
{
    //TODO: freie Taxis
    vector <Taxi*> returnTaxis = vector <Taxi*>();
    vector <Taxi*> taxis = this->taxidatenbank->getTaxis();
    Taxi* currentTaxi;
    for (unsigned int i = 0; i < taxis.size(); i++) {
        currentTaxi = taxis.at(i);

    }
    return vector <Taxi*> ();
}

