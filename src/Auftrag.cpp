//@(#) Auftrag.cpp


#include "Auftrag.h"
//
Auftrag::Auftrag(Adresse* abholpunkt, DateTime* abholzeit, string anforderungen, int anzahlPersonen, DateTime* berechneteEndzeit,
                     double berechneterFahrpreis, double fahrpreis, Adresse* fahrziel, Kunde* kunde, Taxi* taxi, DateTime* endzeit)
{
    //TODO: ID einstellen
    this->abholpunkt = abholpunkt;
    this->abholzeit = abholzeit;
    this->anforderungen = anforderungen;
    this->anzahlPersonen = anzahlPersonen;
    this->berechneteEndzeit = berechneteEndzeit;
    this->berechneterFahrpreis = berechneterFahrpreis;
    this->fahrpreis = fahrpreis;
    this->fahrziel = fahrziel;
    this->kunde = kunde;
    this->taxi = taxi;
    this->endzeit = endzeit;
}

//
int Auftrag::getAnzahlPersonen()
{
    return this->anzahlPersonen;
}

//
string Auftrag::getAnforderungen()
{
    return this->anforderungen;
}

//
Adresse* Auftrag::getFahrziel()
{
    return this->fahrziel;
}

//
Adresse* Auftrag::getAbholpunkt()
{
    return this->abholpunkt;
}

//
Kunde* Auftrag::getKunde()
{
    return this->kunde;
}

//
Taxi* Auftrag::getTaxi()
{
    return this->taxi;
}

//
double Auftrag::getBerechneterFahrpreis()
{
    return this->berechneterFahrpreis;
}

//
double Auftrag::getFahrpreis()
{
    return this->fahrpreis;
}

//
void Auftrag::setAnzahlPersonen(int anzahlPersonen)
{
    this->anzahlPersonen = anzahlPersonen;
}

//
void Auftrag::setAnforderungen(string andorderungen)
{
    this->anforderungen = anforderungen;
}

//
void Auftrag::setFahrziel(Adresse* fahrziel)
{
    this->fahrziel = fahrziel;
}

//
void Auftrag::setAbholpunkt(Adresse* abholpunkt)
{
    this->abholpunkt = abholpunkt;
}

//
void Auftrag::setKunde(Kunde* kunde)
{
    this->kunde = kunde;
}

//
void Auftrag::setTaxi(Taxi* taxi)
{
    this->taxi = taxi;
}

//
void Auftrag::setBerechneterFahrpreis(double berechneterFahrpreis)
{
    this->berechneterFahrpreis = berechneterFahrpreis;
}

//
void Auftrag::setFahrpreis(double fahrpreis)
{
    this->fahrpreis = fahrpreis;
}

//
DateTime* Auftrag::getAbholzeit() {
    return this->abholzeit;
}

DateTime* Auftrag::getBerechneteEndzeit() {
    return this->berechneteEndzeit;
}
