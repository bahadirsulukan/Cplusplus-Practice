#ifndef AUTOVERMIETUNG_H
#define AUTOVERMIETUNG_H
#include <vector>
#include "mietwagen.h"
using namespace std;

class Autovermietung
{
private:
    vector<mietwagen *> fahrzeuge;

public:
    Autovermietung();
    void dialog();
    ~Autovermietung();
    int mietwagenSuchen();
};

#endif // AUTOVERMIETUNG_H
