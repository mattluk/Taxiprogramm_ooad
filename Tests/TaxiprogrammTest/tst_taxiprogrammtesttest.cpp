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
    void testKlasseAuftrag();
};

TaxiprogrammTestTest::TaxiprogrammTestTest()
{
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
    Auftragssystem* auftragssystem = new Auftragssystem();
    auftragssystem->getTaxidatenbank()->addTaxi("1", 1, new Koordinate(3, 5));
    auftragssystem->getTaxidatenbank()->addTaxi("2", 2, new Koordinate(32, 25));
    auftragssystem->getTaxidatenbank()->addTaxi("3", 3, new Koordinate(73, 28));
    auftragssystem->getTaxidatenbank()->addTaxi("4", 4, new Koordinate(4, 100));
    auftragssystem->getTaxidatenbank()->addTaxi("5", 5, new Koordinate(100, 100));
    vector<Taxi*> taxis;
    taxis = auftragssystem->gibPassendeTaxis(2,
                                                  new DateTime("16.01.2014", "20:46:30"),
                                                  new DateTime("16.01.2014", "20:55:30"),
                                                  new Adresse("", "", 0, "", new Koordinate(70, 30)));


//    taxi->addAuftrag(new Auftrag(new Adresse("", "", 0, "", new Koordinate(70, 30)),
//                                 new DateTime("16.01.2014", "20:45:30"), "", 0,
//                                 new DateTime("16.01.2014", "20:47:00"), 0,
//                                 0, NULL, NULL, NULL, NULL));

    taxis = auftragssystem->gibPassendeTaxis(2,
                                                      new DateTime("16.01.2014", "20:46:30"),
                                                      new DateTime("16.01.2014", "20:55:30"),
                                                      new Adresse("", "", 0, "", new Koordinate(70, 30)));

    int test = 0;
}

void TaxiprogrammTestTest::testKlasseAuftrag() {

}

QTEST_APPLESS_MAIN(TaxiprogrammTestTest)

#include "tst_taxiprogrammtesttest.moc"
