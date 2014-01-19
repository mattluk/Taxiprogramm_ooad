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
    Kunde * kunde;

    cout<<"Geben Sie bitte ihre folgende Daten zu Ihrer Person an!"<<endl<<endl;
    cout<<"Nachnamen"<<endl;
    cin>>nachname;
    for(unsigned int i=0; i<nachname.length(); i++)
    {
        if(nachname[i] >= '0' && nachname[i] <= '9')
        {
            cout<<"Ihre Eingabe war falsch, Sie haben Zahlen fuer den Nachnamen eingesetzt.Versuchen Sie es erneut!"<<endl<<endl;
            return;
        }
    }
    cout<<"Vorname"<<endl;
    cin>>vorname;
    for(unsigned int i=0; i<vorname.length(); i++)
    {
        if(vorname[i] >= '0' && vorname[i] <= '9')
        {
            cout<<"Ihre Eingabe war falsch, Sie haben Zahlen fuer den Vornamen eingesetzt.Versuchen Sie es erneut!"<<endl<<endl;
            return;
        }
    }
    cout<<"Adresse(strasse,hausnummer,plz,stadt)"<<endl;
    cin>>strasse;
    cin>>hausnummer;
    cin>>plz;
    cin>>stadt;
    adresse= new Adresse (strasse,hausnummer,plz,stadt);
    //Id ausgeben
    //Kunde Prüfen erst dann email etc..
    //kunden = this->kundendatenbank->getKunde(vorname,nachname,strasse,plz,hausnummer);
    kunde = auftragssystem->neuerKunde(adresse,vorname,nachname,telefonnummer,handy,email);
    cout<<"Bitte legen Sie weitere Daten an!"<<endl;
    cout<<"Email-Adresse"<<endl;
    cin>> email;
    cout<<"Telefonnummer"<<endl;
    cin>>telefonnummer;
    cout<<"Handynummer"<<endl;
    cin>>handy;
}
void Hauptmenue::freieTaxis()
{
    int sitze;
    string startDatum;
    string startUhrzeit;
    string startStrasse;
    string startHausnummer;
    int startPlz;
    string startStadt;
    int startKoordinateX;
    int startKoordinateY;
    string endStrasse;
    string endHausnummer;
    int endPlz;
    string endStadt;
    int endKoordinateX;
    int endKoordinateY;

    //Alle Daten hier einlesen
    cout<<"Geben sie bitte folgende Daten ein"<<endl;
    cout<<"Anzahl der Sitze"<<endl;
    cin>>sitze;
    cout<<"Geben Sie Bitte jetzt ihr Datum ein (bsp. dd:mm:yyyy),";
    cout<<" im Anschluss noch die Uhrzeit (bsp. hh:mm:ss)."<<endl;
    cin>> startDatum;
    cin>> startUhrzeit;
    if (  (atoi(startDatum.substr(0, 2).c_str()) >=32      ||
           atoi(startDatum.substr(0, 2).c_str())< 0        ||
           atoi(startDatum.substr(3, 2).c_str())>=13       ||
           atoi(startDatum.substr(3, 2).c_str())<=0        ||
           atoi(startUhrzeit.substr(0, 2).c_str())>=25     ||
           atoi(startUhrzeit.substr(0, 2).c_str())<0       ||
           atoi(startUhrzeit.substr(3, 2).c_str())>=60     ||
           atoi(startUhrzeit.substr(3, 2).c_str())<0       ||
           atoi(startUhrzeit.substr(6, 2).c_str())>=60     ||
           atoi(startUhrzeit.substr(6, 2).c_str())<0 ))
    {
        cout<<endl;
        cout<<"Sie haben eine falsche Eingabe getaetigt, bitte versuchen sie es erneut!"<<endl<<endl;
    }
    else
    {
        cout<<" Nun geben Sie bitte noch die Startadresse ein (bsp. Strasse,Hausnummer,PLZ,Stadt,Koordinaten(x,y) "<<endl;
        cin>> startStrasse;
        cin>> startHausnummer;
        cin>> startPlz;
        cin>> startStadt;
        for(unsigned int i=0; i<startStadt.length(); i++)
        {
            if(startStadt[i] >= '0' && startStadt[i] <= '9')
            {
                cout<<"Ihre Eingabe war falsch, Sie haben Zahlen fuer die Stadt eingesetzt.Versuchen Sie es erneut!"<<endl<<endl;
            }
        }
        cin>>startKoordinateX;
        cin>>startKoordinateY;

        cout<<"und bitte noch die Endadresse (bsp. Strasse,Hausnummer,PLZ,Stadt,Koordinaten(x,y))"<<endl;
        cin>> endStrasse;
        cin>> endHausnummer;
        cin>> endPlz;
        cin>> endStadt;
        for(unsigned int i=0; i<endStadt.length(); i++)
        {
            if(endStadt[i] >= '0' && endStadt[i] <= '9')
            {
                cout<<"Ihre Eingabe war falsch, Sie haben Zahlen fuer die Stadt eingesetzt.Versuchen Sie es erneut!"<<endl<<endl;
            }
        }
        cin>>endKoordinateX;
        cin>>endKoordinateY;
    }


    //freieTaxis werden ermittelt
    vector<Taxi*> freieTaxis = this->auftragssystem->gibPassendeTaxis(sitze, new DateTime(startDatum, startUhrzeit),
                                                                             new Adresse(startStrasse, startHausnummer, startPlz, startStadt, new Koordinate(startKoordinateX, startKoordinateY)),
                                                                             new Adresse(endStrasse, endHausnummer, endPlz, endStadt, new Koordinate(endKoordinateX, endKoordinateY)));

//    Taxi* taxi;
//    cout<<taxi->getId();
//    cout<<endl;



    //Alle taxis von "freieTaxis" nacheinander ausgeben
    //FERTIG
    //(kein return)
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
        case 1: kundePruefen();break;
        case 2: freieTaxis();break;
        case 3: taxiAuftragErstellen();break;
        case 9: break;

        default: cout << "Das war eine falsche Eingabe versuchen Sie es bitte erneut" << endl;
        }
    } while (eingabe!=9);

    return 0;
}

