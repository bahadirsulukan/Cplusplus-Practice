#include "Wohnung.h"
#include "Zimmer.h"
#include <iostream>
#include <vector>
#include <algorithm>

Wohnung::Wohnung()
{
    cout << "Wohnungsname: " << endl;
    cin >> wohnungsName;
}

void Wohnung::zimmerHinzufuegen(Zimmer *pZ)
{

    zimmerListe.push_back(pZ);
    cout << pZ->getZimmernummer() << " Zimmer" << " wurde erfolgreich hinzugefügt" << endl;
}

void Wohnung::moebelHinzufuegen(int nummer)
{
    for (unsigned int i = 0; i < zimmerListe.size(); ++i)
    {
        if (zimmerListe[i]->getZimmernummer() == nummer)
        {
            zimmerListe[i]->addMoebel();
        }
    }
}

void Wohnung::zimmerAnzeigen(int nummer)
{
    for (unsigned int i = 0; i < zimmerListe.size(); ++i)
    {
        if (zimmerListe[i]->getZimmernummer() == nummer)
        {
            zimmerListe[i]->moebelAnzeigen();
        }
    }
}
