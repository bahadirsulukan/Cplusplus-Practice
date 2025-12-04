#include "Zimmer.h"
#include <iostream>
#include <vector>

using namespace std;

Zimmer::Zimmer(int z)
{
    zimmerNummer = z;
}

int Zimmer::getZimmernummer()
{
    return zimmerNummer;
}

void Zimmer::addMoebel()
{
    string moebelName;
    cout << "Name des Moebelstuecks? " << endl;
    cin >> moebelName;
    moebelListe.push_back(moebelName);
}

void Zimmer::moebelAnzeigen()
{
    cout << "ZimmerNr." << zimmerNummer << endl;

    for (unsigned int i = 0; i < moebelListe.size(); ++i)
    {
        cout << "Moebelstueck " << i + 1 << " : " << moebelListe[i] << endl;
    }
}
