//@(#) Taxi.cpp


#include "Taxi.h"
//
Taxi::Taxi(string extras, int sitze, Koordinate *standort, int id)
{
    this->id = id;
    this->extras = extras;
    this->sitze = sitze;
    this->auftraege = vector<Auftrag*>();
    this->standort = standort;
}

//
bool Taxi::isEqual(Taxi *taxi) {
    if (this->id != taxi->getId())
        return false;

    return true;
}

//
int Taxi::getSitze()
{
    return this->sitze;
}

//
Koordinate* Taxi::getStandort()
{
    return this->standort;
}

//
string Taxi::getExtras()
{
    return this->extras;
}

//
int Taxi::getId()
{
    return this->id;
}

//
void Taxi::addAuftrag(Auftrag* auftrag)
{
    this->auftraege.push_back(auftrag);
}

//
void Taxi::auftragAbschliessen(string daten)
{
    daten = daten;
}

//
vector<Auftrag*> Taxi::getAuftraege() {
    return this->auftraege;
}

string Taxi::alleAuftraegeToString() {
    if (this->auftraege.size() == 0) {
        return "Es sind momentan keine Auftraege vorhanden\n";
    }

    stringstream ss;
    string returnString;
    Auftrag* currentAuftrag;
    string id;
    string kundenId;
    string vorname;
    string nachname;
    string abholzeit;
    string berechneteEndzeit;
    string abholpunkt;
    string ziel;
    string anforderungen;
    string taxiId;
    string anzahlPersonen;
    string berechneterFahrpreis;
    string entfernung;

    returnString = "AUFTRAEGE\n";
    returnString += "-------------------------------------\n\n";

    for (unsigned int i = 0; i < this->auftraege.size(); i++) {
        currentAuftrag = this->auftraege.at(i);

        ss.clear();
        ss << currentAuftrag->getId();
        ss >> id;

        ss.clear();
        ss << currentAuftrag->getKunde()->getId();
        ss >> kundenId;

        vorname = currentAuftrag->getKunde()->getVorname();
        nachname = currentAuftrag->getKunde()->getNachname();

        abholzeit = currentAuftrag->getAbholzeit()->toString();

        berechneteEndzeit = currentAuftrag->getBerechneteEndzeit()->toString();

        abholpunkt = currentAuftrag->getAbholpunkt()->getKoordinate()->toString();

        ziel = currentAuftrag->getFahrziel()->getKoordinate()->toString();

        anforderungen = currentAuftrag->getAnforderungen();

        ss.clear();
        ss << currentAuftrag->getTaxi()->getId();
        ss >> taxiId;

        ss.clear();
        ss << currentAuftrag->getAnzahlPersonen();
        ss >> anzahlPersonen;

        ss.clear();
        ss << currentAuftrag->getBerechneterFahrpreis();
        ss >> berechneterFahrpreis;

        ss.clear();
        ss << currentAuftrag->getEntfernung();
        ss >> entfernung;


        returnString += "ID: " + id + "\n";
        returnString += "ID Kunde: " + kundenId + "\n";
        returnString += "Vorname: " + vorname + "\n";
        returnString += "Nachname: "+ nachname + "\n";
        returnString += "Abholzeitpunkt: " + abholzeit + "\n";
        returnString += "Berechneter Ankunftszeitpunkt: " + berechneteEndzeit + "\n";
        returnString += "Abholpunkt: " + abholpunkt + "\n";
        returnString += "Ziel: " + ziel + "\n";
        returnString += "Entfernung: " + entfernung + "m\n";
        returnString += "Anforderungen: " + anforderungen + "\n";
        returnString += "ID Taxi: " + taxiId + "\n";
        returnString += "Personenanzahl: " + anzahlPersonen + "\n";
        returnString += "Berechneter Fahrpreis: " + berechneterFahrpreis + " Euro\n";
        returnString += "\n\n\n";
    }
    return returnString;
}
