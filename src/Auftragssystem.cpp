//@(#) Auftragssystem.cpp


#include "Auftragssystem.h"
//
Auftragssystem::Auftragssystem()
{
    this->karte = new Karte();
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
string Auftragssystem::gibPassendeTaxis(int sitze, DateTime* startZeit, DateTime* endZeit, Adresse* abholpunkt)
{
    vector<Taxi*> freieTaxis = this->schichtplan->gibFreieTaxis(startZeit, endZeit);
    Taxi* tmpTaxi;
    for (unsigned int i = 0; i < freieTaxis.size(); i++) {
        tmpTaxi = freieTaxis.at(i);
        if (tmpTaxi->getSitze() == sitze && tmpTaxi->getStartZeit() == startZeit &&
                tmpTaxi->getEndZeit() == endZeit) {
            freieTaxis.push_back(tmpTaxi);
        }
    }

    return "";

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

