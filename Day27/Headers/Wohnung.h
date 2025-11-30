#ifndef WOHNUNG_H
#define WOHNUNG_H
#include "Zimmer.h"
#include <iostream>
#include <vector>

using namespace std;

class Wohnung
{
private:
    vector<Zimmer *> zimmerListe;
    string wohnungsName;

public:
    Wohnung();
    void zimmerHinzufuegen(Zimmer *pZ);
    void zimmerAnzeigen(int nummer);
    void moebelHinzufuegen(int nummer);
};

#endif // WOHNUNG_H
