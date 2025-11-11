#ifndef LVSCHEIN_H
#define LVSCHEIN_H
#include <iostream>
#include "vschein.h"

using namespace std;

class LVSchein : public VSchein
{
private:
    double vSumme;
    int vBeginn;
    int laufzeit;

public:
    LVSchein(int sNummer, string vName, string nName);
    void anzeigen();
};

#endif // LVSCHEIN_H
