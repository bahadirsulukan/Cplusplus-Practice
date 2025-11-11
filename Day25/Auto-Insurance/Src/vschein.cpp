#include "vschein.h"
#include <iostream>

using namespace std;

VSchein::VSchein(int sNummer, string vName, string nName)
{
    scheinNummer = sNummer;
    vorname = vName;
    nachname = nName;
}

void VSchein::anzeigen()
{
    cout << "Versicherungsnummer: " << scheinNummer << "fuer " << nachname << " " << vorname << " :" << endl;
}

int VSchein::getScheinNr()
{
    return scheinNummer;
}
