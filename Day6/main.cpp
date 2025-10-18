#include <iostream>

using namespace std;

int main()
{
    cout << "Los geht´s" << endl;
    int i = 0;
    int sum = 0;

    while (i <= 9)
    {
        sum = sum + i;
        i = i + 1;
    }
    cout << "Ergebnis" << "\t" << sum << endl;
    return 0;
}
// This program calculates the sum of integers from 0 to 9 and prints the result.