//@(#) Schichtplan.cpp


#include "Schichtplan.h"
//
Schichtplan::Schichtplan(Taxidatenbank *taxidatenbank, Kundendatenbank *kundendatenbank)
{
    this->taxidatenbank = taxidatenbank;
    this->kundendatenbank = kundendatenbank;
}

//
std::vector<Taxi*> Schichtplan::gibFreieTaxis(DateTime* startZeit, DateTime* endZeit)
{
    //TODO: freie Taxis
}

