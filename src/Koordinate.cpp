//@(#) Koordinate.cpp


#include "Koordinate.h"
//
Koordinate::Koordinate(int x, int y)
{
    this->x = x;
    this->y = y;
}

//
int Koordinate::getY()
{
    return this->y;
}

//
int Koordinate::getX()
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
