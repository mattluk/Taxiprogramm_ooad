#include "testingclass.h"

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
    Koordinate* kd = new Koordinate(2, 4);
    Adresse* eins = new Adresse("strasse1", "hausnummer1", 1, "stadt1", kd);
    Adresse* zwei = new Adresse("strasse2", "hausnummer2", 2, "stadt2", kd);
    CPPUNIT_ASSERT(eins != zwei);
    CPPUNIT_ASSERT(eins == eins);
}
