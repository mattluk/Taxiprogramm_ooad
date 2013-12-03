//@(#) Taxi.cpp


#include "Taxi.h"
//
int Taxi::getSitze()
{
	return 0;
}

//
Koordinate* Taxi::getStandort()
{
	return Koordinate();
}

//
std::string Taxi::getExtras()   // std hinzugefügt 
{
	return std::string();		//std hinzugefügt
}

//
int Taxi::getId()
{
	return 0;
}

//
bool Taxi::getBelegt()
{
	return false;
}

//
DateTime* Taxi::getStartZeit()
{
	return DateTime();
}

//
DateTime* Taxi::getEndZeit()
{
	return DateTime();
}

//
void Taxi::setAuftrag(Auftrag auftrag)
{
			//funktioniert warscheinlich wegen schreibfehler nicht
}

//
void Taxi::auftragAbschliessen(std::string daten)
{
	
}

