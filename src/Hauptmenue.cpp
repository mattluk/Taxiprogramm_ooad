//@(#) Hauptmenue.cpp


#include "Hauptmenue.h"
//
// Im Konstruktor werden verschiedene Taxen angelegt mit Informationen ueber extras, sitzplaetze und Aufenthaltsort
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
//Es wird ein neuer Taxi Auftrag erstellt
void Hauptmenue::taxiAuftragErstellen()
{
    this->kundePruefen();

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
    int kundenId;
    int taxiId;

    cout << "Geben Sie nun die Kunden ID ein" << endl;
    cin >> kundenId;
    cout << "Geben Sie nun die Taxi ID ein" << endl;
    cin >> taxiId;

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

        this->auftragssystem->neuerAuftrag(kundenId, taxiId, sitze,
                                           new Adresse(endStrasse, endHausnummer, endPlz, endStadt, new Koordinate(endKoordinateX, endKoordinateY)),
                                           new Adresse(startStrasse, startHausnummer, startPlz, startStadt, new Koordinate(startKoordinateX, startKoordinateY)),
                                           new DateTime(startDatum, startUhrzeit));

        cout << "Der Auftrag wurde erstellt" << endl << endl;

    }

}
//Es wird geprueft ob der Kunde bereits vorhanden ist, falls nein werden weitere Daten hinzugefügt
void Hauptmenue::kundePruefen()
{
    string email;
    int handy;
    string nachname;
    int telefonnummer;
    string vorname;
    string strasse;
    string hausnummer;
    int plz;
    string stadt;
    Kunde* kunde;
    int koordinateX;
    int koordinateY;

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

    //Eventuell hier noch strasse hausnummer plz und stadt pruefen

    //---------------------------------------------------------------------

    kunde = this->auftragssystem->kundeVorhanden(vorname, nachname, strasse, plz, hausnummer);
    if (kunde == NULL) {
        cout<<"Es wird ein neuer Kunde angelegt, bitte geben Sie dazu zusaetzliche Daten ein:"<<endl;
        cout<<"Email-Adresse"<<endl;
        cin>> email;
        cout<<"Telefonnummer"<<endl;
        cin>>telefonnummer;
        cout<<"Handynummer"<<endl;
        cin>>handy;
        cout<<"KoordinateX und KoordinateY"<<endl;
        cin>>koordinateX;
        cin>>koordinateY;

        //Die eingelesenen Daten hier evtl. noch pruefen

        //--------------------------------------------------------------------------------------------

        kunde = this->auftragssystem->neuerKunde(new Adresse(strasse, hausnummer, plz, stadt, new Koordinate(koordinateX, koordinateY)), vorname, nachname, telefonnummer, handy, email);
    }

    cout << endl << endl;
    cout << "Kunde:" << endl;
    cout << "ID: " << kunde->getId() << endl;
    cout << "Vorname: " << kunde->getVorname() << endl;
    cout << "Nachname: " << kunde->getNachname() << endl;
    cout << "Standort: " << kunde->getAdresse()->getKoordinate()->toString() << endl;
}


//Die Methode bestimmt alle freien Taxis und gib Sie aus
void Hauptmenue::freieTaxis()
{
    int sitze;
    string startDatum;
    string startUhrzeit;
    int startKoordinateX;
    int startKoordinateY;
    int endKoordinateX;
    int endKoordinateY;

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
        cout<<" Nun geben Sie bitte noch die Startadresse ein (bsp. Koordinaten(x,y) "<<endl;
        cin>>startKoordinateX;
        cin>>startKoordinateY;

        cout<<"und bitte noch die Endadresse (bsp. Koordinaten(x,y))"<<endl;
        cin>>endKoordinateX;
        cin>>endKoordinateY;

        vector<Taxi*> freieTaxis = this->auftragssystem->gibPassendeTaxis(sitze, new DateTime(startDatum, startUhrzeit),
                                                                          new Koordinate(startKoordinateX, startKoordinateY),
                                                                          new Koordinate(endKoordinateX, endKoordinateY));


        cout << endl << endl;
        if (freieTaxis.size() == 0) {
            cout << "Momentan stehen leider keine Taxis zur Verfuegung" << endl;
        } else {
            cout << "Folgende Taxis wurden ermittelt" << endl;

            Taxi* currentTaxi;
            for (unsigned int i = 0; i < freieTaxis.size(); i++) {
                currentTaxi = freieTaxis.at(i);
                cout << i + 1 << ". Taxi:" << endl;
                cout << "ID: " << currentTaxi->getId() << endl;
                cout << "Standort: " << currentTaxi->getStandort()->toString() << endl;
                cout << "Sitze: " << currentTaxi->getSitze() << endl;
                cout << "Extras: " << currentTaxi->getExtras() << endl;
                cout << endl << "Das Taxi hat momentan folgende aktive Auftraege:" << endl;
                cout << currentTaxi->alleAuftraegeToString() << endl << endl;
            }
        }
    }
}

//Das Hauptmenue wird aufgerufen
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
        case 1: cout << this->auftragssystem->alleAuftraegeToString(); break;
        case 2: freieTaxis(); break;
        case 3: taxiAuftragErstellen();break;
        case 9: break;

        default: cout << "Das war eine falsche Eingabe versuchen Sie es bitte erneut" << endl;
        }
    } while (eingabe!=9);

    return 0;
}

