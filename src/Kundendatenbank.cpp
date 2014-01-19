//@(#) Kundendatenbank.cpp


#include "Kundendatenbank.h"
//
Kundendatenbank::Kundendatenbank()
{
    this->kunden = vector<Kunde*>();
}

//Es wird geprueft ob bereits ein Kunde vorhandne ist, falls ja wird dieser zurueckgegeben
Kunde* Kundendatenbank::getKunde(string vorname, string nachname, string strasse, int plz, string hausnummer)
{
    Kunde* currentKunde;
    for (unsigned int i = 0; i < this->kunden.size(); i++) {
        currentKunde = this->kunden.at(i);
        if (currentKunde->getVorname() == vorname &&
                currentKunde->getNachname() == nachname &&
                currentKunde->getAdresse()->getStrasse() == strasse &&
                currentKunde->getAdresse()->getPlz() == plz &&
                currentKunde->getAdresse()->getHausnummer() == hausnummer) {
            return currentKunde;
        }
    }

    return NULL;
}

//
Kunde* Kundendatenbank::neuerKunde(Adresse* adresse, string vorname, string nachname, int telefonnummer, int handy, string email)
{
    Kunde* kunde = new Kunde (adresse, email, handy, nachname, telefonnummer, vorname, idIndex++);
    this->kunden.push_back(kunde);
    return kunde;
}

//
Kunde* Kundendatenbank::getKunde(int kundenId)
{
    Kunde* currentKunde;
    for (unsigned int i = 0; i < this->kunden.size(); i++) {
        currentKunde = this->kunden.at(i);
        if (currentKunde->getId() == kundenId) {
            return currentKunde;
        }
    }

    return NULL;
}

int Kundendatenbank::idIndex =0;
