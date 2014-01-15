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
}
