#include <iostream>
#include "Hauptmenue.h"
//#include "Testingclass.h"

using namespace std;

int main()
{
//    TestingClass* tc = new TestingClass();
//    tc->testDatumKlasse();
//    tc->testAdresseKlasse();
//    tc->testKarteKlasse();

    Hauptmenue* hm = new Hauptmenue();
    hm->starten();
    return 0;
}

