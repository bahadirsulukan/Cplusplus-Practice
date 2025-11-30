#ifndef GEBAEUDE_H
#define GEBAEUDE_H
#include "Wohnung.h"
#include <iostream>
#include <vector>

using namespace std;

class Gebaeude
{
private:
    vector<Wohnung *> wohnungListe;

public:
    Gebaeude();
    Gebaeude(const vector<Wohnung *> &wohnungListe);
    void dialog();
};

#endif // GEBAEUDE_H