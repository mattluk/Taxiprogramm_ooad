//@(#) Koordinate.h

#ifndef KOORDINATE_H_H
#define KOORDINATE_H_H

//
class Koordinate
{
	
public:
    //
    Koordinate(double x, double y);
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
