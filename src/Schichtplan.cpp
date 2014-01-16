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
    vector <Taxi*> returnTaxis = vector <Taxi*>();
    vector <Auftrag*> currentAuftraege = vector <Auftrag*>();
    vector <Taxi*> taxis = this->taxidatenbank->getTaxis();
    Auftrag* currentAuftrag;
    bool toAdd;
    Taxi* currentTaxi;
    for (unsigned int i = 0; i < taxis.size(); i++) {
        currentTaxi = taxis.at(i);
        currentAuftraege = currentTaxi->getAuftraege();
        toAdd = true;
        for (unsigned int i = 0; i < currentAuftraege.size(); i++) {
            currentAuftrag = currentAuftraege.at(i);
            if (startZeit->isBefore(currentAuftrag->getAbholzeit()) && endZeit->isAfter(currentAuftrag->getAbholzeit())) {
                toAdd = false;
            } else if (startZeit->isBefore(currentAuftrag->getBerechneteEndzeit())) {
                toAdd = false;
            }
        }
        if (toAdd == true) {
            returnTaxis.push_back(currentTaxi);
        }
    }
    return returnTaxis;
}

