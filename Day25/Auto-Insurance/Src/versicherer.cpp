#include "versicherer.h"
#include <vector>
#include <algorithm>
#include "vschein.h"
#include "kfzSchein.h"
#include "lvSchein.h"

Versicherer::Versicherer()
{
}

void Versicherer ::dialog()
{

    char eingabe;
    int sNummer;
    string vName;
    string nName;
    char kl;

    while (true)
    {
        cout << "1-> Versicherung anlegen" << endl;
        cout << "2-> Versicherungsdetails ausgeben" << endl;
        //        cout << "3-> Versicherung anlegen" << endl;
        cout << "0-> Programm beenden" << endl;
        cin >> eingabe;

        switch (eingabe)
        {
        case '1':
        {

            cout << "Bitte geben Sie die Versicherungsnummer ein: " << endl;
            cin >> sNummer;
            cout << "Bitte geben Sie Ihre Nachname ein: " << endl;
            cin >> nName;
            cout << "Bitte geben Sie Ihre Vorname ein: " << endl;
            cin >> vName;

            cout << "Handelt sich um eine KFZ- oder Lebenversicherung?" << endl;
            cin >> kl;

            if (kl == 'K' || kl == 'k')
            {
                KFZSchein *KFZ;
                KFZ = new KFZSchein(sNummer, vName, nName);
                versicherungen.push_back(KFZ);
                cout << "KFZ wurde hinzugefügt" << endl;
            }
            else if (kl == 'L' || kl == 'l')
            {
                LVSchein *LV;
                LV = new LVSchein(sNummer, vName, nName);
                versicherungen.push_back(LV);
                cout << "Lebensversicherung wurde hinzugefügt" << endl;
            }
            else
            {
                cout << "Ungültige Eingabe. Bitte wählen Sie K oder L " << endl;
                break;
            }
        }
        break;
        case '2':
        {
            cout << "Bitte geben Sie Ihre Scheinnummer ein: " << endl;
            cin >> sNummer;
            bool found = false;
            for (unsigned int i = 0; i < versicherungen.size(); ++i)
            {
                if (versicherungen[i]->getScheinNr() == sNummer)
                    versicherungen[i]->anzeigen();
                found = true;
                break;
            }
            if (found == false)
            {
                cout << "Scheinnummer wurde nicht gefunden. Bitte geben Sie eine Nummer erneut ein: " << endl;
            }
        }
        break;

        case '0':
            return;
            break;
        default:
            cout << "Bitte geben Sie nochmal richtige Character ein" << endl;
            break;
        }
    }
}
