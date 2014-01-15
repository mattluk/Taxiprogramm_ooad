#ifndef TESTINGCLASS_H
#define TESTINGCLASS_H

#include <cppunit/TestCase.h>
#include "DateTime.h"
#include "Adresse.h"

class TestingClass : public CppUnit::TestCase
{
public:
    TestingClass();
    void testDatumKlasse();
    void testAdresseKlasse();
};

#endif // TESTINGCLASS_H
