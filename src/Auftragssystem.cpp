//@(#) Auftragssystem.cpp


#include "Auftragssystem.h"
//
Auftragssystem::Auftragssystem()
{

}

//
void Auftragssystem::neuerAuftrag(int kundenId, int taxiId, int anzahlPersonen, string anforderungen, string fahrziel, string abholpunkt, string abholzeit)
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
    //TODO: Passende Taxis
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

