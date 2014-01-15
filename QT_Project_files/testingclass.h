#ifndef TESTINGCLASS_H
#define TESTINGCLASS_H

#include <cppunit/TestCase.h>
#include "DateTime.h"

class TestingClass : public CppUnit::TestCase
{
public:
    TestingClass();
    void testDatumKlasse();
};

#endif // TESTINGCLASS_H
