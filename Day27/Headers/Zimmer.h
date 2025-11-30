#ifndef ZIMMER_H
#define ZIMMER_H
#include <iostream>
#include <vector>

using namespace std;

class Zimmer
{
private:
    int zimmerNummer;
    vector<string> moebelListe;

public:
    Zimmer(int z);
    void addMoebel();
    void moebelAnzeigen();
    int getZimmernummer();
    void setZimmerNummer(int newZimmerNummer);
};

#endif // ZIMMER_H
