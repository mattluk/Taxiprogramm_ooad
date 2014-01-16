//@(#) Auftragssystem.cpp


#include "Auftragssystem.h"
//
Auftragssystem::Auftragssystem()
{
    this->karte = new Karte();
    this->taxidatenbank = new Taxidatenbank();
    this->kundendatenbank = new Kundendatenbank();
    this->schichtplan = new Schichtplan(this->taxidatenbank, this->kundendatenbank);
}

//
Taxidatenbank* Auftragssystem::getTaxidatenbank() {
    return this->taxidatenbank;
}

//
void Auftragssystem::neuerAuftrag(int kundenId, int taxiId, int anzahlPersonen, string anforderungen,
                                  Adresse *fahrziel, Adresse *abholpunkt, DateTime *abholzeit)
{
    //TODO: Neuer auftrag
}

//
string Auftragssystem::alleAuftraegeToString()
{
    //TODO: Auftrage in ein string packen und zurueck geben
    return "";
}

//
Taxi* Auftragssystem::gibPassendesTaxi(int sitze, DateTime* startZeit, DateTime* endZeit, Adresse* abholpunkt)
{
    vector<Taxi*> freieTaxis = this->schichtplan->gibFreieTaxis(startZeit, endZeit);
    if (freieTaxis.size() == 0) {
        return NULL;
    }

    Taxi* currentTaxi;
    Taxi* currentMinTaxi = freieTaxis.at(0);
    int min = this->karte->getEntfernung(abholpunkt->getKoordinate(), currentMinTaxi->getStandort());
    for (unsigned int i = 0; i < freieTaxis.size(); i++) {
        currentTaxi = freieTaxis.at(i);
        if (currentTaxi->getSitze() >= sitze) {
            if (min > this->karte->getEntfernung(abholpunkt->getKoordinate(), currentTaxi->getStandort())) {
                min = this->karte->getEntfernung(abholpunkt->getKoordinate(), currentTaxi->getStandort());
                currentMinTaxi = currentTaxi;
            }
        }
    }

    return currentMinTaxi;
}

//
string Auftragssystem::kundeVorhanden(string vorname, string nachname, string strasse, string hausnummer)
{
    //TODO: Ist der Kunde vorhanden
    return "";
}

//
int Auftragssystem::neuerKunde(Adresse* adresse, string vorname, string nachname, int telefonnummer, int handy, string email)
{
    //TODO: Neuen Kunden anlegen
    return 0;
}

