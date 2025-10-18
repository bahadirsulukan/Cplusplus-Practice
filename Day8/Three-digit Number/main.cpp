#include <iostream>

using namespace std;

// Eine dreistellige Zahl zerlegen

int main()
{
    int Zahl3st;

    cout << "Geben Sie eine dreistellige Zahl ein : " << endl;
    cin >> Zahl3st;

    if (Zahl3st < 100 || Zahl3st > 999)
    {
        cout << "Geben Sie bitte eine dreistellige Zahl ein : " << endl;
        cin >> Zahl3st;
    }

    // /100 dividiert die Zahl durch 100 dann nimmt Vorkommastelle
    // %10 dividiert die Zahl durch 10 dann nimmt Nachkommastelle

    int ersteZhl = Zahl3st / 100;
    int zweiteZhl = (Zahl3st / 10) % 10;
    int dritteZhl = Zahl3st % 10;

    cout << ersteZhl << endl;
    cout << zweiteZhl << endl;
    cout << dritteZhl << endl;
}
