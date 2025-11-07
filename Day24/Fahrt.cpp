#include "fahrt.h"
#include <iostream>

using namespace std;

// fahrt::fahrt()
//{

//}

int fahrt::getAbholdatum() const
{
    return abholdatum;
}

int fahrt::getAbgabedatum() const
{
    return abgabedatum;
}

fahrt::fahrt(int n, string k, int ab, int bis)
{
    nummer = n;
    kunde = k;
    abholdatum = ab;
    abgabedatum = bis;
}

void fahrt::anzeigen()
{
    cout << "Nr." << nummer << ": Kunde " << kunde << " holt Fahrzeug am " << abholdatum << " ab und bringt es am " << abgabedatum << "zurueck" << endl;
}

int fahrt::getnummer()
{
    return nummer;
}
