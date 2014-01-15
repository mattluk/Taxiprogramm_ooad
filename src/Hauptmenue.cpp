//@(#) Hauptmenue.cpp


#include "Hauptmenue.h"
#include "Auftragssystem.h"
//

Hauptmenue::Hauptmenue()
{
   auftragssystem = new Auftragssystem();
}

void Hauptmenue::taxiAuftragErstellen()
{
    int sitze;
    DateTime* startZeit;
    DateTime* endZeit;
    string date;
    string time;
    string strasse;
    string hausnummer;
    int plz;
    string stadt;
    Adresse* abholpunkt;
    Koordinate* koordinate;
    int xKoordinate;
    int yKoordinate;

    cout<<"Bitte geben Sie zuerst die Anzahl der Sitze ein."<<endl;
    cin>> sitze;
    cout<<"Geben Sie Bitte jetzt die Startzeit ein (bsp. dd.mm.yyyy),";
    cout<<" dann noch die Uhrzeit (bsp. hh.mm.ss)."<<endl;
    cin>> date;
    cin>> time;
    startZeit = new DateTime (date, time);
    cout<<"Geben Sie Bitte jetzt die Endzeit ein (bsp. dd:mm:yyyy),";
    cout<<" dann noch die Uhrzeit (bsp. hh:mm:ss)."<<endl;
    cin>> date;
    cin>> time;
    endZeit = new DateTime (date,time);
    cout<<" Nun geben Sie bitte noch den Abholpunkt (bsp. strasse,plz,stadt,koordinate ) "<<endl;
    cin>> strasse;
    cin>> hausnummer;
    cin>> plz;
    cin>> stadt;
    cin>> xKoordinate;
    cin>> yKoordinate;
    koordinate=new Koordinate (xKoordinate,yKoordinate);
    abholpunkt = new Adresse (strasse,hausnummer,plz,stadt,koordinate);
    auftragssystem->gibPassendeTaxis(sitze,startZeit,endZeit,abholpunkt);
}


int Hauptmenue::starten()
{
    int eingabe=-1;

    do
    {
        //Menue anzeigen
        cout << "Willkommen beim Taxiunternehmen, bitte geben Sie die fuer Sie gewuenschte Zahl ein" << endl;

        cout << "Menue" <<endl<<endl;
        cout << "1. Liste der Taxiauftraege anzeigen"<<endl;
        cout << "2. Freies Taxi ermitteln"<<endl;
        cout << "3. Taxiauftrag erstellen"<<endl;
        cout << "9. Ende"<<endl;

        //Auswahl einlesen
        cout << "Bitte geben Sie eine Zahl ein";
        cout << "> ";
        cin >> eingabe;
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
            eingabe = -1;
        }
        cout << endl;

        //Auswahl ausfuehren
        switch(eingabe)
        {
        case 1: ;break;
        case 2: ;break;
        case 3: taxiAuftragErstellen();break;
        case 9: break;

        default: cout << "Das war eine falsche Eingabe versuchen Sie es bitte erneut" << endl;
        }
    } while (eingabe!=9);

    return 0;
}





