#ifndef VERSICHERER_H
#define VERSICHERER_H
#include "vschein.h"
#include <iostream>
#include <vector>

using namespace std;

class Versicherer
{
private:
    vector<VSchein *> versicherungen;

public:
    Versicherer();
    void dialog();
    bool klfot(char kl);
};

#endif // VERSICHERER_H
