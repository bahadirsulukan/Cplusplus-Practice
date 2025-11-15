#include "callcenter.h"
#include "arztpraxis.h"

Callcenter::Callcenter()
{
}

void Callcenter::dialog()
{
    char eingabe;
    string datumUhrzeit;
    string patient;

    while (true)
    {

        cout << "1-> Termin anlegen" << endl;
        cout << "2-> Termin loeschen" << endl;
        cout << "0-> Programm beenden" << endl;
        cin >> eingabe;

        switch (eingabe)
        {
        case '1':

            cout << "Name: " << endl;
            cin >> patient;
            cout << "Termin (DD.ff.YYYY:HHff) : " << endl;
            cin >> datumUhrzeit;
            arztpraxis.terminAnlegen(patient, datumUhrzeit);

            break;
        case '2':

            cout << "Name?: " << endl;
            cin >> patient;
            arztpraxis.terminLoeschen(patient);

            break;
        case '0':

            break;
        default:
            break;
        }
    }
}
