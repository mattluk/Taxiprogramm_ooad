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
void Auftragssystem::neuerAuftrag(int kundenId, int taxiId, int anzahlPersonen, Adresse *fahrziel, Adresse *abholpunkt, DateTime *abholzeit)
{
    Kunde* kunde = this->kundendatenbank->getKunde(kundenId);
    Taxi* taxi = this->taxidatenbank->getTaxi(taxiId);
    DateTime* berechneteEndzeit;

    double wegLaenge = this->karte->getEntfernung(abholpunkt, fahrziel);
    double meter = wegLaenge * 500;
    double berechneterFahrpreis = (meter / 500) + 2.50;
    berechneteEndzeit = abholzeit->addMinuten( (meter / 1000) );

    Auftrag* auftrag = new Auftrag(abholpunkt, abholzeit, taxi->getExtras(), anzahlPersonen, berechneteEndzeit, berechneterFahrpreis, 0, fahrziel, kunde, taxi, NULL, this->auftragIdIndex++, meter);

    taxi->addAuftrag(auftrag);
    this->auftraege.push_back(auftrag);
}

Kundendatenbank* Auftragssystem::getKundendatenbank() {
    return this->kundendatenbank;
}

//
string Auftragssystem::alleAuftraegeToString()
{
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

//
vector<Taxi*> Auftragssystem::gibPassendeTaxis(int sitze, DateTime* startZeit, Koordinate* abholpunkt, Koordinate* ziel)
{
    int wegLaenge = this->karte->getEntfernung(abholpunkt, ziel);
    int meter = wegLaenge * 1000;
    DateTime* endZeit = startZeit->addMinuten( (meter / 1000) + 10 );
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
        min = this->karte->getEntfernung(abholpunkt, currentMinTaxi->getStandort());
        currentI = 0;
        for (unsigned int i = 0; i < passendeSitze.size(); i++) {
            currentTaxi = passendeSitze.at(i);
            if (currentTaxi->getSitze() >= sitze) {
                int vergleich = this->karte->getEntfernung(abholpunkt, currentTaxi->getStandort());
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
Kunde* Auftragssystem::kundeVorhanden(string vorname, string nachname, string strasse, int plz, string hausnummer)
{
    return this->kundendatenbank->getKunde(vorname, nachname, strasse, plz, hausnummer);
}

//
Kunde* Auftragssystem::neuerKunde(Adresse* adresse, string vorname, string nachname, int telefonnummer, int handy, string email)
{
    return this->kundendatenbank->neuerKunde(adresse, vorname, nachname, telefonnummer, handy, email);
}

int Auftragssystem::auftragIdIndex = 0;
