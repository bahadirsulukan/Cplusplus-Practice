#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
    Fraction f1;
    Fraction f2;
    Fraction result;
    readFraction(f1);
    readFraction(f2);
    cout << endl
         << "Erster Bruch: ";
    printFraction(f1);
    cout << endl;

    cout << "Zweiter Bruch: ";
    printFraction(f2);

    // Addition
    result = add(f1, f2);
    cout << endl
         << "Addition: ";
    printFraction(result);
    cout << endl;

    // Substraktion
    result = subtract(f1, f2);
    cout << "Subtraktion: ";
    printFraction(result);
    cout << endl;

    // Multiplikation
    result = multiply(f1, f2);
    cout << "Multiplikation: ";
    printFraction(result);
    cout << endl;

    // Division
    result = divide(f1, f2);
    cout << "Division: ";
    printFraction(result);
    cout << endl;

    return 0;
}
