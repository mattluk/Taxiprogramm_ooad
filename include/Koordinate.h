//@(#) Koordinate.h

#ifndef KOORDINATE_H_H
#define KOORDINATE_H_H

//
class Koordinate
{
	
public:
    //
    Koordinate(int x, int y);
	//
	double getX();
	//
	double getY();

    bool operator==(Koordinate* koordinate);
	
private:
	//
	double x;
	
	//
	double y;
	
	
};

#endif
