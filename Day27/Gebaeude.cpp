#include "gebaeude.h"
#include "wohnung.h"
#include "zimmer.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

Gebaeude::Gebaeude()
{
}

void Gebaeude::dialog()
{
    Wohnung *neueWohnung = new Wohnung;
    wohnungListe.push_back(neueWohnung);

    int n;
    char eingabe;

    while (true)
    {

        cout << "1-> Zimmer festlegen" << endl;
        cout << "2-> Moebel ergaenzen" << endl;
        cout << "3-> Zimmer anzeigen" << endl;
        cout << "0-> Programm beenden" << endl;
        cin >> eingabe;

        switch (eingabe)
        {
        case '1':
        {
            cout << "Zimmernummer: " << endl;
            cin >> n;

            Zimmer *pZ = new Zimmer(n);
            neueWohnung->zimmerHinzufuegen(pZ);
        }
        break;
        case '2':

            cout << "Zimmernummer: " << endl;
            cin >> n;
            neueWohnung->moebelHinzufuegen(n);

            break;
        case '3':

            cout << "Zimmernummer: " << endl;
            cin >> n;

            neueWohnung->zimmerAnzeigen(n);

            break;
        case '0':
            break;
        default:
            cout << "Bitte wählen sie eine Zahl aus, welche auf Menu steht!" << endl;
            break;
        }
    }
}
Gebaeude::~Gebaeude()
{
    for (auto wohnung : wohnungListe)
    {
        delete wohnung;
    }
}