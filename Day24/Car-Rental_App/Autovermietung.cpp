#include "Autovermietung.h"
#include <vector>
#include <algorithm>

Autovermietung::Autovermietung()
{
}

void Autovermietung::dialog()
{
    mietwagen *fahrzeug;
    fahrzeug = new mietwagen;
    fahrzeuge.push_back(fahrzeug);
    char eingabe;
    int nummer;
    string kunde;
    int holdatum;
    int abdatum;
    int index;

    // Variablen deklarieren

    // dynamische Erstellung eines Mietwagens und in Vector schreiben

    while (true)
    {

        cout << "1: Fahrzeug mieten" << endl;
        cout << "2: Fahrt anzeigen" << endl;
        cout << "3: Alle Fahrten anzeigen" << endl;
        cout << "4: Fahrt loeschen" << endl;
        cout << "5: Fahrtzeug hinzufügen" << endl;
        cout << "0: Programm beenden" << endl;

        cin >> eingabe;

        switch (eingabe)
        {
        case '1':
        { // Fahrzeug mieten

            index = mietwagenSuchen();
            if (index == -1)
            {
                break;
            }

            cout << "Bitte geben Sie die Buchungsnummer ein: " << endl;
            cin >> nummer;
            if (fahrzeug->nummerPruefen(nummer))
            {
                cout << "Die Buchungsnummer bereits vorhanden. Bitte erneut eingeben" << endl;
                break;
            }

            cout << "Bitte geben Sie Ihre Nach- und Vorname dazwischen kein Leerzeichen, sondern mit Komma  ein: " << endl;
            cin >> kunde;
            cout << "Bitte geben Sie Abholdatum im Format yyyymmdd : " << endl;
            cin >> holdatum;
            cout << "Bitte geben Sie Abgabedatum im Format yyyymmdd : " << endl;
            cin >> abdatum;

            if (abdatum < holdatum)
            {
                cout << "Abgabedatum kann nicht vor Abholdatum liegen." << endl;
                break;
            }

            fahrt fahrt(nummer, kunde, holdatum, abdatum);
            fahrzeug->anmieten(fahrt);
        }
        break;

        case '2':
        { // Fahrt anzeigen
            cout << "Bitte geben Sie Ihre Buchungsnummer ein: " << endl;
            cin >> nummer;
            fahrzeug->fahrtAnzeigen(nummer);
        }
        break;

        case '3':
        { // Alle Fahrten anzeigen

            fahrzeug->alleFahrtenAnzeigen();
        }
        break;
        case '4':
        { // Fahrt loeschen

            cout << "Bitte geben Sie die Buchungsnummer ein, die Sie löschen möchten: " << endl;
            cin >> nummer;

            if (fahrzeug->fahrtLoeschen(nummer))
                cout << "Die Löschung mit der Scheinnummer erfolgreich. " << endl;
            else
                cout << "Buchungsnummer nicht gefunden." << endl;
        }
        break;
        case '5':
        { // Fahrtzeug hinzufügen

            mietwagen *fahrzeug;
            fahrzeug = new mietwagen;
            fahrzeuge.push_back(fahrzeug);
        }
        break;
        case '6':
        { // Alle Fahrzeugen anzeigen
            for (unsigned int i = 0; i < fahrzeuge.size(); ++i)
            {
                cout << "******************************************" << endl;
                fahrzeuge[i]->fahrzeugAnzeigen();
            }
            fahrzeug->alleFahrtenAnzeigen();
        }
        break;

        case '0':
        { // Programm beenden
            return;
            break;
        }
        default:
            cout << "Ungueltige Eingabe" << endl;
        }
    }
}

Autovermietung::~Autovermietung()
{

    for (unsigned int i = 0; i <= fahrzeuge.size(); ++i)
    {
        delete fahrzeuge[i];
    }
    fahrzeuge.clear();
    cout << "Vielen Dank!" << endl;
}

int Autovermietung::mietwagenSuchen()
{
    unsigned int index;
    cout << "Welches Fahrzeug (index Nr.) " << endl;
    cin >> index;

    if (index >= fahrzeuge.size())
    {

        cout << "Fahrzeug gibt es nicht : Buchung wird bgebrochen " << endl;
        return -1;
    }
    else
    {
        fahrzeuge[index]->fahrzeugAnzeigen();
        return index;
    }
}
