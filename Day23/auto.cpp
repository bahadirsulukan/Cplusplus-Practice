#include "auto.h"

// Header dosyasinin icindeki class sinifinin icindeki fonksiyonlarin icerigini dolduruyoruz daha sonrasinda main.cpp de kullanabilmek icin

Auto::Auto(string _Model, string _Farbe, int _Autops)
{

    Model = _Model;
    Farbe = _Farbe;
    Autops = _Autops;
}

void Auto::AutoinformationZeigen()
{
    cout << endl;
    cout << "Model: " << Auto::Model << endl;
    cout << "Farbe: " << Auto::Farbe << endl;
    cout << "Auto Ps: " << Auto::Autops << endl;
    cout << endl;
};

void Auto::setAutoFarbe(string _Farbe)
{
    Farbe = _Farbe;
}

string Auto::getAutoFarbe() { return Farbe; }

void Auto::setAutoModel(string _Model)
{
    Model = _Model;
}

string Auto::getAutoModel() { return Model; }

void Auto::setAutops(int _Autops)
{
    Autops = _Autops;
}

int Auto::getAutops() { return Autops; }

// void Haus::AAnzahldesHauses()
//{
//     const int Max_Size_Liste = 5;
//     int NummerdesHaus;
//     for (int i = 1; i <= Max_Size_Liste; ++i) {
//         if(i<=Max_Size_Liste)
//         {
//             cout << "Bitte geben Sie die Zahl des Hauses, das wir aufbauen :" << endl;
//             cin >> NummerdesHaus;
//             AnzahldesHauses.push_back(NummerdesHaus);
//         }
//     }

//}

void Haus::InformationEingeben()
{
    cout << "Bitte geben Sie in dieser Reihenfolge (Zimmer, Stock, Wo, Aufzug) die Informationen von ein: " << endl;
    cin >> Zimmer >> Stock >> Wo >> Aufzug;
};

void Haus::InformationenZeigen()
{
    cout << Haus::Nummerdeshaus;
    cout << "Die Anzahl des Zimmer: " << Haus::Zimmer << endl;
    cout << "In welchem Stock befindet sich das Haus: " << Haus::Stock << endl;
    cout << "In welchem Stadt befindet sich das Haus: " << Haus::Wo << endl;
    cout << "Gibt es ein Aufzug: " << Haus::Aufzug << endl;
};
