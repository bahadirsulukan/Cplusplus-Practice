#include <iostream>

using namespace std;

// Dieses Programm liest drei double Zahlen ein und berechnet deren Summe, Produkt und Mittelwert.

int main()
{
    double sum, prd, mtw;
    double DZahl1, DZahl2, DZahl3;

    cout << "Geben Sie bitte erste double Zahl" << endl;
    cin >> DZahl1;
    cout << "Geben Sie bitte zweite double Zahl" << endl;
    cin >> DZahl2;
    cout << "Geben Sie bitte dritte double Zahl" << endl;
    cin >> DZahl3;

    sum = DZahl1 + DZahl2 + DZahl3;
    prd = DZahl1 * DZahl2 * DZahl3;
    mtw = sum / 3;

    cout << "Summe:" << sum << endl;
    cout << "Produkt:" << prd << endl;
    cout << "Mittelwert:" << mtw << endl;

    return 0;
}
