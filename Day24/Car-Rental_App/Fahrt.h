#ifndef FAHRT_H
#define FAHRT_H
#include <string>
#include <iostream>

using namespace std;

class fahrt
{
private:
    int nummer;
    int abholdatum;
    int abgabedatum;
    string kunde;

public:
    fahrt(int n, string k, int ab, int bis);
    void anzeigen();
    int getnummer();

    int getAbholdatum() const;
    int getAbgabedatum() const;
};

#endif // FAHRT_H
