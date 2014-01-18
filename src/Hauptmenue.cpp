//@(#) Hauptmenue.cpp


#include "Hauptmenue.h"
//

Hauptmenue::Hauptmenue()
{
    this->auftragssystem = new Auftragssystem();
    this->auftragssystem->getTaxidatenbank()->addTaxi("Kindersitz", 7, new Koordinate(99, 99));
    this->auftragssystem->getTaxidatenbank()->addTaxi("Tiere", 3, new Koordinate(5, 5));
    this->auftragssystem->getTaxidatenbank()->addTaxi("", 1, new Koordinate(100, 7));
    this->auftragssystem->getTaxidatenbank()->addTaxi("Raucher", 4, new Koordinate(67, 30));
    this->auftragssystem->getTaxidatenbank()->addTaxi("grosser Kofferraum", 5, new Koordinate(80, 52));
    this->auftragssystem->getTaxidatenbank()->addTaxi("Fahrrad", 4, new Koordinate(40, 80));
}

void Hauptmenue::taxiAuftragErstellen()
{
    int sitze;
    DateTime* startZeit;
    string date1;
    string time1;
    string strasse;
    string hausnummer;
    int plz;
    string stadt;
    Adresse* abholpunkt;

    cout<<"Bitte geben Sie zuerst die Anzahl der Sitze ein!(max 7 Sitze)"<<endl;
    cin>> sitze;
    if (sitze>7)
    {
        cout<<"Ihre Anzahl der Sitze war zu Hoch bitte versuchen sie es erneut!"<<endl;
        return ;
    }
    cout<<"Geben Sie Bitte jetzt ihr Datum ein (bsp. dd:mm:yyyy),";
    cout<<" im Anschluss noch die Uhrzeit (bsp. hh:mm:ss)."<<endl;
    cin>> date1;
    cin>> time1;
    if (  (atoi(date1.substr(0, 2).c_str()) >=32    ||
           atoi(date1.substr(0, 2).c_str())< 0      ||
           atoi(date1.substr(3, 2).c_str())>=13     ||
           atoi(date1.substr(3, 2).c_str())<=0      ||
           atoi(time1.substr(0, 2).c_str())>=25     ||
           atoi(time1.substr(0, 2).c_str())<0       ||
           atoi(time1.substr(3, 2).c_str())>=60     ||
           atoi(time1.substr(3, 2).c_str())<0       ||
           atoi(time1.substr(6, 2).c_str())>=60     ||
           atoi(time1.substr(6, 2).c_str())<0 ))

    {
        cout<<endl;
        cout<<"Sie haben eine falsche Eingabe getaetigt, bitte versuchen sie es erneut!"<<endl<<endl;
    }
    else
    {
        startZeit = new DateTime (date1, time1);
        cout<<" Nun geben Sie bitte noch den Abholpunkt (bsp. strasse,hausnummer,plz,stadt) "<<endl;
        cin>> strasse;
        cin>> hausnummer;
        cin>> plz;
        cin>> stadt;
        for(unsigned int i=0; i<stadt.length(); i++)
        {
            if(stadt[i] >= '0' && stadt[i] <= '9')
            {
                cout<<"Ihre Eingabe war falsch, Sie haben Zahlen fuer die Stadt eingesetzt.Versuchen Sie es erneut!"<<endl<<endl;
            }
        }
        abholpunkt= new Adresse(strasse,hausnummer,plz,stadt);

    }
}

void Hauptmenue::kundePruefen()
{
    // Auftragssystem kundenvorhanden.
   // ->wenn null neuerKunde aufrufen
}

void Hauptmenue::neuerKunde()
{
    string email;
    int handy;
    string nachname;
    int telefonnummer;
    string vorname;
    Adresse* adresse;
    string strasse;
    string hausnummer;
    int plz;
    string stadt;

    cout<<"Geben Sie bitte ihre folgende Daten zu Ihrer Person an!"<<endl<<endl;
    cout<<"Nachnamen"<<endl;
    cin>>nachname;
    for(unsigned int i=0; i<nachname.length(); i++)
    {
        if(nachname[i] >= '0' && nachname[i] <= '9')
        {
            cout<<"Ihre Eingabe war falsch, Sie haben Zahlen fuer den Nachnamen eingesetzt.Versuchen Sie es erneut!"<<endl<<endl;
        }
    }
    cout<<"Vorname"<<endl;
    cin>>vorname;
    for(unsigned int i=0; i<vorname.length(); i++)
    {
        if(vorname[i] >= '0' && vorname[i] <= '9')
        {
            cout<<"Ihre Eingabe war falsch, Sie haben Zahlen fuer den Vornamen eingesetzt.Versuchen Sie es erneut!"<<endl<<endl;
        }
    }
    cout<<"Adresse(strasse,hausnummer,plz,stadt)"<<endl;
    cin>>strasse;
    cin>>hausnummer;
    cin>>plz;
    cin>>stadt;
    adresse= new Adresse (strasse,hausnummer,plz,stadt);
    cout<<"Email-Adresse"<<endl;
    cin>> email;
    cout<<"Telefonnummer"<<endl;
    cin>>telefonnummer;
    cout<<"Handynummer"<<endl;
    cin>>handy;
}

void Hauptmenue::freieTaxis()
{
    Auftragssystem auftragssystem;
    auftragssystem.gibPassendeTaxis(sitze,startZeit,abholpunkt,ziel);
    //ich will in freie Taxis eigendlich alle freien taxis ausgeben lassen nur weiß ich nicht genau wie ich am besten das Auftragssystem einschließen kann.
    //gibfreietaxis
    //->Menue extras
    //kundenid rausholen,
    //return taxi id
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
        case 2: freieTaxis();break;
        case 3: taxiAuftragErstellen();break;
        case 9: break;

        default: cout << "Das war eine falsche Eingabe versuchen Sie es bitte erneut" << endl;
        }
    } while (eingabe!=9);

    return 0;
}
