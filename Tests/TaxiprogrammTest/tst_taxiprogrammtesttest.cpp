#include <QString>
#include <QtTest>
#include <iostream>
#include "DateTime.h"
#include "Adresse.h"
#include "Koordinate.h"
#include "Karte.h"
#include "Taxidatenbank.h"
#include "Auftragssystem.h"

using namespace std;

class TaxiprogrammTestTest : public QObject
{
    Q_OBJECT
    
public:
    TaxiprogrammTestTest();
    
private Q_SLOTS:
    void testDatum();
    void testAdresse();
    void testKarte();
    void testGibPassendeTaxis();
    void testKlasseAuftragssystem();
    void kundeVorhanden();

private:
    Auftragssystem* auftragssystem;
};

TaxiprogrammTestTest::TaxiprogrammTestTest() {
    auftragssystem = new Auftragssystem();

    //Taxis
    auftragssystem->getTaxidatenbank()->addTaxi("Kindersitz", 7, new Koordinate(99, 99));
    auftragssystem->getTaxidatenbank()->addTaxi("Tiere", 3, new Koordinate(5, 5));
    auftragssystem->getTaxidatenbank()->addTaxi("", 1, new Koordinate(100, 7));
    auftragssystem->getTaxidatenbank()->addTaxi("Raucher", 4, new Koordinate(67, 30));
    auftragssystem->getTaxidatenbank()->addTaxi("grosser Kofferraum", 5, new Koordinate(80, 52));
    auftragssystem->getTaxidatenbank()->addTaxi("Fahrrad", 4, new Koordinate(40, 80));

    //Kunden
    auftragssystem->neuerKunde(new Adresse("MaxStrasse", "13", 69384, "Darmstadt", new Koordinate(77, 52)), "Beate", "Brat", 54483, 33434, "keine");
    auftragssystem->neuerKunde(new Adresse("Johannstrasse", "37", 53485, "Weiterstadt", new Koordinate(100, 4)), "Lisa", "Schmitt", 6456, 456456, "lisa@web.de");
    auftragssystem->neuerKunde(new Adresse("Rathausstrasse", "5", 33445, "Essen", new Koordinate(24, 48)), "Hans", "Peter", 5445483, 55534, "hand@peter.de");
    auftragssystem->neuerKunde(new Adresse("Marktplatzstrasse", "64", 33555, "Berlin", new Koordinate(2, 2)), "Kalle", "Fink", 543483, 6456, "Kalle@Fink.de");
}

void TaxiprogrammTestTest::testKlasseAuftragssystem() {
    DateTime* startZeit;
    int kundenId;
    int anzahlPersonen;
    string anforderungen;
    Adresse* fahrZiel;
    Adresse* start;

    //Auftrag hinzufuegen
    startZeit = new DateTime("17.01.2013", "20:10:00");
    start = new Adresse("", "", 0, "", new Koordinate(3, 5));
    kundenId = 3;
    anzahlPersonen = 5;
    anforderungen = "Keine";
    fahrZiel = new Adresse("", "", 0, "", new Koordinate(100, 100));

    vector<Taxi*> taxis = auftragssystem->gibPassendeTaxis(anzahlPersonen, startZeit, start, fahrZiel);
    auftragssystem->neuerAuftrag(kundenId, taxis.at(0)->getId(), anzahlPersonen, anforderungen, fahrZiel, start, startZeit);
    cout << auftragssystem->alleAuftraegeToString();
}

void TaxiprogrammTestTest::kundeVorhanden() {
    Kunde* kunde = auftragssystem->kundeVorhanden("Beate", "Brat", "MaxStrasse", 69384, "13");
    int test = 0;
}

void TaxiprogrammTestTest::testDatum() {
    DateTime* dateTime1 = new DateTime("23.05.2013", "09:03:01");
    DateTime* dateTime2 = new DateTime("23.05.2013", "10:01:01");
    string compare1 = dateTime1->dateToString();
    string compare2 = dateTime1->timeToString();
    QVERIFY(compare1 == "23.05.2013");
    QVERIFY(compare2 == "09:03:01");
    QVERIFY(dateTime1->isEqual(dateTime1));
    QVERIFY(!(dateTime1->isEqual(new DateTime("23.05.2013", "09:03:02"))));
    QVERIFY(dateTime2->isAfter(dateTime1));
    QVERIFY(dateTime1->isBefore(dateTime2));
}

void TaxiprogrammTestTest::testAdresse() {
    Adresse* eins = new Adresse("strasse1", "hausnummer1", 1, "stadt1", new Koordinate(1, 2));
    Adresse* zwei = new Adresse("strasse2", "hausnummer2", 2, "stadt2", new Koordinate(1, 2));
    QVERIFY(!(eins->isEqual(zwei)));
    QVERIFY(eins->isEqual(eins));
}

void TaxiprogrammTestTest::testKarte() {
    Karte* karte = new Karte();
    Adresse* adresse1 = new Adresse("", "", 0, "", new Koordinate(97, 4));
    Adresse* adresse2 = new Adresse("", "", 0, "", new Koordinate(4, 4));
    QVERIFY(karte->getEntfernung(adresse1, adresse2) == 201);
}

void TaxiprogrammTestTest::testGibPassendeTaxis() {
    vector<Taxi*> taxis;
    taxis = auftragssystem->gibPassendeTaxis(2,
                                             new DateTime("16.01.2014", "20:46:30"),
                                             new Adresse("", "", 0, "", new Koordinate(70, 30)),
                                             new Adresse("", "", 0, "", new Koordinate(20, 20)));


    //    taxi->addAuftrag(new Auftrag(new Adresse("", "", 0, "", new Koordinate(70, 30)),
    //                                 new DateTime("16.01.2014", "20:45:30"), "", 0,
    //                                 new DateTime("16.01.2014", "20:47:00"), 0,
    //                                 0, NULL, NULL, NULL, NULL));

    taxis = auftragssystem->gibPassendeTaxis(2,
                                             new DateTime("16.01.2014", "20:46:30"),
                                             new Adresse("", "", 0, "", new Koordinate(70, 30)),
                                             new Adresse("", "", 0, "", new Koordinate(30, 30)));

    int test = 0;
}

QTEST_APPLESS_MAIN(TaxiprogrammTestTest)

#include "tst_taxiprogrammtesttest.moc"
