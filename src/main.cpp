#include <iostream>
#include "Hauptmenue.h"

using namespace std;

//Es soll ein Konsolen Programm entworfen werden welches geforderte Funktionen aufruft.
//"Liste aller Taxiauftraege anzeigen und "Neuen Taxiauftrag erstellen".
//Es sollen verschiedene Werte eingegeben werden können wie (Vorname, Nachname, Zieladresse oder Abholpunkt).
//Über eine Adjazenzmatrix soll eine Stadtkarte entworfen werden.Diese soll zur Ermittlung von der Entfernung dienen.
//Das Programm soll den Klassen im Magicdraw identisch sein.

// Aufruf des Hauptmenues
int main()
{
    Hauptmenue* hm = new Hauptmenue();
    hm->starten();
    return 0;
}

