#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// The program sorts a list of numbers entered by the user in ascending order
// and checks if the sorting was successful.

int main()
{
    vector<int> zahlen;
    const int Max_Size_Liste = 5;
    int Werte;

    for (int i = 0; i < Max_Size_Liste; i++)
    { // Die Werte von Benutzer einzugeben.
        if (i < Max_Size_Liste)
        {
            cout << "Geben Sie bitte " << i + 1 << ". Zahl ein, um Liste hinzuzufügen." << endl;
            cin >> Werte;

            zahlen.push_back(Werte);
        }
    }

    sort(zahlen.begin(), zahlen.end()); // Vektor in aufsteigender Reihenfolge sortieren

    bool aufsteigend = is_sorted(zahlen.begin(), zahlen.end()); // Bool kontroliert in If Else Schleife, dass diese Funktion richtig oder falsch ist

    if (aufsteigend)
    {
        cout << "Die Zahlen sind in aufsteigender Reihenfolge aufgeführt" << endl;
        cout << "In aufsteigender Reihenfolge neue Array : ";
        // Diese For-Schleife nimmt jede Anzahl von neuen Arrays in aufsteigender Reihenfolge sortiert und gibt diese Zahlen zurück.
        for (const auto &zahl : zahlen)
        {
            cout << zahl << ", ";
        }
        cout << endl;
    }
    else
    {
        cout << "Die Zahlen können nicht in aufsteigender Reihenfolge aufgeführt werden" << endl;
    }
    return 0;
}

// int main()
//{
//     vector<int> zahlen = {5,7,9,-15,14,25,-45,0};

//    sort( zahlen.begin(), zahlen.end() ); // Vektor in aufsteigender Reihenfolge sortieren

//    bool aufsteigend = is_sorted( zahlen.begin(), zahlen.end() ); // Bool kontroliert in If Else Schleife, dass diese Funktion richtig oder falsch ist

//    if(aufsteigend){
//        cout << "Die Zahlen sind in aufsteigender Reihenfolge aufgeführt" << endl;
//                cout << "In aufsteigender Reihenfolge neue Array : ";
//        // Diese For-Schleife nimmt jede Anzahl von neuen Arrays in aufsteigender Reihenfolge sortiert und gibt diese Zahlen zurück.
//        for (const auto & zahl : zahlen) {
//                    cout << zahl << ", " ;
//        }
//        cout << endl;
//    }
//    else {
//        cout << "Die Zahlen können nicht in aufsteigender Reihenfolge aufgeführt werden" << endl;
//        }
//    return 0;
//}
