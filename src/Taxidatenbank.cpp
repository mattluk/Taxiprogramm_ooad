//@(#) Taxidatenbank.cpp


#include "Taxidatenbank.h"
//
Taxidatenbank::Taxidatenbank()
{
    this->taxis = vector<Taxi*>();
}

//
vector<Taxi*> Taxidatenbank::getTaxis()
{
    return this->taxis;
}

//
Taxi* Taxidatenbank::getTaxi(int taxiId)
{
    for (unsigned int i = 0; i < this->taxis.size(); i++) {
        if (this->taxis.at(i)->getId() == taxiId) {
            return this->taxis.at(i);
        }
    }
    return NULL;
}

void Taxidatenbank::addTaxi(string extras, int sitze, Koordinate* standort) {
    Taxi* taxi = new Taxi(extras, sitze, standort, idIndex++);
    this->taxis.push_back(taxi);
}

int Taxidatenbank::idIndex = 0;
