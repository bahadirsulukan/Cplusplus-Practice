#include <iostream>

using namespace std;

// Zinseszinsberechnung

int main()
{
    double Anfangskapital, Zinssatz;
    int Laufzeit;

    cout << "Bitte geben Sie das Anfangskapital: " << endl;
    cin >> Anfangskapital;
    cout << "Bitte geben Sie den Zinssatz (%): " << endl;
    cin >> Zinssatz;
    cout << "Bitte geben Sie die Laufzeit (Jahr): " << endl;
    cin >> Laufzeit;

    // wir verwenden for Schleife weil wir Variablen benutzen

    double Kapital = Anfangskapital;
    for (int Jahr = 1; Jahr <= Laufzeit; Jahr++)
    {

        double Zinsen = Kapital * Zinssatz / 100;

        Kapital += Zinsen;

        cout << "Jahr " << Jahr << ": " << Kapital << endl;
    }
}
