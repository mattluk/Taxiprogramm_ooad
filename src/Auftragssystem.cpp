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
vector<Taxi*> Auftragssystem::gibPassendeTaxis(int sitze, DateTime* startZeit, DateTime* endZeit, Adresse* abholpunkt)
{
    vector<Taxi*> freieTaxis = this->schichtplan->gibFreieTaxis(startZeit, endZeit);
    vector<Taxi*> passendeSitze = vector<Taxi*>();
    vector<Taxi*> returnTaxis = vector<Taxi*> ();
    Taxi* currentTaxi;
    Taxi* currentMinTaxi;
    int min;
    int counter = 0;
    int currentI = 0;

    if (freieTaxis.size() == 0) {
        return vector<Taxi*>();
    }

    for (unsigned int i = 0; i < freieTaxis.size(); i++) {
        currentTaxi = freieTaxis.at(i);
        if (currentTaxi->getSitze() >= sitze) {
            passendeSitze.push_back(currentTaxi);
        }
    }

    if (passendeSitze.size() == 0) {
        return vector<Taxi*>();
    }

    while (!(passendeSitze.empty()) && counter != 3) {
        currentMinTaxi = passendeSitze.at(0);
        min = this->karte->getEntfernung(abholpunkt->getKoordinate(), currentMinTaxi->getStandort());
        currentI = 0;
        for (unsigned int i = 0; i < passendeSitze.size(); i++) {
            currentTaxi = passendeSitze.at(i);
            if (currentTaxi->getSitze() >= sitze) {
                int vergleich = this->karte->getEntfernung(abholpunkt->getKoordinate(), currentTaxi->getStandort());
                if (min > vergleich) {
                    min = vergleich;
                    currentMinTaxi = currentTaxi;
                    currentI = i;
                }
            }
        }
        returnTaxis.push_back(currentMinTaxi);
        passendeSitze.erase(passendeSitze.begin() + currentI);
        counter++;
    }


    return returnTaxis;
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

