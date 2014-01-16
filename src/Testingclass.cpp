#include "Testingclass.h"

TestingClass::TestingClass() : CppUnit::TestCase("Testing")
{
}

void TestingClass::testDatumKlasse() {
    DateTime* dateTime1 = new DateTime("23.05.2013", "09:03:01");
    string compare1 = dateTime1->dateToString();
    string compare2 = dateTime1->timeToString();
    CPPUNIT_ASSERT(compare1 == "23.05.2013");
    CPPUNIT_ASSERT(compare2 == "09:03:01");
    CPPUNIT_ASSERT(compare1 == compare1);
    CPPUNIT_ASSERT(compare1 != compare2);
}

void TestingClass::testAdresseKlasse() {
    Adresse* eins = new Adresse("strasse1", "hausnummer1", 1, "stadt1", new Koordinate(1, 2));
    Adresse* zwei = new Adresse("strasse2", "hausnummer2", 2, "stadt2", new Koordinate(1, 2));
    CPPUNIT_ASSERT(!(eins->isEqual(zwei)));
    CPPUNIT_ASSERT(eins->isEqual(eins));
}

void TestingClass::testKarteKlasse() {
    Karte* karte = new Karte();
    Adresse* adresse1 = new Adresse("", "", 0, "", new Koordinate(97, 4));
    Adresse* adresse2 = new Adresse("", "", 0, "", new Koordinate(4, 4));
    cout << karte->getEntfernung(adresse1, adresse2);
}
