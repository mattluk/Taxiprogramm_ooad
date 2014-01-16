#include "Karte.h"

Karte::Karte() {
    int max = 13;

    graph = vector< vector<int> >();
    punktKoordinaten = vector<Koordinate*>();

    for (int i = 0; i < max; i++) {
        vector<int> vec = vector<int>();
        for (int i = 0; i < max; i++) {
            vec.push_back(0);
        }
        graph.push_back(vec);
    }

    graph[0][3] = 52;
    graph[0][4] = 48;

    graph[1][2] = 45;

    graph[2][1] = 45;
    graph[2][3] = 48;

    graph[3][0] = 52;
    graph[3][2] = 48;
    graph[3][5] = 26;

    graph[4][0] = 38;

    graph[5][3] = 26;
    graph[5][6] = 31;
    graph[5][8] = 31;

    graph[6][5] = 31;
    graph[6][7] = 27;
    graph[6][9] = 25;

    graph[7][6] = 27;

    graph[8][5] = 31;
    graph[8][11] = 41;
    graph[8][12] = 44;

    graph[9][6] = 25;
    graph[9][11] = 20;

    graph[10][11] = 47;

    graph[11][8] = 41;
    graph[11][9] = 20;
    graph[11][10] = 47;

    graph[12][8] = 44;

    punktKoordinaten.push_back(new Koordinate(3, 3));
    punktKoordinaten.push_back(new Koordinate(5, 48));
    punktKoordinaten.push_back(new Koordinate(3, 93));
    punktKoordinaten.push_back(new Koordinate(25, 50));
    punktKoordinaten.push_back(new Koordinate(32, 27));
    punktKoordinaten.push_back(new Koordinate(32, 75));
    punktKoordinaten.push_back(new Koordinate(50, 50));
    punktKoordinaten.push_back(new Koordinate(60, 25));
    punktKoordinaten.push_back(new Koordinate(63, 77));
    punktKoordinaten.push_back(new Koordinate(75, 50));
    punktKoordinaten.push_back(new Koordinate(98, 5));
    punktKoordinaten.push_back(new Koordinate(95, 52));
    punktKoordinaten.push_back(new Koordinate(100, 100));
}

int Karte::getEntfernung(Koordinate *start, Koordinate *ziel) {
    int startPunkt = naehesterPunkt(start);
    int zielPunkt = naehesterPunkt(ziel);
    int x = abstandZwischenZweiPunkten(start, punktKoordinaten.at(startPunkt));
    int y = abstandZwischenZweiPunkten(ziel, punktKoordinaten.at(zielPunkt));
    int z = kleinsterWeg(startPunkt, zielPunkt, 13);
    return x+y+z;
}

int Karte::getEntfernung(Adresse *start, Adresse *ziel) {
    int startPunkt = naehesterPunkt(start->getKoordinate());
    int zielPunkt = naehesterPunkt(ziel->getKoordinate());
    int x = abstandZwischenZweiPunkten(start->getKoordinate(), punktKoordinaten.at(startPunkt));
    int y = abstandZwischenZweiPunkten(ziel->getKoordinate(), punktKoordinaten.at(zielPunkt));
    int z = kleinsterWeg(startPunkt, zielPunkt, 13);
    return x+y+z;
}

int Karte::naehesterPunkt(Koordinate *koordinate) {
    int min = abstandZwischenZweiPunkten(koordinate, punktKoordinaten.at(0));
    int counter = 0;
    for (unsigned int i = 0; i < punktKoordinaten.size(); i++) {
        if (min > abstandZwischenZweiPunkten(koordinate, punktKoordinaten.at(i))) {
            min = abstandZwischenZweiPunkten(koordinate, punktKoordinaten.at(i));
            counter = i;
        }
    }
    return counter;
}

int Karte::abstandZwischenZweiPunkten(Koordinate* koordinate1, Koordinate* koordinate2) {
    return (abs(koordinate1->getX() - koordinate2->getX())+abs(koordinate1->getY() - koordinate2->getY()));
}


int Karte::kleinsterWeg(int startknoten, int zielknoten, int max) {
    vector<int>Q = vector<int>();
    int abstand[13];
    int vorgaenger[13];
    int u = 0;

    for (unsigned int i = 0; i < graph.size(); i++) {
        abstand[i] = (numeric_limits<int>::max() / 2);
        vorgaenger[i] = -1;
        Q.push_back(i);
    }
    abstand[startknoten] = 0;

    while (!(Q.empty())) {
        u = kleinsterWert(Q, abstand);
        deleteFromQ(Q, u);
        if (u == zielknoten) {
            if (abstand[u] != (numeric_limits<int>::max() / 2))
                return abstand[u];
            else {
                return -1;
            }
        }
        vector<int> nachbarn = getNachbarn(u);
        for (unsigned int i = 0; i < nachbarn.size(); i++) {
            if (isIn(Q, nachbarn.at(i))) {
                updateDistance(u, nachbarn.at(i), abstand, vorgaenger);
            }
        }
    }
    return 0;
}

void Karte::deleteFromQ(vector<int> &Q, int u) {
    for (unsigned int i = 0; i < Q.size(); i++) {
        if (Q.at(i) == u) {
            Q.erase(Q.begin() + i);
        }
    }
}

void Karte::updateDistance(int u, int v, int abstand[], int vorgaenger[]) {
    int alternativ = abstand[u] + graph[u][v];
    if (alternativ < abstand[v]) {
        abstand[v] = alternativ;
        vorgaenger[v] = u;
    }
}

vector<int> Karte::getNachbarn(int u) {
    vector<int> returnArray = vector<int>();
    for (unsigned int i = 0; i < graph.size(); i++) {
        if (graph[u][i] != 0) {
            returnArray.push_back(i);
        }
    }
    return returnArray;
}

int Karte::kleinsterWert(vector<int>&Q, int abstand[]) {
    int min = abstand[Q.at(0)];
    int counter = Q.at(0);
    for (unsigned int i = 0; i < Q.size(); i++) {
        if (min > abstand[Q.at(i)]) {
            min = abstand[Q.at(i)];
            counter = Q.at(i);
        }
    }
    return counter;
}

bool Karte::isIn(vector<int>&Q, int q) {
    for (unsigned int i = 0; i < Q.size(); i++) {
        if (Q.at(i) == q) {
            return true;
        }
    }
    return false;
}


