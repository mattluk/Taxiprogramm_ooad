//@(#) Auftragssystem.cpp


#include "Auftragssystem.h"
//
void Auftragssystem::neuerAuftrag(int kundenId, int taxiId, int anzahlPersonen, std::string anforderungen, std::string fahrziel, std::string abholpunkt, std::string abholzeit)
{
	
}

//
std::string Auftragssystem::alleAuftraegeToString()
{
	return std::string();
}

//
std::string Auftragssystem::gibPassendeTaxis(int sitze, DateTime* startZeit, DateTime* endZeit, Adresse* abholpunkt)
{
	return std::string();
}

//
std::string Auftragssystem::kundeVorhanden(std::string vorname, std::string nachname, std::string strasse, std::string hausnummer)
{
	return std::string();
}

//
int Auftragssystem::neuerKunde(Adresse* adresse, std::string vorname, std::string nachname, int telefonnummer, int handy, std::string email)
{
	return 0;
}

