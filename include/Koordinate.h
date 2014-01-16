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
    int getX();
	//
    int getY();

    bool operator==(Koordinate* koordinate);
	
private:
	//
    int x;
	
	//
    int y;
	
	
};

#endif
