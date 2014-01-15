//@(#) Koordinate.cpp


#include "Koordinate.h"
//
Koordinate::Koordinate(int x, int y)
{
    this->x = x;
    this->y = y;
}

//
double Koordinate::getY()
{
    return this->y;
}

//
double Koordinate::getX()
{
    return this->x;
}

bool Koordinate::operator ==(Koordinate* koordinate) {
    if (this->x != koordinate->getX())
        return false;

    if (this->y != koordinate->getY())
        return false;

    return true;
}
