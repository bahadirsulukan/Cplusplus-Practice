#include <iostream>
#include <iomanip>
using namespace std;

// Dieses Programm berechnet die Quadratwurzel einer positiven Zahl mit der gewünschten Genauigkeit.

int main()
{
    long double x, a;
    long double y = 1.0;
    int genau;

    cout << "Geben Sie ein Zahl ein :";
    cin >> a;
    cout << "Geben Sie Genauigkeit Nachkommastellen ein (max.50) \n";
    cin >> genau;
    x = a;

    if (x < y)
    {
        cout << "Fehler: Bitte geben Sie positive Zahl ein \n";
    }
    else
    {
        while (x > y)
        {
            x = (x + y) / 2;
            y = a / x;
        }
        cout << "Die Würzel betraegt" << setprecision(genau) << fixed << x << "\n";
    }
}
