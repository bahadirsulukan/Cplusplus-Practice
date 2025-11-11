#include "lvSchein.h"
#include "vschein.h"

LVSchein::LVSchein(int sNummer, string vName, string nName) : VSchein(sNummer, vName, nName)
{
    cout << "Versicherungssumme?" << endl;
    cin >> vSumme;
    cout << "Versicherungsbegin (Jahr) ?" << endl;
    cin >> vBeginn;
    cout << "Laufzeit in Jahren?" << endl;
    cin >> laufzeit;
}

void LVSchein::anzeigen()
{
    cout << "Lebensversicherung ueber " << vSumme << " seit " << vBeginn << " mit Laufzeit von " << laufzeit << " Jahren" << endl;
}
