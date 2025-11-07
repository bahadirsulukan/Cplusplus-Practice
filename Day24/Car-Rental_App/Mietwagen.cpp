#include "mietwagen.h"

mietwagen::mietwagen()
{
    cout << "Welche Marke ist das: " << endl;
    cin >> marke;
    cout << "Bitte geben Sie Kennzeichen ein: " << endl;
    cin >> kennzeichen;
    cout << "Sitze eingeben: " << endl;
    cin >> sitze;
    cout << "Marke ist : " << marke << endl
         << "Kennzeichen: " << kennzeichen << endl
         << "sitze: " << sitze << endl;
}

void mietwagen::anmieten(fahrt f)
{
    if (verfuegbarkeitPruefen(f))
    {
        fahrtenbuch.push_back(f);
        cout << "Fahrt " << f.getnummer() << " erfolgreich angelegt" << endl;
    }
    else
        cout << "Buchung wegen Ueberschneidung nicht erfolgt!" << endl;
}

void mietwagen::fahrtAnzeigen(int nummer)
{

    for (unsigned int i = 0; i < fahrtenbuch.size(); i++)
    {
        if (fahrtenbuch[i].getnummer() == nummer)
        {
            fahrtenbuch[i].anzeigen();
        }
        else
        {
            cout << "Es wurde nicht gefunden." << endl;
        }
    }
}

void mietwagen::alleFahrtenAnzeigen()
{
    if (fahrtenbuch.size() <= 0)
        cout << "Der Mietwagen noch nicht verliehen wurde." << endl;
    else
        for (unsigned int i = 0; i <= fahrtenbuch.size(); ++i)
        {
            fahrtenbuch[i].anzeigen();
        }
}

bool mietwagen::nummerPruefen(int nummer)
{

    for (unsigned int i = 0; i < fahrtenbuch.size(); ++i)
    {
        if (fahrtenbuch[i].getnummer() == nummer)
            return true;
    }
    return false;
}

bool mietwagen::fahrtLoeschen(int nummer)
{
    for (unsigned int i = 0; i <= fahrtenbuch.size(); ++i)
    {
        if (fahrtenbuch[i].getnummer() == nummer)
        {
            fahrtenbuch.erase(fahrtenbuch.begin() + i);
            return true;
        }
    }
    return false;
}

bool mietwagen::verfuegbarkeitPruefen(fahrt f)
{
    for (unsigned int i = 0; i < fahrtenbuch.size(); i++)
    {

        // neueAbgabe >= vorhandeneAbholung UND neueAbgabe <= vorhandenAbgabe
        if (f.getAbgabedatum() >= fahrtenbuch[i].getAbholdatum() &&
            f.getAbgabedatum() <= fahrtenbuch[i].getAbgabedatum())
        {
            return false;
        }

        // neueAbholung >= vorhandeneAbholung UND neueAbholung <= vorhandenAbgabe
        if (f.getAbholdatum() >= fahrtenbuch[i].getAbholdatum() &&
            f.getAbholdatum() <= fahrtenbuch[i].getAbgabedatum())
        {
            return false;
        }

        // neueAbholung <= vorhandeneAbholung UND neueAbgabe >= vorhandenAbgabe
        if (f.getAbholdatum() <= fahrtenbuch[i].getAbholdatum() &&
            f.getAbgabedatum() >= fahrtenbuch[i].getAbgabedatum())
        {
            return false;
        }
    }
    return true;
}

void mietwagen::fahrzeugAnzeigen()
{
    cout << " Fahrzeug " << marke << " mit KFZ-Kennzeichen " << kennzeichen << endl;
}
