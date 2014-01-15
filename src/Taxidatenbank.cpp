//@(#) Taxidatenbank.cpp


#include "Taxidatenbank.h"
//
Taxidatenbank::Taxidatenbank()
{
    Taxi* taxi = new Taxi("Kindersitze", 7, idIndex++);
    this->taxis.push_back(taxi);

    taxi = new Taxi("Hunde", 5, idIndex++);
    this->taxis.push_back(taxi);

    taxi = new Taxi("Behinderte", 3, idIndex++);
    this->taxis.push_back(taxi);

    taxi = new Taxi("", 4, idIndex++);
    this->taxis.push_back(taxi);
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

int Taxidatenbank::idIndex = 0;
