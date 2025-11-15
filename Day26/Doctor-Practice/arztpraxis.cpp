#include "arztpraxis.h"
#include "termin.h"
#include <iostream>

using namespace std;

Arztpraxis::Arztpraxis()
{
}

void Arztpraxis::terminAnlegen(string patient, string datumUhrzeit)
{

    Termin termin(patient, datumUhrzeit);
    terminListe.push_back(termin);

    for (unsigned int i = 0; i < terminListe.size(); i++)
    {
        if ((terminListe[i].getDatumUhrzeit() == datumUhrzeit) && (terminListe[i].getGeloescht() == false))
        {
            cout << "Termin" << datumUhrzeit << " ist schon vergeben. Bitte neuen Termin eingeben: " << endl;
            cin >> datumUhrzeit;
            cout << "Termin wurde eingetragen." << endl;
        }
    };
}

bool Arztpraxis::terminLoeschen(string patient)
{
    bool found = false;
    for (unsigned int i = 0; i < terminListe.size(); ++i)
    {
        if (terminListe[i].getPatient() == patient)
        {
            terminListe[i].setGeloescht(true);
            found = true;
        }
    }
    if (found)
    {
        return true;
    }
    else
    {
        return false;
    }
}
