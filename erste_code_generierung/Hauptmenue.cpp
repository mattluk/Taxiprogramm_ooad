//@(#) Hauptmenue.cpp


#include "Menue.h"

using namespace std;
//
int Hauptmenue::starten()
{
	int eingabe=-1;

	do
	{
		//Menue anzeigen
		cout<<"Willkommen beim Taxiunternehmen, bitte geben Sie die für Sie gewuenschte Zahl ein"<<endl;

		cout<<"Menue"<<endl<<endl;
		cout<<"1. Liste der Taxiaufträge anzeigen"<<endl;
		cout<<"2. Freies Taxi ermitteln"<<endl;
		cout<<"3. Taxiauftrag erstellen"<<endl;
		cout<<"9. Ende"<<endl;

		//Auswahl einlesen
		cout<<"Bitte geben Sie eine Zahl ein";
		cin>>">";
		cin.sync();
		cin>>eingabe;
		cin.clear();

		cout<<endl;
		//Auswahl ausführen
		switch(eingabe)
		{
			case 1: ...();break;
			case 2: ...();break;
			case 3: ...();break;
			case 9: break;

			default: cout<<"Das war eine falsche Eingabe versuchen Sie es bitte erneut"<<endl;
		}
	}
	while (eingabe!=9);
	return 0;
}

