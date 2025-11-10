#ifndef VSCHEIN_H
#define VSCHEIN_H
#include <iostream>

using namespace std;

class VSchein
{
protected:
    int scheinNummer;
    string vorname;
    string nachname;

public:
    VSchein(int sNummer, string vName, string nName);
    virtual void anzeigen();
    int getScheinNr();
};

#endif // VSCHEIN_H
