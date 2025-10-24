#include <iostream>
#include "fraction.h"

using namespace std;

void readFraction(Fraction &f)
{
    cout << "Geben Sie bitte ein Bruch" << endl;
    cout << "Zähler :";

    cin >> f.numerator;
    do
    {
        cout << "Nenner : ";
        cin >> f.denominator;
        if (f.denominator == 0)
        {
            cout << "Nenner darf nicht 0 sein" << endl;
        }
    } while (f.denominator == 0);
}

void printFraction(Fraction &f)
{
    format(f);
    if (f.numerator == f.denominator)
    {
        cout << f.numerator;
    }
    else
    {
        cout << f.numerator << "/" << f.denominator;
    }
}

int gcd(int p, int q) // Berechnung größter gemeinsamer Teiler
{
    while (q != 0)
    {
        int r = p % q;
        p = q;
        q = r;
    }
    return p;
}

void cancel(Fraction &fRef)
{
    int gcdNumDenom = gcd(fRef.numerator, fRef.denominator);
    fRef.numerator /= gcdNumDenom;
    fRef.denominator /= gcdNumDenom;
}
void format(Fraction &fRef) // Bruch formatieren (Aufruf am Ende der vier
{                           // ... Grundrechenarten und von readFraction)
    cancel(fRef);
    if (fRef.denominator < 0)
    {
        fRef.numerator = -fRef.numerator;
        fRef.denominator = -fRef.denominator;
    }
    else if (fRef.denominator == 0)
        cout << "Nenner darf nicht Null sein!" << endl;
}

Fraction add(Fraction &f1Ref, Fraction &f2Ref)
{
    Fraction ergebnis;
    ergebnis.numerator = f1Ref.numerator * f2Ref.denominator + f2Ref.numerator * f1Ref.denominator;
    ergebnis.denominator = f1Ref.denominator * f2Ref.denominator;

    format(ergebnis);
    return ergebnis;
}

Fraction subtract(Fraction &f1Ref, Fraction &f2Ref)
{
    Fraction ergebnis;
    ergebnis.numerator = f1Ref.numerator * f2Ref.denominator - f2Ref.numerator * f1Ref.denominator;
    ergebnis.denominator = f1Ref.denominator * f2Ref.denominator;

    format(ergebnis);
    return ergebnis;
}

Fraction multiply(Fraction &f1Ref, Fraction &f2Ref)
{
    Fraction ergebnis;
    ergebnis.numerator = f1Ref.numerator * f2Ref.numerator;
    ergebnis.denominator = f1Ref.denominator * f2Ref.denominator;

    format(ergebnis);
    return ergebnis;
}

Fraction divide(Fraction &f1Ref, Fraction &f2Ref)
{
    Fraction ergebnis;
    ergebnis.numerator = f1Ref.numerator * f2Ref.denominator;
    ergebnis.denominator = f1Ref.denominator * f2Ref.numerator;

    format(ergebnis);
    return ergebnis;
}
