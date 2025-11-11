#ifndef KFZSCHEIN_H
#define KFZSCHEIN_H
#include <iostream>
#include "vschein.h"

using namespace std;

class KFZSchein : public VSchein
{
private:
    string kfzKennzeichen;
    int vBeginn;

public:
    KFZSchein(int sNummer, string vName, string nName);
    void anzeigen();
};

#endif // KFZSCHEIN_H
