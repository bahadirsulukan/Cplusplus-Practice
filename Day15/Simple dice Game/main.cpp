#include <iostream>

using namespace std;

// The program simulates a dice game where two numbers are inputted.
// It checks for special conditions: if both numbers are the same (a "Pasch")
// or if the combination is (1,2) or (2,1) (a "Maexchen").
// Otherwise, it simply outputs the two numbers concatenated.

// this is a simple dice game simulation

int main()
{
    int Zahl1, Zahl2;

    cout << "Geben Sie erste Zahl zwischen 1-6" << endl;
    cin >> Zahl1;
    cout << "Geben Sie zweite Zahl zwischen 1-6" << endl;
    cin >> Zahl2;

    if (Zahl1 == Zahl2)
    {
        cout << "Pasch " << Zahl1 << endl;
    }
    else if (Zahl1 = 1, Zahl2 == 2)
    {
        cout << "Maexchen" << endl;
    }
    else if (Zahl1 = 2, Zahl2 == 1)
    {
        cout << "Maexchen" << endl;
    }
    else
    {
        cout << Zahl1 << Zahl2 << endl;
    }

    return 0;
}
