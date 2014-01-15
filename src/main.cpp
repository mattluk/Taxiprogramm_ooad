#include <iostream>
#include "Hauptmenue.h"
#include "testingclass.h"

using namespace std;

int main()
{
    TestingClass* tc = new TestingClass();
    tc->testDatumKlasse();

    Hauptmenue* hm = new Hauptmenue();
    hm->starten();
    return 0;
}

