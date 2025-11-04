#ifndef AUTO_H
#define AUTO_H
#include <iostream>

#endif // AUTO_H

using namespace std;

// OOP nin en önemli özelligi olan nesneyi main.cpp nin disinda olusturabilmek icin bir header dosyasi olusturuyoruz ve daha sonrasinda icerisine bir class-
// sinifi acarak icerisine nesnenin niteliklerini olusturuyoruz
class Auto
{
public:
    void setAutoFarbe(string _Farbe);
    string getAutoFarbe();
    void setAutoModel(string _Model);
    string getAutoModel();
    void setAutops(int _Autops);
    int getAutops();
    void AutoinformationZeigen();
    Auto(string _Farbe, string _Model, int _Autops);

private:
    string Farbe;
    string Model;

    int Autops;
};

class Haus
{
public:
    vector<int> AnzahldesHauses;
    void AAnzahldesHauses();

    void InformationEingeben();
    void InformationenZeigen();
    int Nummerdeshaus;

private:
    int Zimmer;
    int Stock;
    string Wo;
    string Aufzug;
};
