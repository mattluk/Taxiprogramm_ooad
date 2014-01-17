//@(#) Koordinate.h

#ifndef KOORDINATE_H_H
#define KOORDINATE_H_H

#include <string>
#include <sstream>

using namespace std;

//
class Koordinate
{
	
public:
    //
    Koordinate(int x, int y);
	//
    int getX();
	//
    int getY();

    bool operator==(Koordinate* koordinate);

    string toString();
	
private:
	//
    int x;
	
	//
    int y;
	
	
};

#endif
