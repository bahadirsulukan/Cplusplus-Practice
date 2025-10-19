#include <iostream>

using namespace std;

// Dieses Programm liest eine Reihe von positiven Zahlen ein und gibt den Mindestwert zurück.

int main()
{
    int m;

    cout << "Bitte geben Sie die Anzahl der Zahlen ein : " << endl;
    cin >> m;

    int Arr[m];

    for (int i = 0; i < m; ++i)
    {
        cout << "Bitte geben Sie das " << i + 1 << ". Elemente ein : " << endl;
        cin >> Arr[i];
        while (Arr[i] < 0)
        {
            cout << "Bitte geben Sie positive Zahlen ein: ";
            cin >> Arr[i];
        }
    }

    int min = Arr[0];
    for (int i = 1; i < m; ++i)
    {

        if (Arr[i] < min)
        {
            min = Arr[i];
        }
    }

    cout << "Mindestwert des Arrays: " << min << endl;
}
