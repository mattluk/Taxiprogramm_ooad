#ifndef KARTE_H
#define KARTE_H

#include <vector>
#include <string>
#include <iostream>
#include <limits>
#include <math.h>
#include <complex>
#include "Koordinate.h"
#include "Adresse.h"

using namespace std;

class Karte
{
public:
    Karte();

    int getEntfernung(Adresse* start, Adresse* ziel);

    int getEntfernung(Koordinate* start, Koordinate* ziel);

private:
    int kleinsterWeg(int startknoten, int zielknoten, int max);

    int kleinsterWert(vector<int> &Q, int abstand[5]);

    bool isIn(vector<int> &Q, int q);

    vector<int> getNachbarn(int u);

    void updateDistance(int u, int v, int abstand[], int vorgaenger[]);

    void deleteFromQ(vector<int> &Q, int u);

    int abstandZwischenZweiPunkten(Koordinate* koordinate1, Koordinate* koordinate2);

    int naehesterPunkt(Koordinate* koordinate);

    vector< vector<int> >graph;

    vector<Koordinate*> punktKoordinaten;
};

#endif // KARTE_H
