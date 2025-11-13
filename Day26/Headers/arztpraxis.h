#ifndef ARZTPRAXIS_H
#define ARZTPRAXIS_H
#include "termin.h"
#include <iostream>
#include <vector>

using namespace std;

class Arztpraxis
{
private:
    const string name = "Dr. Koch";
    vector<Termin> terminListe;

public:
    Arztpraxis();
    Arztpraxis(const string &name, const vector<Termin> &terminListe);
    void terminAnlegen(string patient, string datumUhrzeit);
    bool terminLoeschen(string patient);
    bool schonEingegeben(string datumUhrzeit);
};

#endif // ARZTPRAXIS_H
