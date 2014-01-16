//@(#) Hauptmenue.cpp


#include "Hauptmenue.h"
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
    string date1;
    string time1;
    string date2;
    string time2;
    string strasse;
    string hausnummer;
    int plz;
    string stadt;
    //    Adresse* abholpunkt;
    //    Koordinate* koordinate;
    //    double xKoordinate;
    //    double yKoordinate;

    cout<<"Bitte geben Sie zuerst die Anzahl der Sitze ein!(max 7 Sitze)"<<endl;
    cin>> sitze;
    if (sitze<=7)
    {
    }
    else
    {
        cout<<"Ihre Anzahl der Sitze war zu Hoch bitte versuchen sie es erneut!"<<endl;
    }
    cout<<"Geben Sie Bitte jetzt ihr Datum ein (bsp. dd:mm:yyyy),";
    cout<<" im Anschluss noch die Uhrzeit (bsp. hh:mm:ss)."<<endl;
    cin>> date1;
    cin>> time1;
    cout<<"Geben Sie bitte jetzt die Datum ein (bsp. dd:mm:yyyy),";
    cout<<" dann noch die Uhrzeit (bsp. hh:mm:ss)."<<endl;
    cin>> date2;
    cin>> time2;

    if (  date1==date2 || time1==time2             ||
         (atoi(date1.substr(0, 2).c_str()) >=32    ||
          atoi(date1.substr(0, 2).c_str())< 0      ||
          atoi(date1.substr(3, 2).c_str())>=13     ||
          atoi(date1.substr(3, 2).c_str())<=0      ||
          atoi(date2.substr(0, 2).c_str()) >=32    ||
          atoi(date2.substr(0, 2).c_str())< 0      ||
          atoi(date2.substr(3, 2).c_str())>=13     ||
          atoi(date2.substr(3, 2).c_str())<=0)     ||
          atoi(time1.substr(0, 2).c_str())>=25     ||
          atoi(time1.substr(0, 2).c_str())<0       ||
          atoi(time1.substr(3, 2).c_str())>=60     ||
          atoi(time1.substr(3, 2).c_str())<0       ||
          atoi(time1.substr(6, 2).c_str())>=60     ||
          atoi(time1.substr(6, 2).c_str())<0       ||
          atoi(time2.substr(0, 2).c_str())>=25     ||
          atoi(time2.substr(0, 2).c_str())<0       ||
          atoi(time2.substr(3, 2).c_str())>=60     ||
          atoi(time2.substr(3, 2).c_str())<0       ||
          atoi(time2.substr(6, 2).c_str())>=60     ||
          atoi(time2.substr(6, 2).c_str())<0)

    {
        cout<<endl;
        cout<<"Sie haben eine falsche eingabe getaetigt, bitte versuchen sie es erneut!"<<endl<<endl;
    }
    else
    {
        startZeit = new DateTime (date1, time1);
        endZeit = new DateTime (date2,time2);

    }

    cout<<" Nun geben Sie bitte noch den Abholpunkt (bsp. strasse,hausnummer,plz,stadt,xKoordinate, yKoordinate ) "<<endl;
    cin>> strasse;
    cin>> hausnummer;
    cin>> plz;
    cin>> stadt;
    for(int i=0; i<stadt.length(); i++)
    {
        if(stadt[i] >= '0' && stadt[i] <= '9')
        {
            cout<<"Ihre Eingabe war falsch, Sie haben Zahlen fuer die Stadt eingesetzt.Versuchen Sie es erneut!"<<endl;
        }
    }
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






