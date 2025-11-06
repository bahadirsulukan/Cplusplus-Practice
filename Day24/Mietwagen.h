#ifndef MIETWAGEN_H
#define MIETWAGEN_H
#include <string>
#include "fahrt.h"
#include <iostream>
using namespace std;

class mietwagen
{
private:
    string marke;
    string kennzeichen;
    int sitze;
    vector<fahrt> fahrtenbuch;

public:
    mietwagen();
    void anmieten(fahrt f);
    void fahrtAnzeigen(int nummer);
    void alleFahrtenAnzeigen();
    bool nummerPruefen(int nummer);
    bool fahrtLoeschen(int nummer);
    bool verfuegbarkeitPruefen(fahrt f);
    void fahrzeugAnzeigen();
};

#endif // MIETWAGEN_H
