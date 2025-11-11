#include "kfzSchein.h"
#include "vschein.h"
#include <iostream>
#include <fstream>

using namespace std;

KFZSchein::KFZSchein(int sNummer, string vName, string nName) : VSchein(sNummer, vName, nName)
{
    cout << "KFZ-Kennzeichen?" << endl;
    cin.ignore(10, '\n');
    getline(cin, kfzKennzeichen);
    cout << "Versicherungsbegin (Jahr)?" << endl;
    cin >> vBeginn;
}

void KFZSchein::anzeigen()
{
    cout << "KFZVersicherung ueber" << kfzKennzeichen << " seit" << vBeginn << endl;
}
